#include <Windows.h>
#include "obse_minimal.h"
#include "log.h"

namespace {
PluginHandle g_pluginHandle = kPluginHandle_Invalid;
}

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
    return true;
}

}
