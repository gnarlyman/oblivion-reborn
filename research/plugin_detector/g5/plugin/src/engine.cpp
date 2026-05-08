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
constexpr uintptr_t kExecuteScriptAddr    = 0x005B5C70;
// Global written by the engine immediately after player.placeatme creates a ref.
// Address: Oblivion 1.2.0.416 (Steam). Unverified — user confirms in-game.
constexpr uintptr_t kLastCreatedRefIdAddr = 0x00B324CC;
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

}}
