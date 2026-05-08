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
    char path[MAX_PATH];
    if (!GetEnvironmentVariableA("USERPROFILE", path, MAX_PATH)) return;
    char fullPath[MAX_PATH];
    snprintf(fullPath, sizeof(fullPath),
             "%s\\Documents\\My Games\\Oblivion\\OBSE\\Plugins\\g5.log", path);
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
