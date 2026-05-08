#pragma once
#include <cstdint>
#include <string>
#include <vector>

namespace g5 { namespace engine {

// Submit a console command string to Oblivion's console parser.
// Must run on main thread. Returns true if the command was accepted.
bool ExecuteConsoleCommand(const std::string& cmd);

struct SpawnResult {
    bool ok;
    uint32_t ref_id;
    std::string error;
};

// Spawn a base form near the player via player.placeatme, then read the
// engine global that holds the last-created reference RefID.
SpawnResult SpawnAtPlayer(uint32_t form_id, uint32_t count);

struct InventoryItem {
    uint32_t form_id;
    int32_t count;
    bool equipped;
};

struct InventoryResult {
    bool ok;
    std::vector<InventoryItem> items;
    std::string error;
};

// Walks the actor's TESContainer (base) merged with ExtraContainerChanges
// (runtime deltas + equipped state) for the given REFR.
//
// Pointer-chase is wrapped in SEH; an invalid `ref_id` or unexpected layout
// returns {false, [], "chase_faulted"} rather than crashing the host.
InventoryResult InspectInventory(uint32_t ref_id);

}}
