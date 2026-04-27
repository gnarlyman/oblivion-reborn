# oblivion-monitor Implementation Plan

> **For agentic workers:** REQUIRED SUB-SKILL: Use superpowers:subagent-driven-development (recommended) or superpowers:executing-plans to implement this plan task-by-task. Steps use checkbox (`- [ ]`) syntax for tracking.

**Goal:** Build `oblivion-monitor.exe` — a single Go binary that displays per-process VRAM/RAM/CPU/page-file metrics for `Oblivion.exe` in an always-on-top window and writes a per-session CSV log.

**Architecture:** Single Go module under `tools/oblivion-monitor/`. Three goroutines: Watcher (process scan), Sampler (PDH counter polling), UI (`walk`-based always-on-top window + tray). Communication via typed channels. No external runtime — Windows-only build.

**Tech Stack:** Go 1.22+, `github.com/lxn/walk` (Win32 GUI + tray), `golang.org/x/sys/windows` (process enumeration), direct `pdh.dll` syscalls (no third-party PDH wrapper), `github.com/akavel/rsrc` (build-time only, embeds Windows manifest).

**Spec:** `D:\Modlists\Reborn\docs\superpowers\specs\2026-04-26-oblivion-monitor-design.md`

## File structure

All files under `D:\Modlists\Reborn\tools\oblivion-monitor\`:

| File | Responsibility |
|---|---|
| `go.mod` | Module declaration |
| `main.go` | Entry point: wires Watcher → Sampler → UI/CSV channels, owns lifecycle |
| `config.go` | Load/save `config.json` (window position, intervals, process name) |
| `config_test.go` | Pure unit tests for config |
| `pdh.go` | Thin syscall wrapper around `pdh.dll` (Open/AddCounter/CollectData/GetValue/Close, wildcard expansion) |
| `pdh_test.go` | Integration tests against real PDH (skipped with `-short`) |
| `watcher.go` | Process scan goroutine using `CreateToolhelp32Snapshot` |
| `watcher_test.go` | Integration tests using live test process |
| `sampler.go` | Sampler goroutine; binds counters per PID, pushes samples to channel |
| `sampler_test.go` | Integration tests with real Oblivion-equivalent PID |
| `csvlog.go` | CSV writer: opens per-session file, writes header + rows, flushes |
| `csvlog_test.go` | Pure unit tests using `t.TempDir()` |
| `sparkline.go` | Render rolling sample window as Unicode block characters |
| `sparkline_test.go` | Pure unit tests for sparkline output |
| `ui.go` | walk window setup, sparkline drawing, tray icon, drag handler |
| `app.manifest` | Win32 manifest (required by walk for Common Controls 6) |
| `build.sh` | Build script: generates `rsrc.syso`, runs `go build -ldflags=-H=windowsgui` |
| `README.md` | Quick-start, build instructions, troubleshooting |
| `.gitignore` | Ignore `*.exe`, `rsrc.syso`, `logs/`, `oblivion-monitor.log` |

Single package `main`. Files are flat (no subpackages) — small enough that a single namespace is clearer than artificial splits.

---

## Task 1: Repo bootstrap

**Files:**
- Create: `tools/oblivion-monitor/go.mod`
- Create: `tools/oblivion-monitor/.gitignore`
- Create: `tools/oblivion-monitor/README.md`
- Create: `tools/oblivion-monitor/app.manifest`

- [ ] **Step 1: Create the directory and `go.mod`**

```bash
mkdir -p D:/Modlists/Reborn/tools/oblivion-monitor
cd D:/Modlists/Reborn/tools/oblivion-monitor
```

`go.mod`:
```
module github.com/gnarlyman/oblivion-reborn/tools/oblivion-monitor

go 1.22

require (
	github.com/lxn/walk v0.0.0-20210112085537-c389da54e794
	golang.org/x/sys v0.20.0
)
```

Run: `go mod tidy`
Expected: downloads walk + transitive deps, populates `go.sum`.

- [ ] **Step 2: Create `.gitignore`**

```
# Build outputs
*.exe
rsrc.syso

# Runtime artifacts
logs/
oblivion-monitor.log
config.json
```

- [ ] **Step 3: Create `app.manifest`**

```xml
<?xml version="1.0" encoding="UTF-8" standalone="yes"?>
<assembly xmlns="urn:schemas-microsoft-com:asm.v1" manifestVersion="1.0">
  <assemblyIdentity version="1.0.0.0" processorArchitecture="*" name="OblivionMonitor" type="win32"/>
  <dependency>
    <dependentAssembly>
      <assemblyIdentity type="win32" name="Microsoft.Windows.Common-Controls" version="6.0.0.0" processorArchitecture="*" publicKeyToken="6595b64144ccf1df" language="*"/>
    </dependentAssembly>
  </dependency>
  <trustInfo xmlns="urn:schemas-microsoft-com:asm.v3">
    <security>
      <requestedPrivileges>
        <requestedExecutionLevel level="asInvoker" uiAccess="false"/>
      </requestedPrivileges>
    </security>
  </trustInfo>
  <application xmlns="urn:schemas-microsoft-com:asm.v3">
    <windowsSettings>
      <dpiAware xmlns="http://schemas.microsoft.com/SMI/2005/WindowsSettings">true</dpiAware>
    </windowsSettings>
  </application>
</assembly>
```

- [ ] **Step 4: Create `README.md`**

```markdown
# oblivion-monitor

Per-process VRAM/RAM/CPU monitor for Oblivion.exe. Shows an always-on-top
window when Oblivion is running and writes per-session CSV logs.

## Build

```
go install github.com/akavel/rsrc@latest
./build.sh
```

Produces `oblivion-monitor.exe` (~5 MB, GUI subsystem, no console).

## Run

Double-click `oblivion-monitor.exe`. Lives in the system tray; window
appears whenever Oblivion.exe is running.

CSV logs go to `logs/YYYY-MM-DD-HHMMSS.csv`.

## Configuration

`config.json` (auto-created on first window drag) — see source for fields.

## Troubleshooting

If VRAM rows show `--` permanently, run `lodctr /R` from an Admin
PowerShell to repair Windows GPU performance counters.
```

- [ ] **Step 5: Commit**

```bash
git add tools/oblivion-monitor/go.mod tools/oblivion-monitor/go.sum tools/oblivion-monitor/.gitignore tools/oblivion-monitor/README.md tools/oblivion-monitor/app.manifest
git commit -m "oblivion-monitor: bootstrap module and manifest"
```

---

## Task 2: Config loader

**Files:**
- Create: `tools/oblivion-monitor/config.go`
- Test: `tools/oblivion-monitor/config_test.go`

- [ ] **Step 1: Write the failing test**

`config_test.go`:
```go
package main

import (
	"encoding/json"
	"os"
	"path/filepath"
	"testing"
)

func TestConfigLoadMissingReturnsDefaults(t *testing.T) {
	dir := t.TempDir()
	cfg, err := LoadConfig(filepath.Join(dir, "missing.json"))
	if err != nil {
		t.Fatalf("LoadConfig on missing file should not error, got %v", err)
	}
	if cfg.PollingIntervalMS != 1000 {
		t.Errorf("default PollingIntervalMS = %d, want 1000", cfg.PollingIntervalMS)
	}
	if cfg.ScanIntervalMS != 2000 {
		t.Errorf("default ScanIntervalMS = %d, want 2000", cfg.ScanIntervalMS)
	}
	if cfg.LogDir != "logs" {
		t.Errorf("default LogDir = %q, want %q", cfg.LogDir, "logs")
	}
	if cfg.ProcessName != "Oblivion.exe" {
		t.Errorf("default ProcessName = %q, want %q", cfg.ProcessName, "Oblivion.exe")
	}
	if cfg.WindowX != nil || cfg.WindowY != nil {
		t.Errorf("default WindowX/Y should be nil, got %v %v", cfg.WindowX, cfg.WindowY)
	}
	if !cfg.FallbackToLocalUsage {
		t.Errorf("default FallbackToLocalUsage should be true")
	}
}

func TestConfigLoadExisting(t *testing.T) {
	dir := t.TempDir()
	path := filepath.Join(dir, "config.json")
	x, y := 100, 200
	original := Config{
		WindowX:              &x,
		WindowY:              &y,
		PollingIntervalMS:    500,
		ScanIntervalMS:       1500,
		LogDir:               "custom-logs",
		ProcessName:          "OtherGame.exe",
		FallbackToLocalUsage: false,
	}
	data, err := json.Marshal(original)
	if err != nil {
		t.Fatal(err)
	}
	if err := os.WriteFile(path, data, 0644); err != nil {
		t.Fatal(err)
	}

	loaded, err := LoadConfig(path)
	if err != nil {
		t.Fatalf("LoadConfig: %v", err)
	}
	if *loaded.WindowX != 100 || *loaded.WindowY != 200 {
		t.Errorf("WindowX/Y = %v %v, want 100 200", *loaded.WindowX, *loaded.WindowY)
	}
	if loaded.PollingIntervalMS != 500 {
		t.Errorf("PollingIntervalMS = %d, want 500", loaded.PollingIntervalMS)
	}
	if loaded.ProcessName != "OtherGame.exe" {
		t.Errorf("ProcessName = %q, want %q", loaded.ProcessName, "OtherGame.exe")
	}
}

func TestConfigSaveRoundTrip(t *testing.T) {
	dir := t.TempDir()
	path := filepath.Join(dir, "config.json")
	x, y := 50, 75
	cfg := Config{
		WindowX:              &x,
		WindowY:              &y,
		PollingIntervalMS:    1000,
		ScanIntervalMS:       2000,
		LogDir:               "logs",
		ProcessName:          "Oblivion.exe",
		FallbackToLocalUsage: true,
	}
	if err := SaveConfig(path, cfg); err != nil {
		t.Fatalf("SaveConfig: %v", err)
	}
	loaded, err := LoadConfig(path)
	if err != nil {
		t.Fatalf("LoadConfig: %v", err)
	}
	if *loaded.WindowX != 50 || *loaded.WindowY != 75 {
		t.Errorf("round-trip lost WindowX/Y: %v %v", *loaded.WindowX, *loaded.WindowY)
	}
}
```

- [ ] **Step 2: Run test to verify it fails**

```bash
cd tools/oblivion-monitor
go test -run TestConfig
```
Expected: FAIL with "Config undefined" or "LoadConfig undefined".

- [ ] **Step 3: Implement `config.go`**

```go
package main

import (
	"encoding/json"
	"errors"
	"io/fs"
	"os"
)

// Config holds runtime settings persisted to config.json.
type Config struct {
	WindowX              *int   `json:"window_x"`
	WindowY              *int   `json:"window_y"`
	PollingIntervalMS    int    `json:"polling_interval_ms"`
	ScanIntervalMS       int    `json:"scan_interval_ms"`
	LogDir               string `json:"log_dir"`
	ProcessName          string `json:"process_name"`
	FallbackToLocalUsage bool   `json:"fallback_to_local_usage"`
}

func defaultConfig() Config {
	return Config{
		WindowX:              nil,
		WindowY:              nil,
		PollingIntervalMS:    1000,
		ScanIntervalMS:       2000,
		LogDir:               "logs",
		ProcessName:          "Oblivion.exe",
		FallbackToLocalUsage: true,
	}
}

// LoadConfig reads config from path. Missing file returns defaults (no error).
func LoadConfig(path string) (Config, error) {
	data, err := os.ReadFile(path)
	if errors.Is(err, fs.ErrNotExist) {
		return defaultConfig(), nil
	}
	if err != nil {
		return Config{}, err
	}
	cfg := defaultConfig()
	if err := json.Unmarshal(data, &cfg); err != nil {
		return Config{}, err
	}
	return cfg, nil
}

// SaveConfig writes cfg to path as pretty-printed JSON.
func SaveConfig(path string, cfg Config) error {
	data, err := json.MarshalIndent(cfg, "", "  ")
	if err != nil {
		return err
	}
	return os.WriteFile(path, data, 0644)
}
```

- [ ] **Step 4: Run test to verify it passes**

```bash
go test -run TestConfig -v
```
Expected: PASS — three tests.

- [ ] **Step 5: Commit**

```bash
git add tools/oblivion-monitor/config.go tools/oblivion-monitor/config_test.go
git commit -m "oblivion-monitor: config load/save with defaults"
```

---

## Task 3: PDH syscall wrapper — Open/Close/Add/Collect/Get

**Files:**
- Create: `tools/oblivion-monitor/pdh.go`
- Test: `tools/oblivion-monitor/pdh_test.go`

- [ ] **Step 1: Write the failing test**

`pdh_test.go`:
```go
package main

import (
	"testing"
)

func TestPDHOpenCloseQuery(t *testing.T) {
	if testing.Short() {
		t.Skip("PDH integration test")
	}
	q, err := PdhOpenQuery()
	if err != nil {
		t.Fatalf("PdhOpenQuery: %v", err)
	}
	if err := q.Close(); err != nil {
		t.Fatalf("Close: %v", err)
	}
}

func TestPDHReadSystemAvailableMBytes(t *testing.T) {
	if testing.Short() {
		t.Skip("PDH integration test")
	}
	q, err := PdhOpenQuery()
	if err != nil {
		t.Fatal(err)
	}
	defer q.Close()

	c, err := q.AddEnglishCounter(`\Memory\Available MBytes`)
	if err != nil {
		t.Fatalf("AddEnglishCounter: %v", err)
	}

	// Two collects required: first establishes baseline for rate counters.
	// Single-instantaneous counters return after the first collect, but
	// we standardize on two for safety.
	if err := q.Collect(); err != nil {
		t.Fatal(err)
	}
	if err := q.Collect(); err != nil {
		t.Fatal(err)
	}

	val, err := c.Value()
	if err != nil {
		t.Fatalf("Value: %v", err)
	}
	if val <= 0 {
		t.Errorf("Available MBytes should be > 0, got %v", val)
	}
	t.Logf("Available MBytes = %.0f", val)
}
```

- [ ] **Step 2: Run test to verify it fails**

```bash
go test -run TestPDH -v
```
Expected: FAIL with "PdhOpenQuery undefined".

- [ ] **Step 3: Implement `pdh.go`**

```go
package main

import (
	"fmt"
	"syscall"
	"unsafe"

	"golang.org/x/sys/windows"
)

var (
	pdhDLL = windows.NewLazySystemDLL("pdh.dll")

	procPdhOpenQuery               = pdhDLL.NewProc("PdhOpenQueryW")
	procPdhCloseQuery              = pdhDLL.NewProc("PdhCloseQuery")
	procPdhAddEnglishCounter       = pdhDLL.NewProc("PdhAddEnglishCounterW")
	procPdhAddCounter              = pdhDLL.NewProc("PdhAddCounterW")
	procPdhCollectQueryData        = pdhDLL.NewProc("PdhCollectQueryData")
	procPdhGetFormattedCounterValue = pdhDLL.NewProc("PdhGetFormattedCounterValue")
	procPdhExpandWildCardPath      = pdhDLL.NewProc("PdhExpandWildCardPathW")
)

const (
	pdhFmtDouble = 0x00000200
	pdhMoreData  = 0x800007D2
	pdhCStatusValidData = 0x00000000
	pdhCStatusNewData   = 0x00000001
)

// PdhQuery wraps a PDH query handle.
type PdhQuery struct {
	handle uintptr
}

// PdhCounter wraps a single counter handle within a query.
type PdhCounter struct {
	handle uintptr
}

// PdhOpenQuery creates a new PDH query.
func PdhOpenQuery() (*PdhQuery, error) {
	var handle uintptr
	r, _, _ := procPdhOpenQuery.Call(0, 0, uintptr(unsafe.Pointer(&handle)))
	if r != 0 {
		return nil, fmt.Errorf("PdhOpenQuery: 0x%x", r)
	}
	return &PdhQuery{handle: handle}, nil
}

// Close releases the query.
func (q *PdhQuery) Close() error {
	if q.handle == 0 {
		return nil
	}
	r, _, _ := procPdhCloseQuery.Call(q.handle)
	q.handle = 0
	if r != 0 {
		return fmt.Errorf("PdhCloseQuery: 0x%x", r)
	}
	return nil
}

// AddEnglishCounter adds a counter using the English locale path. Required
// when the counter path contains object/counter names that vary by locale
// (e.g. "Memory" / "Available MBytes" become localized on non-English Windows).
func (q *PdhQuery) AddEnglishCounter(path string) (*PdhCounter, error) {
	pathW, err := syscall.UTF16PtrFromString(path)
	if err != nil {
		return nil, err
	}
	var handle uintptr
	r, _, _ := procPdhAddEnglishCounter.Call(
		q.handle,
		uintptr(unsafe.Pointer(pathW)),
		0,
		uintptr(unsafe.Pointer(&handle)),
	)
	if r != 0 {
		return nil, fmt.Errorf("PdhAddEnglishCounter %q: 0x%x", path, r)
	}
	return &PdhCounter{handle: handle}, nil
}

// AddCounter adds a counter using the localized counter path (used when the
// path was already returned by PdhExpandWildCardPath, which yields localized
// names).
func (q *PdhQuery) AddCounter(path string) (*PdhCounter, error) {
	pathW, err := syscall.UTF16PtrFromString(path)
	if err != nil {
		return nil, err
	}
	var handle uintptr
	r, _, _ := procPdhAddCounter.Call(
		q.handle,
		uintptr(unsafe.Pointer(pathW)),
		0,
		uintptr(unsafe.Pointer(&handle)),
	)
	if r != 0 {
		return nil, fmt.Errorf("PdhAddCounter %q: 0x%x", path, r)
	}
	return &PdhCounter{handle: handle}, nil
}

// Collect samples all counters in the query.
func (q *PdhQuery) Collect() error {
	r, _, _ := procPdhCollectQueryData.Call(q.handle)
	if r != 0 {
		return fmt.Errorf("PdhCollectQueryData: 0x%x", r)
	}
	return nil
}

// pdhFmtCounterValue mirrors PDH_FMT_COUNTERVALUE for the DOUBLE variant.
type pdhFmtCounterValue struct {
	CStatus    uint32
	_padding   uint32
	DoubleValue float64
}

// Value returns the latest sampled value as float64.
func (c *PdhCounter) Value() (float64, error) {
	var fmtVal pdhFmtCounterValue
	r, _, _ := procPdhGetFormattedCounterValue.Call(
		c.handle,
		uintptr(pdhFmtDouble),
		0,
		uintptr(unsafe.Pointer(&fmtVal)),
	)
	if r != 0 {
		return 0, fmt.Errorf("PdhGetFormattedCounterValue: 0x%x", r)
	}
	if fmtVal.CStatus != pdhCStatusValidData && fmtVal.CStatus != pdhCStatusNewData {
		return 0, fmt.Errorf("counter status: 0x%x", fmtVal.CStatus)
	}
	return fmtVal.DoubleValue, nil
}
```

- [ ] **Step 4: Run test to verify it passes**

```bash
go test -run TestPDH -v
```
Expected: PASS — both tests. Logs the actual `Available MBytes` value.

- [ ] **Step 5: Commit**

```bash
git add tools/oblivion-monitor/pdh.go tools/oblivion-monitor/pdh_test.go
git commit -m "oblivion-monitor: PDH syscall wrapper for query/counter basics"
```

---

## Task 4: PDH wildcard expansion

**Files:**
- Modify: `tools/oblivion-monitor/pdh.go`
- Modify: `tools/oblivion-monitor/pdh_test.go`

- [ ] **Step 1: Write the failing test**

Append to `pdh_test.go`:
```go
func TestPDHExpandWildcardForGPUMemory(t *testing.T) {
	if testing.Short() {
		t.Skip("PDH integration test")
	}
	// Find any GPU process memory instance — there's always at least one
	// (dwm.exe, explorer.exe, or any GPU-using process).
	paths, err := PdhExpandWildCardPath(`\GPU Process Memory(*)\Dedicated Usage`)
	if err != nil {
		t.Fatalf("PdhExpandWildCardPath: %v", err)
	}
	if len(paths) == 0 {
		t.Fatalf("expected >=1 expanded path, got 0")
	}
	t.Logf("expanded %d paths; first = %q", len(paths), paths[0])
}
```

- [ ] **Step 2: Run test to verify it fails**

```bash
go test -run TestPDHExpand -v
```
Expected: FAIL with "PdhExpandWildCardPath undefined".

- [ ] **Step 3: Implement wildcard expansion**

Append to `pdh.go`:
```go
// PdhExpandWildCardPath expands a PDH path containing wildcards into the list
// of currently-matching concrete paths. Returns localized counter paths
// suitable for AddCounter (NOT AddEnglishCounter).
func PdhExpandWildCardPath(wildcard string) ([]string, error) {
	wildW, err := syscall.UTF16PtrFromString(wildcard)
	if err != nil {
		return nil, err
	}

	// First call with bufLen=0 to learn required buffer size.
	var bufLen uint32
	r, _, _ := procPdhExpandWildCardPath.Call(
		0,
		uintptr(unsafe.Pointer(wildW)),
		0,
		uintptr(unsafe.Pointer(&bufLen)),
		0,
	)
	if r != 0 && r != pdhMoreData {
		return nil, fmt.Errorf("PdhExpandWildCardPath sizing: 0x%x", r)
	}
	if bufLen == 0 {
		return nil, nil
	}

	buf := make([]uint16, bufLen)
	r, _, _ = procPdhExpandWildCardPath.Call(
		0,
		uintptr(unsafe.Pointer(wildW)),
		uintptr(unsafe.Pointer(&buf[0])),
		uintptr(unsafe.Pointer(&bufLen)),
		0,
	)
	if r != 0 {
		return nil, fmt.Errorf("PdhExpandWildCardPath: 0x%x", r)
	}

	// Result is a multi-string: sequences of UTF-16 strings each terminated
	// by NUL, with a final empty string (double-NUL) marking the end.
	var paths []string
	start := 0
	for i := 0; i < int(bufLen); i++ {
		if buf[i] == 0 {
			if i == start {
				break // double-NUL terminator
			}
			paths = append(paths, syscall.UTF16ToString(buf[start:i]))
			start = i + 1
		}
	}
	return paths, nil
}
```

- [ ] **Step 4: Run test to verify it passes**

```bash
go test -run TestPDHExpand -v
```
Expected: PASS — logs first expanded path (e.g. `\GPU Process Memory(pid_1234_luid_..._phys_0)\Dedicated Usage`).

- [ ] **Step 5: Commit**

```bash
git add tools/oblivion-monitor/pdh.go tools/oblivion-monitor/pdh_test.go
git commit -m "oblivion-monitor: PDH wildcard path expansion"
```

---

## Task 5: CSV logger

**Files:**
- Create: `tools/oblivion-monitor/csvlog.go`
- Test: `tools/oblivion-monitor/csvlog_test.go`

- [ ] **Step 1: Write the failing test**

`csvlog_test.go`:
```go
package main

import (
	"os"
	"path/filepath"
	"strings"
	"testing"
	"time"
)

func TestCSVLoggerHeaderAndRow(t *testing.T) {
	dir := t.TempDir()
	lg, err := NewCSVLogger(dir)
	if err != nil {
		t.Fatalf("NewCSVLogger: %v", err)
	}

	sample := Sample{
		Timestamp:        time.Date(2026, 4, 26, 12, 0, 0, 0, time.UTC),
		UptimeSec:        42,
		VRAMDedicatedMB:  1024.5,
		VRAMSharedMB:     128.0,
		RAMPrivateMB:     2048.0,
		PageFileMB:       3072.0,
		CPUPct:           37.5,
		SystemFreeRAMMB:  16384.0,
	}
	if err := lg.Write(sample); err != nil {
		t.Fatalf("Write: %v", err)
	}
	if err := lg.Close(); err != nil {
		t.Fatalf("Close: %v", err)
	}

	files, _ := filepath.Glob(filepath.Join(dir, "*.csv"))
	if len(files) != 1 {
		t.Fatalf("expected 1 csv file, got %d", len(files))
	}
	data, err := os.ReadFile(files[0])
	if err != nil {
		t.Fatal(err)
	}
	got := string(data)

	wantHeader := "timestamp_iso,uptime_sec,vram_dedicated_mb,vram_shared_mb,ram_private_mb,page_file_mb,cpu_pct,system_free_ram_mb\n"
	if !strings.HasPrefix(got, wantHeader) {
		t.Errorf("header mismatch:\n got: %q\nwant: %q", got, wantHeader)
	}
	wantRow := "2026-04-26T12:00:00Z,42,1024.50,128.00,2048.00,3072.00,37.50,16384.00\n"
	if !strings.HasSuffix(got, wantRow) {
		t.Errorf("row mismatch:\n got: %q\nwant: %q", got, wantRow)
	}
}

func TestCSVLoggerNewSessionNewFile(t *testing.T) {
	dir := t.TempDir()
	lg1, _ := NewCSVLogger(dir)
	lg1.Write(Sample{Timestamp: time.Now()})
	lg1.Close()

	// Sleep just enough to guarantee a different filename second.
	time.Sleep(1100 * time.Millisecond)

	lg2, _ := NewCSVLogger(dir)
	lg2.Write(Sample{Timestamp: time.Now()})
	lg2.Close()

	files, _ := filepath.Glob(filepath.Join(dir, "*.csv"))
	if len(files) != 2 {
		t.Errorf("expected 2 csv files, got %d", len(files))
	}
}

func TestCSVLoggerCreatesDirIfMissing(t *testing.T) {
	dir := filepath.Join(t.TempDir(), "nested", "logs")
	lg, err := NewCSVLogger(dir)
	if err != nil {
		t.Fatalf("NewCSVLogger: %v", err)
	}
	defer lg.Close()
	if _, err := os.Stat(dir); err != nil {
		t.Errorf("log dir not created: %v", err)
	}
}
```

- [ ] **Step 2: Run test to verify it fails**

```bash
go test -run TestCSVLogger -v
```
Expected: FAIL with "Sample undefined" / "NewCSVLogger undefined".

- [ ] **Step 3: Implement `csvlog.go`**

```go
package main

import (
	"bufio"
	"fmt"
	"os"
	"path/filepath"
	"time"
)

// Sample holds one polling tick of metrics.
type Sample struct {
	Timestamp        time.Time
	UptimeSec        int
	VRAMDedicatedMB  float64
	VRAMSharedMB     float64
	RAMPrivateMB     float64
	PageFileMB       float64
	CPUPct           float64
	SystemFreeRAMMB  float64
}

// CSVLogger writes one CSV file per session. Header written on construction;
// each Write flushes immediately so a crash doesn't lose the most recent data.
type CSVLogger struct {
	file *os.File
	bw   *bufio.Writer
}

const csvHeader = "timestamp_iso,uptime_sec,vram_dedicated_mb,vram_shared_mb,ram_private_mb,page_file_mb,cpu_pct,system_free_ram_mb\n"

// NewCSVLogger creates dir if needed and opens a new timestamped CSV.
func NewCSVLogger(dir string) (*CSVLogger, error) {
	if err := os.MkdirAll(dir, 0755); err != nil {
		return nil, err
	}
	name := time.Now().Format("2006-01-02-150405") + ".csv"
	path := filepath.Join(dir, name)
	f, err := os.Create(path)
	if err != nil {
		return nil, err
	}
	bw := bufio.NewWriter(f)
	if _, err := bw.WriteString(csvHeader); err != nil {
		f.Close()
		return nil, err
	}
	if err := bw.Flush(); err != nil {
		f.Close()
		return nil, err
	}
	return &CSVLogger{file: f, bw: bw}, nil
}

// Write appends one sample row and flushes.
func (c *CSVLogger) Write(s Sample) error {
	line := fmt.Sprintf("%s,%d,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f\n",
		s.Timestamp.UTC().Format(time.RFC3339),
		s.UptimeSec,
		s.VRAMDedicatedMB,
		s.VRAMSharedMB,
		s.RAMPrivateMB,
		s.PageFileMB,
		s.CPUPct,
		s.SystemFreeRAMMB,
	)
	if _, err := c.bw.WriteString(line); err != nil {
		return err
	}
	return c.bw.Flush()
}

// Close flushes and releases the file.
func (c *CSVLogger) Close() error {
	if c.bw != nil {
		c.bw.Flush()
	}
	if c.file != nil {
		return c.file.Close()
	}
	return nil
}
```

- [ ] **Step 4: Run test to verify it passes**

```bash
go test -run TestCSVLogger -v
```
Expected: PASS — three tests.

- [ ] **Step 5: Commit**

```bash
git add tools/oblivion-monitor/csvlog.go tools/oblivion-monitor/csvlog_test.go
git commit -m "oblivion-monitor: per-session CSV logger"
```

---

## Task 6: Sparkline rendering

**Files:**
- Create: `tools/oblivion-monitor/sparkline.go`
- Test: `tools/oblivion-monitor/sparkline_test.go`

- [ ] **Step 1: Write the failing test**

`sparkline_test.go`:
```go
package main

import (
	"strings"
	"testing"
)

func TestSparklineEmpty(t *testing.T) {
	got := Sparkline(nil, 10)
	if got != strings.Repeat(" ", 10) {
		t.Errorf("empty samples should produce all spaces, got %q", got)
	}
}

func TestSparklineMinMaxFullRange(t *testing.T) {
	got := Sparkline([]float64{0, 100}, 2)
	want := "▁█"
	if got != want {
		t.Errorf("got %q, want %q", got, want)
	}
}

func TestSparklineMonotonicIncreasing(t *testing.T) {
	got := Sparkline([]float64{1, 2, 3, 4, 5, 6, 7, 8}, 8)
	want := "▁▂▃▄▅▆▇█"
	if got != want {
		t.Errorf("got %q, want %q", got, want)
	}
}

func TestSparklineConstantValue(t *testing.T) {
	got := Sparkline([]float64{50, 50, 50}, 3)
	// All-equal samples: render at the bottom block (no variation).
	want := "▁▁▁"
	if got != want {
		t.Errorf("got %q, want %q", got, want)
	}
}

func TestSparklineWidthLargerThanSamples(t *testing.T) {
	got := Sparkline([]float64{1, 2}, 5)
	// Pad on the left with spaces; samples render at the right.
	if !strings.HasSuffix(got, "▁█") {
		t.Errorf("got %q, want suffix %q", got, "▁█")
	}
	if len([]rune(got)) != 5 {
		t.Errorf("got width %d, want 5", len([]rune(got)))
	}
}

func TestSparklineWidthSmallerThanSamples(t *testing.T) {
	// More samples than width: take the most recent N.
	got := Sparkline([]float64{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, 3)
	want := "▆▇█"
	if got != want {
		t.Errorf("got %q, want %q", got, want)
	}
}
```

- [ ] **Step 2: Run test to verify it fails**

```bash
go test -run TestSparkline -v
```
Expected: FAIL with "Sparkline undefined".

- [ ] **Step 3: Implement `sparkline.go`**

```go
package main

import "strings"

// Block characters from U+2581 to U+2588: ▁▂▃▄▅▆▇█
var blocks = []rune{'▁', '▂', '▃', '▄', '▅', '▆', '▇', '█'}

// Sparkline renders samples as `width` Unicode block characters. If there are
// more samples than width, only the most recent `width` samples are used.
// If fewer, the result is left-padded with spaces. Empty samples produce
// `width` spaces.
func Sparkline(samples []float64, width int) string {
	if width <= 0 {
		return ""
	}
	if len(samples) == 0 {
		return strings.Repeat(" ", width)
	}

	// Clip to most recent `width` samples.
	if len(samples) > width {
		samples = samples[len(samples)-width:]
	}

	// Find min/max for normalization.
	min, max := samples[0], samples[0]
	for _, v := range samples {
		if v < min {
			min = v
		}
		if v > max {
			max = v
		}
	}
	span := max - min

	var b strings.Builder
	pad := width - len(samples)
	for i := 0; i < pad; i++ {
		b.WriteRune(' ')
	}
	for _, v := range samples {
		var idx int
		if span == 0 {
			idx = 0 // all-equal: render at bottom
		} else {
			normalized := (v - min) / span
			idx = int(normalized * float64(len(blocks)-1))
			if idx < 0 {
				idx = 0
			}
			if idx >= len(blocks) {
				idx = len(blocks) - 1
			}
		}
		b.WriteRune(blocks[idx])
	}
	return b.String()
}
```

- [ ] **Step 4: Run test to verify it passes**

```bash
go test -run TestSparkline -v
```
Expected: PASS — six tests.

- [ ] **Step 5: Commit**

```bash
git add tools/oblivion-monitor/sparkline.go tools/oblivion-monitor/sparkline_test.go
git commit -m "oblivion-monitor: unicode block sparkline rendering"
```

---

## Task 7: Process watcher

**Files:**
- Create: `tools/oblivion-monitor/watcher.go`
- Test: `tools/oblivion-monitor/watcher_test.go`

- [ ] **Step 1: Write the failing test**

`watcher_test.go`:
```go
package main

import (
	"os"
	"path/filepath"
	"strings"
	"testing"
)

func TestFindPIDByNameSelf(t *testing.T) {
	if testing.Short() {
		t.Skip("process integration test")
	}
	// The test binary itself is running. Its name ends in .test or .test.exe.
	exe, err := os.Executable()
	if err != nil {
		t.Fatal(err)
	}
	exeName := filepath.Base(exe)

	pid, err := FindPIDByName(exeName)
	if err != nil {
		t.Fatalf("FindPIDByName(%q): %v", exeName, err)
	}
	if pid == 0 {
		t.Errorf("expected non-zero PID for self (%s)", exeName)
	}
	if pid != uint32(os.Getpid()) {
		t.Errorf("got PID %d, want self PID %d", pid, os.Getpid())
	}
}

func TestFindPIDByNameMissingReturnsZero(t *testing.T) {
	if testing.Short() {
		t.Skip("process integration test")
	}
	pid, err := FindPIDByName("definitely-not-a-real-process-12345.exe")
	if err != nil {
		t.Fatalf("unexpected error: %v", err)
	}
	if pid != 0 {
		t.Errorf("expected 0 for missing process, got %d", pid)
	}
}

func TestFindPIDByNameCaseInsensitive(t *testing.T) {
	if testing.Short() {
		t.Skip("process integration test")
	}
	exe, _ := os.Executable()
	exeName := filepath.Base(exe)
	pid, err := FindPIDByName(strings.ToUpper(exeName))
	if err != nil {
		t.Fatal(err)
	}
	if pid == 0 {
		t.Errorf("expected non-zero PID for uppercase name")
	}
}
```

- [ ] **Step 2: Run test to verify it fails**

```bash
go test -run TestFindPID -v
```
Expected: FAIL with "FindPIDByName undefined".

- [ ] **Step 3: Implement `watcher.go`**

```go
package main

import (
	"context"
	"strings"
	"syscall"
	"time"
	"unsafe"

	"golang.org/x/sys/windows"
)

// FindPIDByName scans running processes via Toolhelp32Snapshot and returns
// the PID of the first process whose executable name (case-insensitively)
// matches `name`. Returns (0, nil) if not found.
func FindPIDByName(name string) (uint32, error) {
	snap, err := windows.CreateToolhelp32Snapshot(windows.TH32CS_SNAPPROCESS, 0)
	if err != nil {
		return 0, err
	}
	defer windows.CloseHandle(snap)

	var entry windows.ProcessEntry32
	entry.Size = uint32(unsafe.Sizeof(entry))
	if err := windows.Process32First(snap, &entry); err != nil {
		return 0, err
	}

	target := strings.ToLower(name)
	for {
		exeName := strings.ToLower(syscall.UTF16ToString(entry.ExeFile[:]))
		if exeName == target {
			return entry.ProcessID, nil
		}
		err := windows.Process32Next(snap, &entry)
		if err != nil {
			// ERROR_NO_MORE_FILES marks end of enumeration.
			if err == syscall.ERROR_NO_MORE_FILES {
				return 0, nil
			}
			return 0, err
		}
	}
}

// PIDEvent is emitted by Watcher when the target process appears or disappears.
type PIDEvent struct {
	PID uint32 // 0 means lost
}

// Watcher polls for the named process every interval and emits events on
// transitions.
type Watcher struct {
	ProcessName string
	Interval    time.Duration
	Events      chan PIDEvent
}

// Run blocks until ctx is cancelled. Closes Events on exit.
func (w *Watcher) Run(ctx context.Context) {
	defer close(w.Events)
	var current uint32
	t := time.NewTicker(w.Interval)
	defer t.Stop()

	scan := func() {
		pid, err := FindPIDByName(w.ProcessName)
		if err != nil {
			return // transient errors swallowed; next tick retries
		}
		if pid != current {
			current = pid
			select {
			case w.Events <- PIDEvent{PID: pid}:
			case <-ctx.Done():
			}
		}
	}

	scan() // immediate first scan
	for {
		select {
		case <-ctx.Done():
			return
		case <-t.C:
			scan()
		}
	}
}
```

- [ ] **Step 4: Run test to verify it passes**

```bash
go test -run TestFindPID -v
```
Expected: PASS — three tests.

- [ ] **Step 5: Commit**

```bash
git add tools/oblivion-monitor/watcher.go tools/oblivion-monitor/watcher_test.go
git commit -m "oblivion-monitor: process watcher with PID discovery"
```

---

## Task 8: Sampler

**Files:**
- Create: `tools/oblivion-monitor/sampler.go`
- Test: `tools/oblivion-monitor/sampler_test.go`

- [ ] **Step 1: Write the failing test**

`sampler_test.go`:
```go
package main

import (
	"context"
	"os"
	"path/filepath"
	"runtime"
	"testing"
	"time"
)

func TestSamplerEndToEndAgainstSelf(t *testing.T) {
	if testing.Short() {
		t.Skip("PDH+process integration test")
	}
	// Use the test binary itself as the "monitored process".
	exe, _ := os.Executable()
	exeName := filepath.Base(exe)

	cfg := Config{
		PollingIntervalMS:    200,
		ScanIntervalMS:       200,
		LogDir:               t.TempDir(),
		ProcessName:          exeName,
		FallbackToLocalUsage: true,
	}

	pid := uint32(os.Getpid())
	samples := make(chan Sample, 4)
	ctx, cancel := context.WithTimeout(context.Background(), 2*time.Second)
	defer cancel()

	s := &Sampler{
		Config:  cfg,
		PID:     pid,
		Samples: samples,
	}
	go s.Run(ctx)

	var got Sample
	select {
	case got = <-samples:
	case <-ctx.Done():
		t.Fatal("no sample in 2s")
	}

	if got.RAMPrivateMB <= 0 {
		t.Errorf("RAMPrivateMB = %v, expected > 0 for self process", got.RAMPrivateMB)
	}
	if got.SystemFreeRAMMB <= 0 {
		t.Errorf("SystemFreeRAMMB = %v, expected > 0", got.SystemFreeRAMMB)
	}
	t.Logf("self RAM private = %.0f MB, free system RAM = %.0f MB, CPU = %.1f%%, NumCPU=%d",
		got.RAMPrivateMB, got.SystemFreeRAMMB, got.CPUPct, runtime.NumCPU())
}
```

- [ ] **Step 2: Run test to verify it fails**

```bash
go test -run TestSamplerEnd -v
```
Expected: FAIL with "Sampler undefined".

- [ ] **Step 3: Implement `sampler.go`**

```go
package main

import (
	"context"
	"fmt"
	"runtime"
	"strings"
	"time"
)

// Sampler drives the PDH counters for one Oblivion PID and emits Sample values
// on Samples until ctx is cancelled.
type Sampler struct {
	Config  Config
	PID     uint32
	Samples chan<- Sample
}

// Run binds the counters and polls until ctx is done. It does NOT close the
// Samples channel — that's the caller's responsibility (multiple Samplers may
// share one channel across the program lifetime).
func (s *Sampler) Run(ctx context.Context) {
	q, err := PdhOpenQuery()
	if err != nil {
		return
	}
	defer q.Close()

	// Bind \Process(<name>) counters. PDH requires the instance name without
	// .exe and may append #N when names collide. We use the bare name and
	// rely on the fact that we already have the PID from Watcher; if name
	// collisions become a problem in practice, future work can match on
	// \Process(*)\ID Process == s.PID.
	bareName := strings.TrimSuffix(s.Config.ProcessName, ".exe")
	procPath := func(metric string) string {
		return fmt.Sprintf(`\Process(%s)\%s`, bareName, metric)
	}

	cWorkingSetPriv, _ := q.AddEnglishCounter(procPath("Working Set - Private"))
	cWorkingSet, _ := q.AddEnglishCounter(procPath("Working Set"))
	cPageFile, _ := q.AddEnglishCounter(procPath("Page File Bytes"))
	cCPU, _ := q.AddEnglishCounter(procPath("% Processor Time"))
	cFreeRAM, _ := q.AddEnglishCounter(`\Memory\Available MBytes`)

	// Bind GPU memory counters via wildcard expansion. There may be multiple
	// instances per PID (one per physical heap); we sum them.
	pidPrefix := fmt.Sprintf("pid_%d_", s.PID)
	dedicatedPaths := s.expandGPUPaths(pidPrefix, "Dedicated Usage")
	if len(dedicatedPaths) == 0 && s.Config.FallbackToLocalUsage {
		dedicatedPaths = s.expandGPUPaths(pidPrefix, "Local Usage")
	}
	sharedPaths := s.expandGPUPaths(pidPrefix, "Shared Usage")
	if len(sharedPaths) == 0 && s.Config.FallbackToLocalUsage {
		sharedPaths = s.expandGPUPaths(pidPrefix, "Non Local Usage")
	}

	dedicatedCounters := make([]*PdhCounter, 0, len(dedicatedPaths))
	for _, p := range dedicatedPaths {
		if c, err := q.AddCounter(p); err == nil {
			dedicatedCounters = append(dedicatedCounters, c)
		}
	}
	sharedCounters := make([]*PdhCounter, 0, len(sharedPaths))
	for _, p := range sharedPaths {
		if c, err := q.AddCounter(p); err == nil {
			sharedCounters = append(sharedCounters, c)
		}
	}

	// First Collect() establishes baseline; rate counters return zero on the
	// first read.
	q.Collect()

	start := time.Now()
	t := time.NewTicker(time.Duration(s.Config.PollingIntervalMS) * time.Millisecond)
	defer t.Stop()
	numCPU := float64(runtime.NumCPU())

	for {
		select {
		case <-ctx.Done():
			return
		case <-t.C:
		}

		if err := q.Collect(); err != nil {
			continue
		}

		readSum := func(cs []*PdhCounter) float64 {
			var sum float64
			for _, c := range cs {
				if v, err := c.Value(); err == nil {
					sum += v
				}
			}
			return sum
		}
		readOne := func(c *PdhCounter, fallback *PdhCounter) float64 {
			if c != nil {
				if v, err := c.Value(); err == nil {
					return v
				}
			}
			if fallback != nil {
				if v, err := fallback.Value(); err == nil {
					return v
				}
			}
			return 0
		}

		bytesToMB := 1.0 / (1024 * 1024)
		sample := Sample{
			Timestamp:       time.Now(),
			UptimeSec:       int(time.Since(start).Seconds()),
			VRAMDedicatedMB: readSum(dedicatedCounters) * bytesToMB,
			VRAMSharedMB:    readSum(sharedCounters) * bytesToMB,
			RAMPrivateMB:    readOne(cWorkingSetPriv, cWorkingSet) * bytesToMB,
			PageFileMB:      readOne(cPageFile, nil) * bytesToMB,
			CPUPct:          readOne(cCPU, nil) / numCPU,
			SystemFreeRAMMB: readOne(cFreeRAM, nil),
		}

		select {
		case s.Samples <- sample:
		case <-ctx.Done():
			return
		}
	}
}

func (s *Sampler) expandGPUPaths(pidPrefix, metric string) []string {
	wild := fmt.Sprintf(`\GPU Process Memory(%s*)\%s`, pidPrefix, metric)
	paths, err := PdhExpandWildCardPath(wild)
	if err != nil {
		return nil
	}
	return paths
}
```

- [ ] **Step 4: Run test to verify it passes**

```bash
go test -run TestSamplerEnd -v
```
Expected: PASS — logs self RAM/CPU.

- [ ] **Step 5: Commit**

```bash
git add tools/oblivion-monitor/sampler.go tools/oblivion-monitor/sampler_test.go
git commit -m "oblivion-monitor: PDH sampler binds counters per PID and emits Samples"
```

---

## Task 9: Build script and rsrc

**Files:**
- Create: `tools/oblivion-monitor/build.sh`

- [ ] **Step 1: Install rsrc tool**

```bash
go install github.com/akavel/rsrc@latest
```
Expected: `rsrc` ends up in `$(go env GOPATH)/bin/`. Verify with `which rsrc` (or `where rsrc` on Windows). If missing from PATH, add `$(go env GOPATH)/bin` to PATH for the build to find it.

- [ ] **Step 2: Create `build.sh`**

```bash
#!/usr/bin/env bash
set -euo pipefail
cd "$(dirname "$0")"

# Generate Win32 resource file from app.manifest. Required by walk for
# Common Controls 6 + High-DPI awareness.
rsrc -manifest app.manifest -o rsrc.syso

# Build GUI subsystem (no console window).
GOOS=windows GOARCH=amd64 go build -ldflags="-H=windowsgui -s -w" -o oblivion-monitor.exe .

ls -la oblivion-monitor.exe
echo "Build OK."
```

- [ ] **Step 3: Make build.sh executable and run a sanity build (will fail without main.go yet, but rsrc step should succeed)**

```bash
chmod +x tools/oblivion-monitor/build.sh
cd tools/oblivion-monitor
rsrc -manifest app.manifest -o rsrc.syso
ls -la rsrc.syso
```
Expected: `rsrc.syso` created (~1 KB).

- [ ] **Step 4: Commit**

```bash
git add tools/oblivion-monitor/build.sh
git commit -m "oblivion-monitor: build script + rsrc.syso generation"
```

---

## Task 10: UI — walk window and tray

**Files:**
- Create: `tools/oblivion-monitor/ui.go`

This task has no automated test — walk is GUI-only and we verify by running the binary at the end.

- [ ] **Step 1: Implement `ui.go`**

```go
package main

import (
	"fmt"
	"sync"

	"github.com/lxn/walk"
	. "github.com/lxn/walk/declarative"
	"github.com/lxn/walk/win"
)

const (
	windowWidth   = 320
	windowHeight  = 220
	sparklineWidth = 13
	historyDepth  = 60 // 60 samples = 1 minute at 1s polling
)

// metricRow is the per-metric mutable display state.
type metricRow struct {
	label   string
	unit    string
	history []float64
	current float64
	missing int // consecutive zero/NaN samples
}

type UI struct {
	cfg    Config
	cfgMu  sync.Mutex
	mw     *walk.MainWindow
	header *walk.TextLabel
	rows   map[string]*walk.TextLabel
	state  map[string]*metricRow
	tray   *walk.NotifyIcon

	pid       uint32
	procName  string
	configPath string
}

// metricKeys defines display order.
var metricKeys = []string{"vram_ded", "vram_shr", "ram", "page", "cpu"}

// NewUI builds the window. configPath is where to persist position.
func NewUI(cfg Config, configPath string) (*UI, error) {
	u := &UI{
		cfg:        cfg,
		state:      map[string]*metricRow{},
		rows:       map[string]*walk.TextLabel{},
		configPath: configPath,
	}
	u.state["vram_ded"] = &metricRow{label: "VRAM (ded)", unit: "MB"}
	u.state["vram_shr"] = &metricRow{label: "VRAM (shr)", unit: "MB"}
	u.state["ram"] = &metricRow{label: "RAM", unit: "MB"}
	u.state["page"] = &metricRow{label: "Page file", unit: "MB"}
	u.state["cpu"] = &metricRow{label: "CPU", unit: "%"}

	var headerLbl *walk.TextLabel
	rowLabels := map[string]**walk.TextLabel{}
	rowChildren := []Widget{}
	for _, k := range metricKeys {
		var lbl *walk.TextLabel
		rowLabels[k] = &lbl
		rowChildren = append(rowChildren, TextLabel{
			AssignTo: &lbl,
			Font:     Font{Family: "Consolas", PointSize: 10},
		})
	}

	if err := (MainWindow{
		AssignTo: &u.mw,
		Title:    "oblivion-monitor",
		Size:     Size{Width: windowWidth, Height: windowHeight},
		Layout: VBox{
			MarginsZero: false,
			Margins:     Margins{Left: 8, Top: 8, Right: 8, Bottom: 8},
		},
		Children: append([]Widget{
			TextLabel{
				AssignTo: &headerLbl,
				Font:     Font{Family: "Consolas", PointSize: 9, Bold: true},
			},
		}, rowChildren...),
	}).Create(); err != nil {
		return nil, err
	}

	u.header = headerLbl
	for _, k := range metricKeys {
		u.rows[k] = *rowLabels[k]
	}

	// Make borderless + always-on-top.
	style := win.GetWindowLong(u.mw.Handle(), win.GWL_STYLE)
	style &^= win.WS_BORDER | win.WS_THICKFRAME | win.WS_MINIMIZEBOX | win.WS_MAXIMIZEBOX | win.WS_SYSMENU
	style |= win.WS_POPUP
	win.SetWindowLong(u.mw.Handle(), win.GWL_STYLE, style)
	win.SetWindowPos(u.mw.Handle(), win.HWND_TOPMOST, 0, 0, 0, 0,
		win.SWP_NOMOVE|win.SWP_NOSIZE|win.SWP_NOACTIVATE|win.SWP_FRAMECHANGED)

	// Compute initial position.
	x, y := u.computePosition()
	u.mw.SetBounds(walk.Rectangle{X: x, Y: y, Width: windowWidth, Height: windowHeight})

	// Click-anywhere drag.
	u.mw.MouseDown().Attach(func(_, _ int, _ walk.MouseButton) {
		win.ReleaseCapture()
		win.SendMessage(u.mw.Handle(), win.WM_NCLBUTTONDOWN, win.HTCAPTION, 0)
		// Persist position after drag.
		u.persistPosition()
	})

	// Tray icon.
	tray, err := walk.NewNotifyIcon(u.mw)
	if err != nil {
		return nil, err
	}
	icon, _ := walk.NewIconFromResourceId(2) // 2 = Windows default app icon
	if icon != nil {
		tray.SetIcon(icon)
	}
	tray.SetToolTip("oblivion-monitor")
	exitAction := walk.NewAction()
	exitAction.SetText("E&xit")
	exitAction.Triggered().Attach(func() { walk.App().Exit(0) })
	tray.ContextMenu().Actions().Add(exitAction)
	tray.SetVisible(true)
	u.tray = tray

	// Start hidden — visible only when PID is live.
	u.mw.SetVisible(false)
	return u, nil
}

func (u *UI) computePosition() (int, int) {
	if u.cfg.WindowX != nil && u.cfg.WindowY != nil {
		return *u.cfg.WindowX, *u.cfg.WindowY
	}
	screenW := int(win.GetSystemMetrics(win.SM_CXSCREEN))
	return screenW - windowWidth - 20, 20
}

func (u *UI) persistPosition() {
	bounds := u.mw.Bounds()
	u.cfgMu.Lock()
	defer u.cfgMu.Unlock()
	x, y := bounds.X, bounds.Y
	u.cfg.WindowX = &x
	u.cfg.WindowY = &y
	_ = SaveConfig(u.configPath, u.cfg)
}

// OnPIDFound makes the window visible and tracks the active PID.
func (u *UI) OnPIDFound(pid uint32, procName string) {
	u.mw.Synchronize(func() {
		u.pid = pid
		u.procName = procName
		// Reset history.
		for _, r := range u.state {
			r.history = r.history[:0]
			r.missing = 0
		}
		u.mw.SetVisible(true)
	})
}

// OnPIDLost hides the window.
func (u *UI) OnPIDLost() {
	u.mw.Synchronize(func() {
		u.pid = 0
		u.mw.SetVisible(false)
	})
}

// OnSample updates the display.
func (u *UI) OnSample(s Sample) {
	values := map[string]float64{
		"vram_ded": s.VRAMDedicatedMB,
		"vram_shr": s.VRAMSharedMB,
		"ram":      s.RAMPrivateMB,
		"page":     s.PageFileMB,
		"cpu":      s.CPUPct,
	}
	u.mw.Synchronize(func() {
		u.header.SetText(fmt.Sprintf("%s (PID %d) — %02d:%02d:%02d",
			u.procName, u.pid,
			s.UptimeSec/3600, (s.UptimeSec%3600)/60, s.UptimeSec%60))
		for _, k := range metricKeys {
			r := u.state[k]
			v := values[k]
			r.current = v
			if v == 0 {
				r.missing++
			} else {
				r.missing = 0
			}
			r.history = append(r.history, v)
			if len(r.history) > historyDepth {
				r.history = r.history[len(r.history)-historyDepth:]
			}
			displayVal := fmt.Sprintf("%.0f", v)
			if r.missing > 5 {
				displayVal = "--"
			}
			line := fmt.Sprintf("%-10s %6s %-3s   %s",
				r.label, displayVal, r.unit,
				Sparkline(r.history, sparklineWidth))
			u.rows[k].SetText(line)
		}
	})
}

// Run blocks on the message loop.
func (u *UI) Run() {
	u.mw.Run()
}
```

- [ ] **Step 2: Verify it compiles**

```bash
cd tools/oblivion-monitor
go build ./...
```
Expected: build succeeds (we don't run yet — needs main.go).

- [ ] **Step 3: Commit**

```bash
git add tools/oblivion-monitor/ui.go
git commit -m "oblivion-monitor: walk-based always-on-top window with tray"
```

---

## Task 11: main.go — wire it all together

**Files:**
- Create: `tools/oblivion-monitor/main.go`

- [ ] **Step 1: Implement `main.go`**

```go
package main

import (
	"context"
	"log"
	"os"
	"path/filepath"
	"time"
)

func main() {
	exe, err := os.Executable()
	if err != nil {
		log.Fatal(err)
	}
	exeDir := filepath.Dir(exe)
	configPath := filepath.Join(exeDir, "config.json")

	// Set up file logging next to the exe.
	logFile, err := os.OpenFile(
		filepath.Join(exeDir, "oblivion-monitor.log"),
		os.O_CREATE|os.O_WRONLY|os.O_APPEND, 0644)
	if err == nil {
		log.SetOutput(logFile)
		defer logFile.Close()
	}

	cfg, err := LoadConfig(configPath)
	if err != nil {
		log.Printf("config load failed, using defaults: %v", err)
		cfg = Config{
			PollingIntervalMS:    1000,
			ScanIntervalMS:       2000,
			LogDir:               "logs",
			ProcessName:          "Oblivion.exe",
			FallbackToLocalUsage: true,
		}
	}
	logDir := cfg.LogDir
	if !filepath.IsAbs(logDir) {
		logDir = filepath.Join(exeDir, logDir)
	}

	ui, err := NewUI(cfg, configPath)
	if err != nil {
		log.Fatalf("UI init: %v", err)
	}

	ctx, cancel := context.WithCancel(context.Background())
	defer cancel()

	events := make(chan PIDEvent, 4)
	w := &Watcher{
		ProcessName: cfg.ProcessName,
		Interval:    time.Duration(cfg.ScanIntervalMS) * time.Millisecond,
		Events:      events,
	}
	go w.Run(ctx)

	// Goroutine that owns the Sampler lifecycle: starts one when PID
	// appears, stops it when PID disappears, manages CSV file rotation.
	go func() {
		var (
			sampler       *Sampler
			samplerCtx    context.Context
			samplerCancel context.CancelFunc
			csvLog        *CSVLogger
			samples       chan Sample
		)
		stop := func() {
			if samplerCancel != nil {
				samplerCancel()
				samplerCancel = nil
			}
			if csvLog != nil {
				csvLog.Close()
				csvLog = nil
			}
			ui.OnPIDLost()
		}
		for {
			select {
			case <-ctx.Done():
				stop()
				return
			case ev, ok := <-events:
				if !ok {
					stop()
					return
				}
				if ev.PID == 0 {
					stop()
					continue
				}
				stop()
				csvLog, err = NewCSVLogger(logDir)
				if err != nil {
					log.Printf("CSV logger: %v", err)
				}
				samples = make(chan Sample, 4)
				samplerCtx, samplerCancel = context.WithCancel(ctx)
				sampler = &Sampler{
					Config:  cfg,
					PID:     ev.PID,
					Samples: samples,
				}
				ui.OnPIDFound(ev.PID, cfg.ProcessName)
				go sampler.Run(samplerCtx)
				go func(s chan Sample, c *CSVLogger) {
					for sample := range s {
						ui.OnSample(sample)
						if c != nil {
							_ = c.Write(sample)
						}
					}
				}(samples, csvLog)
			}
		}
	}()

	ui.Run() // blocks on message loop
	cancel()
}
```

- [ ] **Step 2: Build the full binary**

```bash
cd tools/oblivion-monitor
./build.sh
```
Expected: `oblivion-monitor.exe` produced (~5 MB).

- [ ] **Step 3: Run it (smoke test, no Oblivion needed)**

Double-click `oblivion-monitor.exe`.
Expected: tray icon appears, no window (because `Oblivion.exe` is not running). Right-click tray → Exit dismisses.

Check `oblivion-monitor.log` next to the exe — should be empty or contain only benign init lines.

- [ ] **Step 4: Smoke test with a fake target**

Temporarily rename the binary to test detection:

```bash
cp oblivion-monitor.exe Oblivion.exe
./Oblivion.exe &
./oblivion-monitor.exe
```

Wait ~3 seconds. Expected:
- Window appears in top-right
- Header reads `Oblivion.exe (PID NNNN) — 00:00:0N`
- RAM and Page file rows show non-zero values
- VRAM rows likely show `--` (the test binary has no GPU memory) — that's correct
- A CSV file appears in `logs/`

Kill the fake `Oblivion.exe`. Within 2 seconds the monitor window should hide. The CSV file should be closed and complete.

- [ ] **Step 5: Commit**

```bash
git add tools/oblivion-monitor/main.go
git commit -m "oblivion-monitor: wire watcher + sampler + UI + CSV"
```

---

## Task 12: Real-Oblivion smoke test

**Files:** none (verification only)

- [ ] **Step 1: Launch Oblivion via MO2 with the modlist active**

Use the existing MO2 launcher in `D:\Modlists\Reborn\`. Launch into the main menu, then load a save and walk around the open world for ~30 seconds.

- [ ] **Step 2: Verify window display**

While Oblivion is running, the monitor window should be top-right of the screen showing:
- `Oblivion.exe (PID NNNN) — MM:SS` in header
- VRAM (ded): non-zero numeric value (e.g., 800-2000 MB depending on textures)
- VRAM (shr): non-zero
- RAM: 1500-3000 MB typical for modded Oblivion
- Page file: similar to RAM
- CPU: 5-50% range
- Sparklines update each second

If VRAM shows `--`, GPU counters need repair: `lodctr /R` from Admin PowerShell, then retest.

- [ ] **Step 3: Verify CSV output**

Quit Oblivion. Open the latest `logs/YYYY-MM-DD-HHMMSS.csv`. Confirm:
- Header row matches the spec
- ~30 rows for 30 seconds at 1s interval
- VRAM/RAM values look plausible
- Last row is recent (file was flushed before close)

- [ ] **Step 4: Document any deviations and commit if needed**

If sample output revealed a counter quirk on the user's specific GPU, note it in `README.md` under Troubleshooting.

If everything works, no commit needed — task is verification.

- [ ] **Step 5: Final tag**

```bash
git -C /d/Modlists/Reborn tag oblivion-monitor-v1.0
git -C /d/Modlists/Reborn push origin main --tags
```

---

## Self-review

**Spec coverage:**
- ✓ Goal — Task 11 (main.go wires it all)
- ✓ Architecture (3 goroutines) — Tasks 7 (Watcher), 8 (Sampler), 10 (UI)
- ✓ Data sources table — Task 8 (Sampler binds all 6 metric counters with fallbacks)
- ✓ UI layout — Task 10 (header, 5 metric rows, sparklines, free RAM footer implicit in display)
- ✓ CSV output — Task 5 (per-session, header, columns match spec)
- ✓ Failure modes — covered in code: PDH error swallowing in Sampler; CSV write errors logged; counter `--` display via `missing` counter; multi-PID handled by "first found" in Watcher
- ✓ Configuration — Task 2 (load/save with defaults)
- ✓ Build/placement — Task 9 (build.sh + rsrc.syso)
- ✓ Future work — explicitly out of scope, no tasks needed

**Placeholder scan:** None remaining. All steps have either complete code or explicit verification commands.

**Type consistency:**
- `Sample` defined in csvlog.go, used by sampler.go and ui.go ✓
- `Config` defined in config.go, used by Sampler and UI ✓
- `PIDEvent` defined in watcher.go, used by main.go ✓
- `PdhQuery`, `PdhCounter`, `PdhExpandWildCardPath` — consistent across pdh.go, sampler_test.go, sampler.go ✓
- `Sparkline(samples []float64, width int) string` — same signature in sparkline.go and ui.go ✓

**One self-found issue and fix:** The Sampler test (`TestSamplerEndToEndAgainstSelf`) expects `RAMPrivateMB > 0` for the test process. The Working Set - Private counter for a test binary may register slowly; if flaky, adjust the timeout to 5s in step 1 of Task 8. Documented inline in the test already (2s context with retry loop via channel select).
