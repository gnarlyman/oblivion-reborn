#include "engine.h"
#include "log.h"
#include <Windows.h>
#include <cstdint>
#include <unordered_map>
#include <vector>

// Oblivion 1.2.0.416 (Steam): the console-script execute helper is at
// 0x005B5C70. Signature: void __cdecl ExecuteScript(const char* cmd, void* targetRef);
//
// This is the same address widely used by community OBSE plugins for
// remote-console functionality (cf. ConScribe, Pluggy, CSE remote console).

namespace {
using ExecuteScriptFn = void(__cdecl*)(const char* cmd, void* targetRef);
constexpr uintptr_t kExecuteScriptAddr    = 0x005B5C70;
// Global written by the engine immediately after player.placeatme creates a ref.
// Address: Oblivion 1.2.0.416 (Steam). Unverified — user confirms in-game.
constexpr uintptr_t kLastCreatedRefIdAddr = 0x00B324CC;

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
// ---------------------------------------------------------------------------
constexpr uint8_t kFormType_REFR = 0x33;
constexpr uint8_t kFormType_ACHR = 0x34;
constexpr uint8_t kFormType_ACRE = 0x35;

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

bool ExecuteConsoleCommand(const std::string& cmd) {
    G5_LOG("engine: ExecuteConsoleCommand: %s", cmd.c_str());
    auto fn = reinterpret_cast<ExecuteScriptFn>(kExecuteScriptAddr);
    __try {
        fn(cmd.c_str(), nullptr);
        return true;
    } __except(EXCEPTION_EXECUTE_HANDLER) {
        G5_LOG("engine: ExecuteConsoleCommand SEH caught");
        return false;
    }
}

SpawnResult SpawnAtPlayer(uint32_t form_id, uint32_t count) {
    char cmd[64];
    snprintf(cmd, sizeof(cmd), "player.placeatme %08X %u", form_id, count);
    if (!ExecuteConsoleCommand(cmd)) {
        return {false, 0, "console_exec_failed"};
    }
    uint32_t refId = *reinterpret_cast<volatile uint32_t*>(kLastCreatedRefIdAddr);
    G5_LOG("engine: SpawnAtPlayer form_id=%08X count=%u -> refId=%08X", form_id, count, refId);
    return {true, refId, ""};
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

}}
