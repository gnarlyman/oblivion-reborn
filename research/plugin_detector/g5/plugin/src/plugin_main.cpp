#include <Windows.h>
#include "obse_minimal.h"
#include "engine.h"
#include "log.h"
#include "socket_server.h"
#include "command_queue.h"
#include "commands.h"

namespace {
PluginHandle g_pluginHandle = kPluginHandle_Invalid;

DWORD WINAPI WaitForWindowAndInit(LPVOID) {
    HWND hwnd = nullptr;
    for (int i = 0; i < 600; ++i) {
        hwnd = FindWindowA("Oblivion", nullptr);
        if (hwnd) break;
        Sleep(100);
    }
    if (!hwnd) {
        G5_LOG("init: timeout waiting for Oblivion main window");
        return 1;
    }
    G5_LOG("init: main window = %p", (void*)hwnd);
    Sleep(2000);  // let the engine finish startup hooks

    g5::engine::InstallSpawnHook();
    g5::InitCommandQueue(hwnd, &g5::commands::Dispatch);
    return 0;
}

void OBSEMessageHandler(OBSEMessagingInterface::Message* msg) {
    if (msg->type == OBSEMessagingInterface::kMessage_PostPostLoad) {
        G5_LOG("OBSE: PostPostLoad -- starting init worker");
        HANDLE h = CreateThread(nullptr, 0, &WaitForWindowAndInit, nullptr, 0, nullptr);
        if (h) CloseHandle(h);
    }
}

OBSEMessagingInterface* g_msgIntfc = nullptr;

}  // namespace

extern "C" {

__declspec(dllexport) bool OBSEPlugin_Query(const OBSEInterface* obse, PluginInfo* info) {
    g5::log::Init();
    G5_LOG("Query: obseVersion=0x%08X", obse->obseVersion);
    info->infoVersion = PluginInfo::kInfoVersion;
    info->name = "g5";
    info->version = 1;
    return !obse->isEditor;
}

__declspec(dllexport) bool OBSEPlugin_Load(const OBSEInterface* obse, void*) {
    g_pluginHandle = obse->GetPluginHandle();
    G5_LOG("Load: plugin handle=%u", g_pluginHandle);

    g_msgIntfc = (OBSEMessagingInterface*)obse->QueryInterface(kInterface_Messaging);
    if (g_msgIntfc) {
        g_msgIntfc->RegisterListener(g_pluginHandle, "OBSE", &OBSEMessageHandler);
        G5_LOG("Load: registered OBSE message listener");
    }

    auto* consoleIntfc = (OBSEConsoleInterface*)obse->QueryInterface(kInterface_Console);
    if (consoleIntfc) {
        g5::engine::SetConsoleInterface(consoleIntfc);
        G5_LOG("Load: console interface acquired (version=%u)", consoleIntfc->version);
    } else {
        G5_LOG("Load: WARNING console interface not available");
    }

    // Start socket server, route lines through the main-thread queue.
    bool ok = g5::StartSocketServer(13580, [](const std::string& line) -> std::string {
        return g5::EnqueueAndWait(line);
    });
    if (!ok) G5_LOG("Load: socket server failed to start");
    return true;
}

}
