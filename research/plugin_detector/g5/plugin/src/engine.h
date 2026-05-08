#pragma once
#include <string>

namespace g5 { namespace engine {

// Submit a console command string to Oblivion's console parser.
// Must run on main thread. Returns true if the command was accepted.
bool ExecuteConsoleCommand(const std::string& cmd);

}}
