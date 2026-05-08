#include "log.h"
#include <Windows.h>
#include <cstdarg>
#include <ctime>
#include <mutex>

namespace {
FILE* g_logFile = nullptr;
std::mutex g_logMutex;
}

namespace g5 { namespace log {

void Init() {
    if (g_logFile) return;  // already open

    // Resolve the directory the DLL lives in. Writes there get USVFS-redirected
    // to Reborn/overwrite/OBSE/Plugins/, same as every other OBSE plugin.
    HMODULE hm = nullptr;
    GetModuleHandleExA(
        GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS | GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
        reinterpret_cast<LPCSTR>(&Init), &hm);
    char dllPath[MAX_PATH] = {};
    if (!GetModuleFileNameA(hm, dllPath, MAX_PATH)) return;

    // Find the last '\' or '/' and chop the filename.
    char* lastSep = nullptr;
    for (char* p = dllPath; *p; ++p) {
        if (*p == '\\' || *p == '/') lastSep = p;
    }
    if (!lastSep) return;
    *lastSep = '\0';  // dllPath now holds the directory.

    if (strlen(dllPath) + 8 > MAX_PATH) return;  // " /g5.log" tail
    char fullPath[MAX_PATH];
    snprintf(fullPath, sizeof(fullPath), "%s\\g5.log", dllPath);
    g_logFile = fopen(fullPath, "w");
    if (g_logFile) {
        Write("g5: log opened");
    }
}

void Write(const char* fmt, ...) {
    std::lock_guard<std::mutex> lk(g_logMutex);
    if (!g_logFile) return;
    time_t t = time(nullptr);
    struct tm tm; localtime_s(&tm, &t);
    fprintf(g_logFile, "[%02d:%02d:%02d] ", tm.tm_hour, tm.tm_min, tm.tm_sec);
    va_list args; va_start(args, fmt);
    vfprintf(g_logFile, fmt, args);
    va_end(args);
    fprintf(g_logFile, "\n");
    fflush(g_logFile);
}

}}
