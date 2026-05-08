#pragma once
#include <cstdint>
#include <functional>
#include <string>

#include <Windows.h>

namespace g5 {

// Executor runs on the main thread. Returns the response line.
using CommandExecutor = std::function<std::string(const std::string&)>;

// Initialize: subclass the given window, install message dispatcher.
// `executor` is called on the main thread for each enqueued command.
bool InitCommandQueue(HWND mainWindow, CommandExecutor executor);

// Worker thread: enqueue a command and block until response is ready.
// Returns response line (without trailing newline).
std::string EnqueueAndWait(const std::string& commandLine);

void ShutdownCommandQueue();

}  // namespace g5
