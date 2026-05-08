#pragma once
#include <string>

namespace g5 { namespace commands {

// Called on the main thread. Parses `line` as JSON, dispatches by cmd field,
// returns JSON response string.
std::string Dispatch(const std::string& line);

}}
