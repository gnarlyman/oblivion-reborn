#include "command_queue.h"
#include "log.h"

#include <Windows.h>
#include <condition_variable>
#include <mutex>
#include <queue>

namespace {

constexpr UINT kWakeupMessage = WM_USER + 0x6500;  // "65" -> "g5"

struct PendingCommand {
    std::string line;
    std::string response;
    bool done = false;
    std::mutex mu;
    std::condition_variable cv;
};

std::mutex g_qmu;
std::queue<PendingCommand*> g_queue;

HWND g_window = nullptr;
WNDPROC g_origWndProc = nullptr;
g5::CommandExecutor g_executor;

LRESULT CALLBACK WndProcHook(HWND hwnd, UINT msg, WPARAM wp, LPARAM lp) {
    if (msg == kWakeupMessage) {
        // Drain the queue on the main thread.
        for (;;) {
            PendingCommand* pc = nullptr;
            {
                std::lock_guard<std::mutex> lk(g_qmu);
                if (g_queue.empty()) break;
                pc = g_queue.front();
                g_queue.pop();
            }
            try {
                pc->response = g_executor(pc->line);
            } catch (const std::exception& e) {
                pc->response = std::string("{\"ok\":false,\"error\":\"exception\",\"detail\":\"") + e.what() + "\"}";
            } catch (...) {
                pc->response = "{\"ok\":false,\"error\":\"unknown_exception\"}";
            }
            {
                std::lock_guard<std::mutex> lk(pc->mu);
                pc->done = true;
            }
            pc->cv.notify_one();
        }
        return 0;
    }
    return CallWindowProcA(g_origWndProc, hwnd, msg, wp, lp);
}

}  // namespace

namespace g5 {

bool InitCommandQueue(HWND mainWindow, CommandExecutor executor) {
    g_window = mainWindow;
    g_executor = std::move(executor);
    g_origWndProc = (WNDPROC)SetWindowLongPtrA(
        mainWindow, GWLP_WNDPROC, (LONG_PTR)WndProcHook);
    G5_LOG("queue: subclassed WndProc, orig=%p", (void*)g_origWndProc);
    return g_origWndProc != nullptr;
}

std::string EnqueueAndWait(const std::string& commandLine) {
    PendingCommand pc;
    pc.line = commandLine;
    {
        std::lock_guard<std::mutex> lk(g_qmu);
        g_queue.push(&pc);
    }
    PostMessageA(g_window, kWakeupMessage, 0, 0);
    std::unique_lock<std::mutex> lk(pc.mu);
    pc.cv.wait(lk, [&]{ return pc.done; });
    return pc.response;
}

void ShutdownCommandQueue() {
    if (g_window && g_origWndProc) {
        SetWindowLongPtrA(g_window, GWLP_WNDPROC, (LONG_PTR)g_origWndProc);
        g_origWndProc = nullptr;
    }
}

}  // namespace g5
