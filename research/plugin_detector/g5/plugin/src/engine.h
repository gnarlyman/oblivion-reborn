#pragma once
#include <cstdint>
#include <string>

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

}}
