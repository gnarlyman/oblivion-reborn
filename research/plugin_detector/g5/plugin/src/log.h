#pragma once
#include <cstdio>

namespace g5 { namespace log {
void Init();
void Write(const char* fmt, ...);
}}

#define G5_LOG(...) ::g5::log::Write(__VA_ARGS__)
