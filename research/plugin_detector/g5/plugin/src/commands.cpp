#include "commands.h"
#include "engine.h"
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

json HandleCoc(const json& req) {
    if (!req.contains("edid") || !req["edid"].is_string()) {
        return {{"ok", false}, {"error", "missing_edid"}};
    }
    std::string edid = req["edid"];
    std::string cmd = "coc " + edid;
    bool ok = engine::ExecuteConsoleCommand(cmd);
    return {{"ok", ok}};
}

json HandleSpawn(const json& req) {
    if (!req.contains("form_id")) {
        return {{"ok", false}, {"error", "missing_form_id"}};
    }
    uint32_t form_id;
    if (req["form_id"].is_string()) {
        std::string s = req["form_id"].get<std::string>();
        form_id = static_cast<uint32_t>(std::stoul(s, nullptr, 16));
    } else {
        form_id = req["form_id"].get<uint32_t>();
    }
    uint32_t count = req.value("count", 1u);
    auto result = engine::SpawnAtPlayer(form_id, count);
    if (!result.ok) {
        return {{"ok", false}, {"error", result.error}};
    }
    return {{"ok", true}, {"ref_id", result.ref_id}};
}

json HandleInspectInventory(const json& req) {
    if (!req.contains("ref_id")) {
        return {{"ok", false}, {"error", "missing_ref_id"}};
    }
    uint32_t ref_id;
    if (req["ref_id"].is_string()) {
        std::string s = req["ref_id"].get<std::string>();
        ref_id = static_cast<uint32_t>(std::stoul(s, nullptr, 16));
    } else {
        ref_id = req["ref_id"].get<uint32_t>();
    }
    auto r = engine::InspectInventory(ref_id);
    if (!r.ok) {
        return {{"ok", false}, {"error", r.error}};
    }
    json items = json::array();
    for (const auto& it : r.items) {
        items.push_back({
            {"form_id", it.form_id},
            {"count",   it.count},
            {"equipped", it.equipped}
        });
    }
    return {{"ok", true}, {"items", items}};
}

json HandleDelete(const json& req) {
    if (!req.contains("ref_id")) return {{"ok", false}, {"error", "missing_ref_id"}};
    uint32_t ref_id = req["ref_id"].is_string()
        ? static_cast<uint32_t>(std::stoul(std::string(req["ref_id"]), nullptr, 16))
        : (uint32_t)req["ref_id"];
    bool ok = engine::DeleteRef(ref_id);
    return {{"ok", ok}};
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
    else if (cmd == "coc") resp = HandleCoc(req);
    else if (cmd == "spawn") resp = HandleSpawn(req);
    else if (cmd == "inspect_inventory") resp = HandleInspectInventory(req);
    else if (cmd == "delete") resp = HandleDelete(req);
    else resp = json{{"ok", false}, {"error", "unknown_cmd"}, {"cmd", cmd}};
    return resp.dump();
}

}}
