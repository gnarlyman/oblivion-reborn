#pragma once
#include <cstdint>
#include <functional>
#include <string>

namespace g5 {

// Callback invoked from the worker thread for each line received.
// The callback returns the response line to send back; empty string means no reply.
using LineHandler = std::function<std::string(const std::string&)>;

// Start a TCP listener on 127.0.0.1:port. Spawns a worker thread.
// One client at a time; new connections close any existing one.
// Returns false if Winsock init or bind fails.
bool StartSocketServer(uint16_t port, LineHandler handler);

void StopSocketServer();

}  // namespace g5
