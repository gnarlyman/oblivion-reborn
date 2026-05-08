#include "engine.h"
#include "log.h"
#include <Windows.h>
#include <cstdint>

// Oblivion 1.2.0.416 (Steam): the console-script execute helper is at
// 0x005B5C70. Signature: void __cdecl ExecuteScript(const char* cmd, void* targetRef);
//
// This is the same address widely used by community OBSE plugins for
// remote-console functionality (cf. ConScribe, Pluggy, CSE remote console).

namespace {
using ExecuteScriptFn = void(__cdecl*)(const char* cmd, void* targetRef);
constexpr uintptr_t kExecuteScriptAddr = 0x005B5C70;
}

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

}}
