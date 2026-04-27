# oblivion-monitor — Design

**Status:** Draft
**Date:** 2026-04-26
**Project:** APW Reborn (Oblivion MO2 modlist)

## Goal

A small, always-on-top utility that displays per-process performance metrics for `Oblivion.exe` whenever the game is running, and writes a per-session CSV log for later analysis.

## Non-goals

- In-game overlay (HUD inside the rendered frame)
- Internal engine state (form counts, cell load, etc.) — see "Future work"
- Per-frame timing / FPS (deferred — see "Future work")
- Crash logging — existing stack (Crash Logger Improved + MessageLogger + EngineBugFixes) is already adequate per user

## Why custom

OS overlays (MSI Afterburner, Intel PresentMon, CapFrameX) all read from process-level hardware counters but don't reliably surface per-process VRAM for Oblivion's DX9 + 32-bit path. CapFrameX in particular fails to detect `Oblivion.exe` reliably. The Windows GPU performance counters (`\GPU Process Memory(...)`) do contain the data — they just need a thin direct reader.

## Architecture

Single Go binary (`oblivion-monitor.exe`), no external runtime. Three goroutines:

| Goroutine | Cadence | Responsibility |
|---|---|---|
| **Watcher** | every 2s | Scan running processes for `Oblivion.exe`. Emit `pid-found` and `pid-lost` events on a channel. |
| **Sampler** | every 1s when PID live | Open PDH query bound to the live PID. Read counters. Push samples to UI channel + CSV writer. |
| **UI** | event-driven | Win32 always-on-top window. Renders current values + rolling sparklines. Manages tray icon. |

Counter rebinding happens on every `pid-found` (PDH counter paths embed the PID). On `pid-lost`, sampler stops, UI hides window, CSV writer closes the current file.

The monitor stays alive in the system tray between sessions so it can detect the next launch.

## Data sources

All counters read via `pdh.dll` through `golang.org/x/sys/windows`. Polling cadence: 1 second. Values reported in MB (binary, 1 MB = 1,048,576 B).

| Metric | Counter path | Fallback | Unit |
|---|---|---|---|
| VRAM dedicated | `\GPU Process Memory(pid_<X>_*)\Dedicated Usage` (sum across all instances matching the PID) | `Local Usage` | MB |
| VRAM shared | `\GPU Process Memory(pid_<X>_*)\Shared Usage` (sum across all instances matching the PID) | `Non Local Usage` | MB |
| RAM (working set, private) | `\Process(Oblivion)\Working Set - Private` | `Working Set` | MB |
| Page file commit | `\Process(Oblivion)\Page File Bytes` | n/a | MB |
| CPU% | `\Process(Oblivion)\% Processor Time` | normalized by `runtime.NumCPU()` | % |
| System RAM free | `\Memory\Available MBytes` | n/a | MB |

If a counter returns NaN/0 for >5 consecutive samples, the row in the UI shows `--` (vs. genuinely zero). The CSV records the raw value either way.

The `\Process(...)` instance name disambiguates by PID via `\Process(Oblivion)\ID Process` matching — Windows appends `#1`, `#2` etc. when names collide. The Sampler refreshes the instance name on every `pid-found`.

## UI

A 320×220 borderless window, draggable by left-click anywhere. Always on top (`WS_EX_TOPMOST`). Default position on first run: top-right of primary monitor (computed at startup from `GetSystemMetrics(SM_CXSCREEN)` minus window width minus 20px margin; same for top edge). Position persists to `<exe-dir>/config.json` on drag.

```
Oblivion.exe (PID 12345) — 00:42:17
─────────────────────────────────────
VRAM (ded)  1248 MB   ▁▂▃▃▄▄▅▅▅▆▆▇▇
VRAM (shr)   312 MB   ▁▁▂▂▂▃▃▃▃▃▃▃▃
RAM         2814 MB   ▁▁▂▃▃▄▄▄▅▅▅▅▅
Page file   3120 MB   ▁▁▂▃▃▄▄▄▅▅▅▅▅
CPU          47 %    ▂▅▃▆▄▇▅▆▃▅▄▆▅
─────────────────────────────────────
Free RAM   18.4 GB                  ⊗
```

Sparklines show the last 60 samples (1 minute). Block characters from the Unicode Block Elements range render in any monospaced font.

`⊗` (bottom-right) hides the window to tray. Tray icon menu: Show / Quit.

When no `Oblivion.exe` exists, the window is hidden and the tray icon turns greyscale. The header "Oblivion.exe (PID …)" lives only when the PID is live.

## CSV output

- **Path:** `<exe-dir>/logs/YYYY-MM-DD-HHMMSS.csv`
- **One file per Oblivion session.** New file opened on each `pid-found`, closed on `pid-lost`.
- **Columns:** `timestamp_iso, uptime_sec, vram_dedicated_mb, vram_shared_mb, ram_private_mb, page_file_mb, cpu_pct, system_free_ram_mb`
- **Header row** written on first sample.
- **Encoding:** UTF-8, LF line endings.
- **Flushing:** `bufio.Writer` flushed every sample (1s) so a crash doesn't lose data.

`uptime_sec` is monotonic seconds since `pid-found`, useful for plotting "memory growth over session length" without normalizing wall-clock.

## Failure modes

| Failure | Detection | Behavior |
|---|---|---|
| PDH access denied | `PdhAddCounter` returns `PDH_ACCESS_DENIED` | Log to `oblivion-monitor.log`. Show actionable error in window. Retry every 30s. |
| GPU counters not registered | All `\GPU Process Memory(...)` paths return error | Log + window error: "Run `lodctr /R` as admin to repair GPU performance counters." VRAM rows show `--` but RAM/CPU keep working. |
| Multiple `Oblivion.exe` | Watcher returns >1 PID | Use first found. Log a one-time warning. |
| Counter returns 0 | >5 consecutive zero/NaN | UI row shows `--`. CSV continues recording raw values. |
| Disk full / log dir unwritable | CSV write returns error | Log to `oblivion-monitor.log`. Disable CSV for the session. UI keeps working. |

## Configuration

`<exe-dir>/config.json`, optional. If missing, defaults are used and the file is written on first window drag (so an unconfigured user never sees a config file until they move the window):

```json
{
  "window_x": null,
  "window_y": null,
  "polling_interval_ms": 1000,
  "scan_interval_ms": 2000,
  "log_dir": "logs",
  "process_name": "Oblivion.exe",
  "fallback_to_local_usage": true
}
```

`window_x` / `window_y` `null` → compute default from screen metrics. Numeric → use that pixel position.

`process_name` configurable so the same tool can monitor `obse_loader.exe` or future variants without recompile.

## Build and placement

- **Source:** `D:\Modlists\Reborn\tools\oblivion-monitor\` (in the existing Reborn git repo, separate folder so it doesn't pollute the modlist tree)
- **Module path:** `github.com/gnarlyman/oblivion-reborn/tools/oblivion-monitor`
- **Dependencies:**
  - `golang.org/x/sys/windows` — PDH bindings, process enumeration
  - `github.com/lxn/walk` — Win32 window + NotifyIcon (tray). Mature WinAPI wrapper; same package handles both, no extra tray library.
- **Build:** `go build -ldflags="-H=windowsgui" .` produces a ~5 MB GUI .exe with no console window
- **Runtime:** double-click the .exe. No install. CSV logs go to `<exe-dir>/logs/`.
- **Optional autostart:** user creates a Windows shortcut in `shell:startup`. Out of scope for v1 build.

## Future work (explicitly out of scope for v1)

1. **Log tailing** — read `MessageLog.txt`, `EngineBugFixes.log`, `ConScribe Logs/*.log` while Oblivion runs and surface warning/error rate per second alongside VRAM/RAM. Cheap addition; defer to v1.5.
2. **Per-process FPS via PresentMon** — bundle `PresentMon-x64.exe`, spawn it for the live PID, parse stdout for `MsBetweenPresents`, display FPS. ~400 KB additional binary.
3. **Custom OBSE plugin** for true engine-internal metrics (form count, draw calls, cell load state). Days-to-weeks of C++ work against reverse-engineered offsets. Separate project if v1 + log tailing prove insufficient.

## Open questions

None at design lock. (Tray-resident between sessions: yes. PresentMon: deferred.)
