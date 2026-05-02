using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using static UsvfsLauncher.UsvfsNative;

namespace UsvfsLauncher;

internal static class Program
{
    static int Main(string[] args)
    {
        if (args.Length < 4)
        {
            Console.Error.WriteLine(
                "Usage:\n" +
                "  UsvfsLauncher.exe <modlist-root> <profile> <usvfs-install> <child-exe> [child-args...]\n\n" +
                "Args:\n" +
                "  <modlist-root>   e.g. D:\\Modlists\\Reborn\n" +
                "  <profile>        e.g. Reborn-Base\n" +
                "  <usvfs-install>  dir containing usvfs_x64.dll + usvfs_proxy_*.exe (typically <modlist-root>)\n" +
                "  <child-exe>      target exe to launch under USVFS\n" +
                "  [child-args...]  forwarded verbatim to child\n");
            return 2;
        }

        var modlistRoot = Path.GetFullPath(args[0]);
        var profile = args[1];
        var usvfsInstall = Path.GetFullPath(args[2]);
        var childExe = Path.GetFullPath(args[3]);
        var childArgs = args.Skip(4).ToArray();

        var modlistTxt = Path.Combine(modlistRoot, "profiles", profile, "modlist.txt");
        var modsDir = Path.Combine(modlistRoot, "mods");
        var overwriteDir = Path.Combine(modlistRoot, "overwrite");
        var stockData = Path.Combine(modlistRoot, "Stock Game", "Data");

        if (!File.Exists(modlistTxt)) { Console.Error.WriteLine($"modlist.txt missing: {modlistTxt}"); return 2; }
        if (!Directory.Exists(modsDir)) { Console.Error.WriteLine($"mods/ missing: {modsDir}"); return 2; }
        if (!Directory.Exists(stockData)) { Console.Error.WriteLine($"Stock Game/Data missing: {stockData}"); return 2; }
        if (!File.Exists(childExe)) { Console.Error.WriteLine($"child exe missing: {childExe}"); return 2; }

        // Locate usvfs_x64.dll & proxies. Tell the loader where to look BEFORE the first P/Invoke.
        if (!SetDllDirectoryW(usvfsInstall))
        {
            Console.Error.WriteLine($"SetDllDirectoryW failed for: {usvfsInstall}");
            return 2;
        }
        var dllPath = Path.Combine(usvfsInstall, "usvfs_x64.dll");
        if (!File.Exists(dllPath)) { Console.Error.WriteLine($"usvfs_x64.dll not found at: {dllPath}"); return 2; }

        // First P/Invoke loads the DLL.
        try
        {
            var version = Marshal.PtrToStringAnsi(usvfsVersionString());
            Console.WriteLine($"usvfs version: {version}");
        }
        catch (Exception ex)
        {
            Console.Error.WriteLine($"Failed to load usvfs_x64.dll: {ex.Message}");
            return 1;
        }

        // 1. Build priority-ordered list of source layers.
        //    File order: top = highest priority. Stock Game/Data is the vanilla baseline (lowest).
        //    Overwrite is highest of all (above mods).
        var enabled = ParseModlistEnabled(modlistTxt);
        var priorityHighFirst = new List<string>();
        if (Directory.Exists(overwriteDir)) priorityHighFirst.Add(overwriteDir);
        foreach (var modName in enabled)
        {
            var path = Path.Combine(modsDir, modName);
            if (Directory.Exists(path))
            {
                priorityHighFirst.Add(path);
            }
            else
            {
                Console.WriteLine($"  (warn) modlist enables '{modName}' but mods/{modName}/ does not exist");
            }
        }
        // Stock Game/Data is the destination (real) — not added as a layer.

        Console.WriteLine($"Profile:           {profile}");
        Console.WriteLine($"Layers (top=hi):   {priorityHighFirst.Count} (mods + overwrite, on top of Stock Game/Data)");
        Console.WriteLine($"Destination:       {stockData}");
        Console.WriteLine($"Child exe:         {childExe}");
        if (childArgs.Length > 0) Console.WriteLine($"Child args:        {string.Join(" ", childArgs)}");
        Console.WriteLine();

        // 2. Initialize USVFS.
        var instanceName = "usvfs-launcher-" + Process.GetCurrentProcess().Id;
        var p = usvfsCreateParameters();
        if (p == IntPtr.Zero) { Console.Error.WriteLine("usvfsCreateParameters returned null"); return 1; }

        try
        {
            usvfsSetInstanceName(p, instanceName);
            usvfsSetDebugMode(p, false);
            usvfsSetLogLevel(p, LogLevel.Warning);
            usvfsSetCrashDumpType(p, CrashDumpsType.None);
            usvfsSetCrashDumpPath(p, "");
            usvfsSetProcessDelay(p, 0);

            usvfsInitLogging(false);

            if (!usvfsCreateVFS(p))
            {
                Console.Error.WriteLine("usvfsCreateVFS failed");
                return 1;
            }
        }
        finally
        {
            usvfsFreeParameters(p);
        }

        try
        {
            usvfsClearVirtualMappings();

            // 3. Register mappings.
            //    USVFS resolves duplicate destinations with last-call-wins. Iterate from
            //    LOWEST priority to HIGHEST priority so the highest priority's calls happen LAST
            //    and win on collisions.
            var sw = Stopwatch.StartNew();
            int linked = 0;
            for (int i = priorityHighFirst.Count - 1; i >= 0; i--)
            {
                var src = priorityHighFirst[i];
                if (!usvfsVirtualLinkDirectoryStatic(src, stockData, (uint)LinkFlags.Recursive))
                {
                    Console.Error.WriteLine($"  (warn) usvfsVirtualLinkDirectoryStatic failed for: {src}");
                    continue;
                }
                linked++;
            }
            sw.Stop();
            Console.WriteLine($"Linked {linked}/{priorityHighFirst.Count} layers in {sw.ElapsedMilliseconds} ms");

            // 4. Spawn the child process under USVFS hooks.
            var commandLine = BuildCommandLine(childExe, childArgs);
            var si = new STARTUPINFOW { cb = (uint)Marshal.SizeOf<STARTUPINFOW>() };
            var workingDir = Path.GetDirectoryName(childExe) ?? modlistRoot;

            Console.WriteLine($"\nSpawning hooked: {commandLine}");
            Console.WriteLine($"  cwd: {workingDir}\n");

            if (!usvfsCreateProcessHooked(
                null,
                commandLine,
                IntPtr.Zero, IntPtr.Zero, false,
                CREATE_BREAKAWAY_FROM_JOB,
                IntPtr.Zero, workingDir,
                ref si, out var pi))
            {
                int err = Marshal.GetLastWin32Error();
                Console.Error.WriteLine($"usvfsCreateProcessHooked failed: Win32 error {err}");
                return 1;
            }

            // 5. Wait for the child to exit.
            var waitSw = Stopwatch.StartNew();
            uint waitResult = WaitForSingleObject(pi.hProcess, INFINITE);
            waitSw.Stop();

            uint exitCode = 0;
            GetExitCodeProcess(pi.hProcess, out exitCode);
            CloseHandle(pi.hThread);
            CloseHandle(pi.hProcess);

            Console.WriteLine($"\nChild exited (code {exitCode}, wall {waitSw.ElapsedMilliseconds} ms)");
            return (int)exitCode;
        }
        finally
        {
            usvfsDisconnectVFS();
        }
    }

    private static List<string> ParseModlistEnabled(string path)
    {
        var enabled = new List<string>();
        foreach (var raw in File.ReadAllLines(path))
        {
            var line = raw.TrimEnd('\r');
            if (line.Length == 0) continue;
            if (line[0] != '+') continue;        // '-' = separator/disabled, '*' = vanilla DLC, '#' = comment
            var name = line.Substring(1);
            if (name.EndsWith("_separator", StringComparison.OrdinalIgnoreCase)) continue;
            enabled.Add(name);
        }
        return enabled;
    }

    private static string BuildCommandLine(string exe, string[] args)
    {
        var sb = new StringBuilder();
        sb.Append('"').Append(exe).Append('"');
        foreach (var a in args)
        {
            sb.Append(' ');
            // Quote args containing spaces; preserve embedded quotes.
            if (a.Contains(' ') || a.Contains('\t'))
            {
                sb.Append('"').Append(a.Replace("\"", "\\\"")).Append('"');
            }
            else
            {
                sb.Append(a);
            }
        }
        return sb.ToString();
    }
}
