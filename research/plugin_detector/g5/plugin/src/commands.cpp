#include "commands.h"
#include "json.hpp"
#include "log.h"

#include <Windows.h>

using nlohmann::json;

namespace g5 { namespace commands {

namespace {

json HandlePing(const json&) {
    return {{"ok", true}, {"msg", "pong"}};
}

json HandleQuit(const json&) {
    G5_LOG("cmd: quit requested");
    // Schedule process exit after we've sent the reply.
    // Simplest: post WM_QUIT to the message queue, returning normally
    // gives the socket worker time to send the response first.
    PostQuitMessage(0);
    return {{"ok", true}, {"msg", "quitting"}};
}

}  // namespace

std::string Dispatch(const std::string& line) {
    json req;
    try {
        req = json::parse(line);
    } catch (const std::exception& e) {
        json err = {{"ok", false}, {"error", "parse"}, {"detail", e.what()}};
        return err.dump();
    }
    if (!req.is_object() || !req.contains("cmd") || !req["cmd"].is_string()) {
        return json{{"ok", false}, {"error", "missing_cmd"}}.dump();
    }
    std::string cmd = req["cmd"];
    json resp;
    if (cmd == "ping") resp = HandlePing(req);
    else if (cmd == "quit") resp = HandleQuit(req);
    else resp = json{{"ok", false}, {"error", "unknown_cmd"}, {"cmd", cmd}};
    return resp.dump();
}

}}
