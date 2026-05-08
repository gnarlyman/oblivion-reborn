#include "socket_server.h"
#include "log.h"

#include <Winsock2.h>
#include <Ws2tcpip.h>
#include <atomic>
#include <thread>

#pragma comment(lib, "Ws2_32.lib")

namespace {
std::atomic<bool> g_running{false};
std::thread g_worker;
SOCKET g_listenSock = INVALID_SOCKET;
g5::LineHandler g_handler;

void WorkerLoop() {
    while (g_running.load()) {
        sockaddr_in client{};
        int clientLen = sizeof(client);
        SOCKET cs = accept(g_listenSock, (sockaddr*)&client, &clientLen);
        if (cs == INVALID_SOCKET) {
            if (!g_running.load()) break;
            G5_LOG("socket: accept failed err=%d", WSAGetLastError());
            continue;
        }
        G5_LOG("socket: client connected");

        std::string buf;
        char tmp[4096];
        while (g_running.load()) {
            int n = recv(cs, tmp, sizeof(tmp), 0);
            if (n <= 0) {
                G5_LOG("socket: client disconnected (n=%d)", n);
                break;
            }
            buf.append(tmp, n);

            // Process each complete line.
            size_t pos;
            while ((pos = buf.find('\n')) != std::string::npos) {
                std::string line = buf.substr(0, pos);
                buf.erase(0, pos + 1);
                if (!line.empty() && line.back() == '\r') line.pop_back();

                std::string response = g_handler(line);
                if (!response.empty()) {
                    response.push_back('\n');
                    int sent = send(cs, response.data(), (int)response.size(), 0);
                    if (sent < 0) {
                        G5_LOG("socket: send failed err=%d", WSAGetLastError());
                        break;
                    }
                }
            }
        }
        closesocket(cs);
    }
}
}  // namespace

namespace g5 {

bool StartSocketServer(uint16_t port, LineHandler handler) {
    WSADATA wsa;
    if (WSAStartup(MAKEWORD(2, 2), &wsa) != 0) {
        G5_LOG("socket: WSAStartup failed");
        return false;
    }

    g_listenSock = socket(AF_INET, SOCK_STREAM, 0);
    if (g_listenSock == INVALID_SOCKET) {
        G5_LOG("socket: socket() failed err=%d", WSAGetLastError());
        WSACleanup();
        return false;
    }

    BOOL reuse = TRUE;
    setsockopt(g_listenSock, SOL_SOCKET, SO_REUSEADDR, (char*)&reuse, sizeof(reuse));

    sockaddr_in addr{};
    addr.sin_family = AF_INET;
    addr.sin_port = htons(port);
    inet_pton(AF_INET, "127.0.0.1", &addr.sin_addr);

    if (bind(g_listenSock, (sockaddr*)&addr, sizeof(addr)) == SOCKET_ERROR) {
        G5_LOG("socket: bind to port %u failed err=%d", port, WSAGetLastError());
        closesocket(g_listenSock);
        WSACleanup();
        return false;
    }
    if (listen(g_listenSock, 1) == SOCKET_ERROR) {
        G5_LOG("socket: listen failed err=%d", WSAGetLastError());
        closesocket(g_listenSock);
        WSACleanup();
        return false;
    }

    g_handler = std::move(handler);
    g_running.store(true);
    g_worker = std::thread(WorkerLoop);
    G5_LOG("socket: listening on 127.0.0.1:%u", port);
    return true;
}

void StopSocketServer() {
    g_running.store(false);
    if (g_listenSock != INVALID_SOCKET) {
        closesocket(g_listenSock);
        g_listenSock = INVALID_SOCKET;
    }
    if (g_worker.joinable()) g_worker.join();
    WSACleanup();
}

}  // namespace g5
