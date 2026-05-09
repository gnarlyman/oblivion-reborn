#include "engine.h"
#include "obse_minimal.h"
#include "log.h"
#include <Windows.h>
#include <atomic>
#include <cstdarg>
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <string>
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
// __fastcall wrapper, which forwards to the original factory and (when
// the capture flag is set) records the returned formID.
//
// CreateReference signature (from RE, confirmed via call-site disasm):
//   TESObjectREFR* __thiscall CreateReference(
//       TESForm* baseForm, float pos[3], float rot[3],
//       TESObjectCELL* cell, int worldspaceFlag, TESObjectREFR* existingRef);
// ECX = this (factory/world object at [0x00B33A98]); callee cleans 6 stack args.
// ---------------------------------------------------------------------------
constexpr uintptr_t kCreateReferenceAddr = 0x0044A7D0;
constexpr uintptr_t kPlaceAtMeCallSite1  = 0x00514F58;
constexpr uintptr_t kPlaceAtMeCallSite2  = 0x005152A9;

std::atomic<bool>     g_captureSpawn{false};
std::atomic<uint32_t> g_capturedRefId{0};
std::atomic<bool>     g_spawnHookInstalled{false};

// CreateReference is __thiscall: ECX = `this`, 6 stack args, callee-cleans.
// MSVC doesn't allow __thiscall on free functions, so we emulate it with
// __fastcall (ECX=arg1, EDX=arg2-ignored, then stack args, callee-cleans).
// EDX is unused by CreateReference (it's a __thiscall, not a __fastcall).
void* __fastcall Wrap_CreateReference(
    void* thisPtr,           // ECX = real `this`
    void* /*edxPad*/,        // EDX = unused; padding to make __fastcall act like __thiscall
    void* baseForm, float* pos, float* rot,
    void* cell, int wsFlag, void* existingRef) {
    typedef void* (__fastcall *Fn)(void*, void*, void*, float*, float*, void*, int, void*);
    auto* fn = reinterpret_cast<Fn>(kCreateReferenceAddr);
    void* result = fn(thisPtr, nullptr, baseForm, pos, rot, cell, wsFlag, existingRef);
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


// ---------------------------------------------------------------------------
// Console_Print hook (T-cap-1).
//
// xOBSE GameAPI.cpp:107: `const _Console_Print Console_Print = (_Console_Print)0x00579B9B;`
// Signature: `void __cdecl Console_Print(const char* fmt, ...)`.
// This is the single funnel for every line printed to the on-screen console
// — every xOBSE plugin that wants to print calls this address, and the
// engine itself calls it directly for getstage/getrace/sqv/etc. output.
//
// Approach: head-splice with a 5-byte JMP rel32 to our wrapper. Save the
// first 5 bytes into a separately-allocated executable trampoline that
// re-runs them and JMPs to (kConsolePrintAddr + 5). The wrapper formats
// the va_list itself (so we get the resolved string) then calls the
// trampoline as `original("%s", formatted)` — which is safe because the
// wrapper-formatted string is treated as a single %s argument and any
// stray '%' chars in user-supplied content are not re-interpreted.
//
// Capture state lives in main-thread-local globals; the Begin/EndCapture
// helpers in this file are the ONLY callers. Concurrency story: HandleExec
// runs on the main thread via the WndProc-subclass queue, RunScriptLine is
// synchronous, the main thread is the only thread that prints — so there
// is no race window for the buffer.
// ---------------------------------------------------------------------------
constexpr uintptr_t kConsolePrintAddr = 0x00579B9B;
constexpr size_t    kCapture_MaxLines = 1024;
constexpr size_t    kCapture_MaxBytes = 256 * 1024;

thread_local bool                     g_capturing       = false;
thread_local size_t                   g_captureBytes    = 0;
thread_local bool                     g_captureTrunced  = false;
thread_local std::vector<std::string> g_captureBuf;

uint8_t* g_consolePrintTrampoline = nullptr;
std::atomic<bool> g_consolePrintHookInstalled{false};

static void AppendCaptured(const char* s) {
    if (!s || !g_capturing) return;

    auto markTruncated = [&]() {
        if (!g_captureTrunced) {
            g_captureBuf.emplace_back("...truncated...");
            g_captureTrunced = true;
        }
    };

    size_t origCount = g_captureBuf.size();
    const char* p = s;
    bool endedWithNewline = false;

    while (*p) {
        const char* nl = strchr(p, '\n');
        size_t segLen = nl ? static_cast<size_t>(nl - p) : strlen(p);
        if (segLen > 0 && p[segLen - 1] == '\r') segLen--;

        if (g_captureTrunced) return;
        if (g_captureBuf.size() >= kCapture_MaxLines ||
            g_captureBytes + segLen > kCapture_MaxBytes) {
            markTruncated();
            return;
        }

        g_captureBuf.emplace_back(p, segLen);
        g_captureBytes += segLen;

        if (!nl) { endedWithNewline = false; break; }
        endedWithNewline = (*(nl + 1) == '\0');
        p = nl + 1;
    }

    // Drop a single trailing empty entry caused by a terminal '\n'.
    if (endedWithNewline &&
        g_captureBuf.size() > origCount &&
        g_captureBuf.back().empty()) {
        g_captureBuf.pop_back();
    }
}

void __cdecl Wrap_Console_Print(const char* fmt, ...) {
    typedef void (__cdecl *Fn)(const char*, ...);
    Fn original = reinterpret_cast<Fn>(g_consolePrintTrampoline);

    if (!fmt) {
        if (original) original("%s", "(g5: null fmt)");
        return;
    }

    va_list va;
    va_start(va, fmt);
    int len = _vscprintf(fmt, va);
    va_end(va);

    if (len < 0) {
        // Format failure — forward the raw fmt string verbatim, do not capture.
        if (original) original("%s", fmt);
        return;
    }

    char  stackBuf[1024];
    char* buf = stackBuf;
    std::string heapBuf;
    if (static_cast<size_t>(len) + 1 > sizeof(stackBuf)) {
        heapBuf.resize(static_cast<size_t>(len));
        buf = heapBuf.empty() ? stackBuf : &heapBuf[0];
    }

    va_start(va, fmt);
    vsnprintf(buf, static_cast<size_t>(len) + 1, fmt, va);
    va_end(va);

    if (g_capturing) {
        AppendCaptured(buf);
    }

    if (original) original("%s", buf);
}

void InstallConsolePrintHook() {
    if (g_consolePrintHookInstalled.load(std::memory_order_acquire)) {
        G5_LOG("hook: InstallConsolePrintHook already installed — no-op");
        return;
    }

    uint8_t* target = reinterpret_cast<uint8_t*>(kConsolePrintAddr);

    // Sanity: refuse to splice if the first 5 bytes look like a relative
    // CALL/JMP — we'd need to relocate them in the trampoline. The Console_Print
    // prologue at 0x00579B9B is a normal function entry, but verify defensively.
    uint8_t op0 = target[0];
    if (op0 == 0xE8 || op0 == 0xE9 || op0 == 0xEB ||
        (op0 >= 0x70 && op0 <= 0x7F)) {
        G5_LOG("hook: Console_Print head opcode %02X is relative — refusing to splice",
               op0);
        return;
    }

    // Allocate the trampoline: 5 saved bytes + 5-byte JMP rel32 back to (target+5).
    g_consolePrintTrampoline = reinterpret_cast<uint8_t*>(
        VirtualAlloc(nullptr, 16, MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE));
    if (!g_consolePrintTrampoline) {
        G5_LOG("hook: VirtualAlloc(trampoline) failed (err=%u)", GetLastError());
        return;
    }
    memcpy(g_consolePrintTrampoline, target, 5);
    g_consolePrintTrampoline[5] = 0xE9;  // JMP rel32
    int32_t jmpBackRel = static_cast<int32_t>(
        (kConsolePrintAddr + 5) -
        (reinterpret_cast<uintptr_t>(g_consolePrintTrampoline) + 5 + 5));
    *reinterpret_cast<int32_t*>(g_consolePrintTrampoline + 6) = jmpBackRel;
    FlushInstructionCache(GetCurrentProcess(), g_consolePrintTrampoline, 16);

    // Splice the head: E9 rel32 to Wrap_Console_Print.
    DWORD oldProtect = 0;
    if (!VirtualProtect(target, 5, PAGE_EXECUTE_READWRITE, &oldProtect)) {
        G5_LOG("hook: VirtualProtect(Console_Print) failed (err=%u)", GetLastError());
        VirtualFree(g_consolePrintTrampoline, 0, MEM_RELEASE);
        g_consolePrintTrampoline = nullptr;
        return;
    }
    target[0] = 0xE9;
    int32_t spliceRel = static_cast<int32_t>(
        reinterpret_cast<uintptr_t>(&Wrap_Console_Print) - (kConsolePrintAddr + 5));
    *reinterpret_cast<int32_t*>(target + 1) = spliceRel;

    DWORD tmp = 0;
    VirtualProtect(target, 5, oldProtect, &tmp);
    FlushInstructionCache(GetCurrentProcess(), target, 5);

    g_consolePrintHookInstalled.store(true, std::memory_order_release);
    G5_LOG("hook: InstallConsolePrintHook OK (target=%08X wrapper=%p trampoline=%p)",
           (unsigned)kConsolePrintAddr, (void*)&Wrap_Console_Print,
           (void*)g_consolePrintTrampoline);
}

void BeginCapture() {
    g_captureBuf.clear();
    g_captureBytes   = 0;
    g_captureTrunced = false;
    g_capturing      = true;
}

std::vector<std::string> EndCapture() {
    g_capturing = false;
    std::vector<std::string> out;
    out.swap(g_captureBuf);
    g_captureBytes   = 0;
    g_captureTrunced = false;
    return out;
}

bool DeleteRef(uint32_t ref_id) {
    if (!g_consoleIntfc || !g_consoleIntfc->RunScriptLine2) {
        G5_LOG("engine: DeleteRef: console interface or RunScriptLine2 unavailable");
        return false;
    }
    // Resolve ref via LookupFormByID (same address used by InspectInventory).
    typedef void* (__cdecl *LookupFn)(uint32_t);
    auto* lookup = reinterpret_cast<LookupFn>(0x0046B250);
    void* refr = lookup(ref_id);
    if (!refr) {
        G5_LOG("engine: DeleteRef: ref %08X not found", ref_id);
        return false;
    }
    G5_LOG("engine: DeleteRef refId=%08X refr=%p", ref_id, refr);
    bool ok1 = g_consoleIntfc->RunScriptLine2("disable", refr, true);
    bool ok2 = g_consoleIntfc->RunScriptLine2("markfordelete", refr, true);
    G5_LOG("engine: DeleteRef RunScriptLine2 disable=%d markfordelete=%d (return ignored, trusting side effect)",
           ok1, ok2);
    return true;
}

}}
