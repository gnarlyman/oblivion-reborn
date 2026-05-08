#include "engine.h"
#include "obse_minimal.h"
#include "log.h"
#include <Windows.h>
#include <atomic>
#include <cstdint>
#include <unordered_map>
#include <vector>

namespace {
OBSEConsoleInterface* g_consoleIntfc = nullptr;

// ---------------------------------------------------------------------------
// CreateReference hook (T08-fix).
//
// 0x00B324CC turned out to be a static, not a "last-created-ref" global —
// every TESObjectREFR creation actually goes through the universal factory
// at 0x0044A7D0 and returns the new TESObjectREFR* in EAX.
//
// Rather than splice into the factory itself (5-byte JMP + naked-asm
// trampoline), we patch the two call sites inside placeatme Execute
// (0x00514B50). Both call sites were located empirically with
// research/find_callsites.py: 0x00514F58 and 0x005152A9. Each is a
// standard 5-byte CALL rel32. We rewrite the rel32 to point at our
// __cdecl wrapper, which forwards to the original factory and (when
// the capture flag is set) records the returned formID.
//
// CreateReference signature (from RE):
//   TESObjectREFR* __cdecl CreateReference(
//       TESForm* baseForm, float pos[3], float rot[3],
//       TESObjectCELL* cell, int worldspaceFlag, TESObjectREFR* existingRef);
// ---------------------------------------------------------------------------
constexpr uintptr_t kCreateReferenceAddr = 0x0044A7D0;
constexpr uintptr_t kPlaceAtMeCallSite1  = 0x00514F58;
constexpr uintptr_t kPlaceAtMeCallSite2  = 0x005152A9;

std::atomic<bool>     g_captureSpawn{false};
std::atomic<uint32_t> g_capturedRefId{0};
std::atomic<bool>     g_spawnHookInstalled{false};

using CreateReferenceFn = void* (__cdecl*)(void*, float*, float*, void*, int, void*);

void* __cdecl Wrap_CreateReference(void* baseForm, float* pos, float* rot,
                                   void* cell, int wsFlag, void* existingRef) {
    auto fn = reinterpret_cast<CreateReferenceFn>(kCreateReferenceAddr);
    void* result = fn(baseForm, pos, rot, cell, wsFlag, existingRef);
    if (g_captureSpawn.load(std::memory_order_acquire) && result) {
        // formID at offset 0x0C of TESObjectREFR (TESForm header layout).
        uint32_t fid = *reinterpret_cast<uint32_t*>(
            reinterpret_cast<uintptr_t>(result) + 0xC);
        g_capturedRefId.store(fid, std::memory_order_release);
        G5_LOG("hook: captured spawned formID=%08X (refr=%p)", fid, result);
    }
    return result;
}

bool PatchCallTarget(uintptr_t callInstrAddr, void* newTarget) {
    DWORD oldProtect = 0;
    if (!VirtualProtect((LPVOID)callInstrAddr, 5, PAGE_EXECUTE_READWRITE, &oldProtect)) {
        G5_LOG("hook: VirtualProtect(RW) failed at %08X (err=%u)",
               (unsigned)callInstrAddr, GetLastError());
        return false;
    }
    uint8_t* p = reinterpret_cast<uint8_t*>(callInstrAddr);
    if (p[0] != 0xE8) {
        DWORD tmp;
        VirtualProtect((LPVOID)callInstrAddr, 5, oldProtect, &tmp);
        G5_LOG("hook: expected E8 at %08X, found %02X — aborting patch",
               (unsigned)callInstrAddr, p[0]);
        return false;
    }
    int32_t origRel = *reinterpret_cast<int32_t*>(p + 1);
    int32_t newRel = static_cast<int32_t>(
        reinterpret_cast<uintptr_t>(newTarget) - (callInstrAddr + 5));
    *reinterpret_cast<int32_t*>(p + 1) = newRel;

    DWORD tmp = 0;
    VirtualProtect((LPVOID)callInstrAddr, 5, oldProtect, &tmp);
    FlushInstructionCache(GetCurrentProcess(), (LPVOID)callInstrAddr, 5);
    G5_LOG("hook: patched call site %08X: origRel=%08X newRel=%08X target=%p",
           (unsigned)callInstrAddr, (unsigned)origRel, (unsigned)newRel, newTarget);
    return true;
}

// ---------------------------------------------------------------------------
// Engine pointers (Oblivion 1.2.0.416, verified against xOBSE source).
//
//   LookupFormByID  - cdecl (UInt32) -> TESForm*
//                     xOBSE: GameAPI.cpp:110, 0x0046B250
//                     (NOTE: plan suggested 0x004720C0, which is wrong;
//                     the xOBSE-verified address is what we use here.)
//
//   TESObjectREFR::GetContainer() - thiscall (this) -> TESContainer*
//                     xOBSE: GameObjects.cpp:502-505, 0x004D6D40
//                     Internally does the RTTI dynamic-cast against the
//                     attached base form (handles NPC/Creature/Container).
// ---------------------------------------------------------------------------
using LookupFormByIDFn = void* (__cdecl*)(uint32_t formID);
constexpr uintptr_t kLookupFormByIDAddr = 0x0046B250;

using GetContainerFn = void* (__thiscall*)(void* refr);
constexpr uintptr_t kGetContainerAddr = 0x004D6D40;

// ---------------------------------------------------------------------------
// ExtraData type IDs (from xOBSE GameBSExtraData.h:119-208).
// ---------------------------------------------------------------------------
constexpr uint8_t kExtraData_ContainerChanges = 0x1A;
constexpr uint8_t kExtraData_Worn             = 0x1B;
constexpr uint8_t kExtraData_WornLeft         = 0x1C;

// ---------------------------------------------------------------------------
// Form-type IDs for reference validation (xOBSE GameForms.h:243-245).
// Comments in the enum (// 10, // 20, // 30) are hex offsets from
// kFormType_None=0; Cell=0x30, REFR=0x31, ACHR=0x32, ACRE=0x33.
// ---------------------------------------------------------------------------
constexpr uint8_t kFormType_REFR = 0x31;
constexpr uint8_t kFormType_ACHR = 0x32;
constexpr uint8_t kFormType_ACRE = 0x33;

// ---------------------------------------------------------------------------
// Minimal POD layouts. Offsets verified against xOBSE headers.
//
// All structures are read-only — we never construct or destruct them.
// We touch only the fields we list.
// ---------------------------------------------------------------------------

// TESForm: GameForms.h:440-450
//   0x000  vtbl
//   0x004  typeID (UInt8)
//   0x005  pad[3]
//   0x008  flags
//   0x00C  refID (UInt32)
struct RawTESForm {
    void*    vtbl;       // 0x00
    uint8_t  typeID;     // 0x04
    uint8_t  pad05[3];   // 0x05
    uint32_t flags;      // 0x08
    uint32_t refID;      // 0x0C
};
static_assert(offsetof(RawTESForm, typeID) == 0x04, "TESForm.typeID @ 0x04");
static_assert(offsetof(RawTESForm, refID)  == 0x0C, "TESForm.refID @ 0x0C");

// ExtraDataList: GameBSExtraData.h:230-258
//   0x000  vtbl
//   0x004  m_data (BSExtraData*)
//   0x008  m_presenceBitfield[0x0C]
//  total size 0x14
struct RawExtraDataList {
    void*           vtbl;                          // 0x00
    void*           m_data;                        // 0x04 — BSExtraData* head
    uint8_t         m_presenceBitfield[0x0C];      // 0x08
};
static_assert(sizeof(RawExtraDataList) == 0x14, "ExtraDataList sizeof = 0x14");

// BSExtraData: GameBSExtraData.h:213-227
//   0x000  vtbl
//   0x004  type (UInt8)
//   0x005  pad[3]
//   0x008  next (BSExtraData*)
struct RawBSExtraData {
    void*           vtbl;       // 0x00
    uint8_t         type;       // 0x04
    uint8_t         pad05[3];   // 0x05
    RawBSExtraData* next;       // 0x08
};

// TESObjectREFR: GameObjects.h:577-637
//   ...
//   0x01C  baseForm (TESForm*)
//   0x044  baseExtraList (ExtraDataList, 0x14 bytes)
struct RawTESObjectREFR {
    uint8_t header[0x044];          // we only need fields below; padding sketch
};
constexpr size_t kREFR_BaseFormOffset       = 0x01C;
constexpr size_t kREFR_BaseExtraListOffset  = 0x044;

// TESContainer: GameForms.h:799-831
// BaseFormComponent has only a vtbl (4 bytes), then:
//   0x004  type (UInt8)
//   0x005  typePad[3]
//   0x008  list (Entry: { Data* data; Entry* next; })
struct RawContainerEntry {
    struct Data {
        int32_t count;
        RawTESForm* type;
    } * data;                            // 0x00
    RawContainerEntry* next;             // 0x04
};
constexpr size_t kContainer_FirstEntryOffset = 0x008;

// ExtraContainerChanges: GameExtraData.h:32-76
//   inherits BSExtraData (0x0C bytes)
//   0x00C  data (ExtraContainerChanges::Data*)
struct RawECCEntryData {
    // tList<ExtraDataList>* extendData;   0x00
    // SInt32                countDelta;    0x04
    // TESForm*              type;          0x08
    void*       extendData;
    int32_t     countDelta;
    RawTESForm* type;
};

struct RawECCData {
    // tList<EntryData>* objList;     0x00
    // TESObjectREFR*    owner;        0x04
    // float             totalWeight;  0x08
    // float             armorWeight;  0x0C
    void* objList;
    void* owner;
    float totalWeight;
    float armorWeight;
};

struct RawExtraContainerChanges {
    // BSExtraData header
    void*           vtbl;        // 0x00
    uint8_t         type;        // 0x04
    uint8_t         pad05[3];    // 0x05
    RawBSExtraData* next;        // 0x08
    // ExtraContainerChanges fields
    RawECCData*     data;        // 0x0C
};

// tList<T> layout (from xOBSE Utilities.h conventions):
//   0x000  T*    item    (head's payload)
//   0x004  Node* next
// Where the first node IS the list head; an "empty" list has item==NULL.
// We replicate as a generic two-field node walker.
struct RawListNode {
    void*        item;
    RawListNode* next;
};

// ---------------------------------------------------------------------------
// Helpers — all designed to be safe under SEH.
// ---------------------------------------------------------------------------

bool ExtraDataList_HasType(const RawExtraDataList* edl, uint8_t type) {
    // GameBSExtraData.cpp:7-12.
    // index = type >> 3, bit = 1 << (type & 7)
    uint32_t index = (uint32_t)type >> 3;
    if (index >= sizeof(edl->m_presenceBitfield)) return false;
    uint8_t mask = (uint8_t)(1u << (type & 0x07));
    return (edl->m_presenceBitfield[index] & mask) != 0;
}

// Iterates an ExtraDataList's linked BSExtraData chain looking for any
// extra of type kExtraData_Worn or kExtraData_WornLeft. The bitfield is
// the canonical fast check.
bool ExtraDataList_IsWorn(const RawExtraDataList* edl) {
    return ExtraDataList_HasType(edl, kExtraData_Worn)
        || ExtraDataList_HasType(edl, kExtraData_WornLeft);
}

}  // namespace

namespace g5 { namespace engine {

void SetConsoleInterface(OBSEConsoleInterface* intfc) {
    g_consoleIntfc = intfc;
}

bool ExecuteConsoleCommand(const std::string& cmd) {
    G5_LOG("engine: ExecuteConsoleCommand: %s", cmd.c_str());
    if (!g_consoleIntfc || !g_consoleIntfc->RunScriptLine) {
        G5_LOG("engine: console interface not available");
        return false;
    }
    // RunScriptLine's bool is unreliable: empirically returns false even when
    // the side effect happened (placeatme spawns NPCs but returns false), and
    // returns true even when the command was a no-op (coc with invalid EDID).
    // We log it for diagnostics but always return true after a successful call.
    bool runScriptOk = g_consoleIntfc->RunScriptLine(cmd.c_str());
    G5_LOG("engine: RunScriptLine -> %s (informational; return ignored)",
           runScriptOk ? "true" : "false");
    return true;
}

SpawnResult SpawnAtPlayer(uint32_t form_id, uint32_t count) {
    if (!g_spawnHookInstalled.load(std::memory_order_acquire)) {
        G5_LOG("engine: SpawnAtPlayer called before hook installed");
        return {false, 0, "hook_not_installed"};
    }

    char cmd[64];
    snprintf(cmd, sizeof(cmd), "player.placeatme %08X %u", form_id, count);

    g_capturedRefId.store(0, std::memory_order_release);
    g_captureSpawn.store(true,  std::memory_order_release);
    bool ok = ExecuteConsoleCommand(cmd);
    g_captureSpawn.store(false, std::memory_order_release);

    uint32_t refId = g_capturedRefId.load(std::memory_order_acquire);
    if (!ok && refId == 0) {
        return {false, 0, "console_exec_failed"};
    }
    G5_LOG("engine: SpawnAtPlayer form_id=%08X count=%u -> refId=%08X",
           form_id, count, refId);
    return {true, refId, ""};
}

void InstallSpawnHook() {
    if (g_spawnHookInstalled.load(std::memory_order_acquire)) {
        G5_LOG("hook: InstallSpawnHook already installed — no-op");
        return;
    }
    bool a = PatchCallTarget(kPlaceAtMeCallSite1,
                             reinterpret_cast<void*>(&Wrap_CreateReference));
    bool b = PatchCallTarget(kPlaceAtMeCallSite2,
                             reinterpret_cast<void*>(&Wrap_CreateReference));
    if (a && b) {
        g_spawnHookInstalled.store(true, std::memory_order_release);
        G5_LOG("hook: InstallSpawnHook OK (call sites %08X, %08X -> Wrap_CreateReference @ %p)",
               (unsigned)kPlaceAtMeCallSite1, (unsigned)kPlaceAtMeCallSite2,
               (void*)&Wrap_CreateReference);
    } else {
        G5_LOG("hook: InstallSpawnHook FAILED (a=%d b=%d)", a ? 1 : 0, b ? 1 : 0);
    }
}

// ---------------------------------------------------------------------------
// InspectInventory
//
// Algorithm (mirrors xOBSE Cmd_GetNumItems_Execute / GetItemByIdx in
// Commands_Inventory.cpp:109-210):
//
//   1. LookupFormByID(ref_id)         -> TESForm*
//   2. Validate typeID in {REFR,ACHR,ACRE}
//   3. refr->GetContainer()           -> TESContainer*  (via 0x004D6D40)
//   4. Walk container->list           -> base (form_id, count) pairs
//   5. Read refr->baseExtraList       -> ExtraDataList @ refr+0x044
//   6. If kExtraData_ContainerChanges bit set, walk its objList for
//      EntryData {extendData, countDelta, type}
//   7. Merge: final_count = base_count + countDelta;
//      drop entries with final_count <= 0.
//   8. equipped = any ExtraDataList in entry->extendData has Worn/WornLeft
//      bit set in its presence bitfield.
//
// All pointer dereferences run inside __try/__except so a stale or
// malformed REFR cannot take down the host.
// ---------------------------------------------------------------------------
// SEH-protected raw walker. Writes into a fixed-size POD buffer so that
// the function body has no objects requiring unwinding (C2712).
// `outBase` and `outDelta` are parallel arrays:
//   outBase[i]   = base-container record (count from TESContainer, equipped=false)
//   outDelta[i]  = ExtraContainerChanges record (countDelta + equipped flag)
// Returns 0 on success, an int error code otherwise.
struct RawInvSlot {
    uint32_t form_id;
    int32_t  count;
    uint8_t  equipped;  // 0/1
    uint8_t  used;      // 0 if slot is empty
    uint8_t  pad[2];
};

constexpr size_t kInvBaseCap  = 512;
constexpr size_t kInvDeltaCap = 512;

// Error codes from RawInspect:
//   0  = success
//   1  = form_not_found
//   2  = not_a_reference
//   3  = chase_faulted (raised in __except)
static int RawInspect(uint32_t ref_id,
                      RawInvSlot* outBase,  size_t* outBaseN,
                      RawInvSlot* outDelta, size_t* outDeltaN) noexcept {
    auto lookup       = reinterpret_cast<LookupFormByIDFn>(kLookupFormByIDAddr);
    auto getContainer = reinterpret_cast<GetContainerFn>(kGetContainerAddr);

    *outBaseN  = 0;
    *outDeltaN = 0;

    __try {
        // Step 1: resolve form_id.
        void* rawForm = lookup(ref_id);
        if (!rawForm) return 1;

        // Step 2: validate it's a reference.
        const RawTESForm* form = reinterpret_cast<const RawTESForm*>(rawForm);
        uint8_t tid = form->typeID;
        if (tid != kFormType_REFR && tid != kFormType_ACHR && tid != kFormType_ACRE) {
            return 2;
        }

        // Step 3: get the TESContainer for the base form (if any).
        void* rawCont = getContainer(rawForm);

        // Step 4: walk the base container linked list.
        if (rawCont) {
            const uint8_t* contBase = reinterpret_cast<const uint8_t*>(rawCont);
            const RawContainerEntry* entry =
                reinterpret_cast<const RawContainerEntry*>(contBase + kContainer_FirstEntryOffset);

            int safety = 4096;
            while (entry && safety-- > 0 && *outBaseN < kInvBaseCap) {
                const RawContainerEntry::Data* d = entry->data;
                if (d && d->type) {
                    uint32_t fid = d->type->refID;
                    int32_t  cnt = d->count;
                    if (fid && cnt != 0) {
                        RawInvSlot& s = outBase[*outBaseN];
                        s.form_id  = fid;
                        s.count    = cnt;
                        s.equipped = 0;
                        s.used     = 1;
                        ++(*outBaseN);
                    }
                }
                entry = entry->next;
            }
        }

        // Step 5: locate baseExtraList on the REFR.
        const uint8_t* refrBase = reinterpret_cast<const uint8_t*>(rawForm);
        const RawExtraDataList* edl =
            reinterpret_cast<const RawExtraDataList*>(refrBase + kREFR_BaseExtraListOffset);

        // Step 6: if ExtraContainerChanges bit set, walk objList.
        if (ExtraDataList_HasType(edl, kExtraData_ContainerChanges)) {
            const RawExtraContainerChanges* xcc = nullptr;
            int chainSafety = 1024;
            for (const RawBSExtraData* p = reinterpret_cast<const RawBSExtraData*>(edl->m_data);
                 p && chainSafety-- > 0;
                 p = p->next) {
                if (p->type == kExtraData_ContainerChanges) {
                    xcc = reinterpret_cast<const RawExtraContainerChanges*>(p);
                    break;
                }
            }

            if (xcc && xcc->data && xcc->data->objList) {
                const RawListNode* node = reinterpret_cast<const RawListNode*>(xcc->data->objList);
                int listSafety = 8192;
                while (node && listSafety-- > 0 && *outDeltaN < kInvDeltaCap) {
                    const RawECCEntryData* ed =
                        reinterpret_cast<const RawECCEntryData*>(node->item);
                    if (ed && ed->type) {
                        uint32_t fid   = ed->type->refID;
                        int32_t  delta = ed->countDelta;

                        bool equipped = false;
                        if (ed->extendData) {
                            const RawListNode* en =
                                reinterpret_cast<const RawListNode*>(ed->extendData);
                            int extSafety = 256;
                            while (en && extSafety-- > 0) {
                                const RawExtraDataList* xedl =
                                    reinterpret_cast<const RawExtraDataList*>(en->item);
                                if (xedl && ExtraDataList_IsWorn(xedl)) {
                                    equipped = true;
                                    break;
                                }
                                en = en->next;
                            }
                        }

                        RawInvSlot& s = outDelta[*outDeltaN];
                        s.form_id  = fid;
                        s.count    = delta;
                        s.equipped = equipped ? 1 : 0;
                        s.used     = 1;
                        ++(*outDeltaN);
                    }
                    node = node->next;
                }
            }
        }
        return 0;
    } __except(EXCEPTION_EXECUTE_HANDLER) {
        return 3;
    }
}

InventoryResult InspectInventory(uint32_t ref_id) {
    InventoryResult result{false, {}, ""};

    // Stack-allocated POD buffers so RawInspect can use SEH safely.
    RawInvSlot baseBuf[kInvBaseCap];
    RawInvSlot deltaBuf[kInvDeltaCap];
    size_t baseN = 0, deltaN = 0;

    int rc = RawInspect(ref_id, baseBuf, &baseN, deltaBuf, &deltaN);
    if (rc != 0) {
        switch (rc) {
            case 1: result.error = "form_not_found";  break;
            case 2: result.error = "not_a_reference"; break;
            case 3: result.error = "chase_faulted";   break;
            default: result.error = "unknown_error";  break;
        }
        if (rc == 3) {
            G5_LOG("engine: InspectInventory ref_id=%08X SEH caught", ref_id);
        }
        return result;
    }

    // Step 7: merge base + delta. Map form_id -> (count, equipped).
    struct Acc { int32_t count; bool equipped; };
    std::unordered_map<uint32_t, Acc> acc;
    acc.reserve(baseN + deltaN);

    for (size_t i = 0; i < baseN; ++i) {
        const RawInvSlot& s = baseBuf[i];
        auto it = acc.find(s.form_id);
        if (it == acc.end()) {
            acc.emplace(s.form_id, Acc{s.count, false});
        } else {
            it->second.count += s.count;
        }
    }
    for (size_t i = 0; i < deltaN; ++i) {
        const RawInvSlot& s = deltaBuf[i];
        auto it = acc.find(s.form_id);
        if (it == acc.end()) {
            acc.emplace(s.form_id, Acc{s.count, s.equipped != 0});
        } else {
            it->second.count += s.count;
            if (s.equipped) it->second.equipped = true;
        }
    }

    result.items.reserve(acc.size());
    for (const auto& kv : acc) {
        if (kv.second.count <= 0) continue;
        InventoryItem it;
        it.form_id  = kv.first;
        it.count    = kv.second.count;
        it.equipped = kv.second.equipped;
        result.items.push_back(it);
    }
    result.ok = true;
    G5_LOG("engine: InspectInventory ref_id=%08X -> %zu items (base=%zu delta=%zu)",
           ref_id, result.items.size(), baseN, deltaN);
    return result;
}


bool DeleteRef(uint32_t ref_id) {
    char cmd[128];
    snprintf(cmd, sizeof(cmd), "prid %08X", ref_id);
    if (!ExecuteConsoleCommand(cmd)) return false;
    if (!ExecuteConsoleCommand("disable")) return false;
    if (!ExecuteConsoleCommand("markfordelete")) return false;
    G5_LOG("engine: DeleteRef ref_id=%08X -> ok", ref_id);
    return true;
}

}}
