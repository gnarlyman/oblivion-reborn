using System;
using System.IO;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading;
using static UsvfsLauncher.UsvfsNative;

namespace UsvfsLauncher;

internal sealed class ReplServerOptions
{
    public required string ChildExe;
    public required string[] ChildArgs;
    public required string WorkingDir;

    /// <summary>If non-null, single-shot mode: read this Pascal source, send, wait for END_RESULT, exit.
    /// If null, persistent mode: forward agent stdin to xEdit until EOF.</summary>
    public string? ExecScript;
}

/// <summary>
/// REPL wrapper that owns the pipe pair to xEdit. Runs the framing protocol on
/// its own stdin/stdout (which the agent has connected via subprocess pipes).
/// </summary>
internal static class ReplServer
{
    public static int Run(ReplServerOptions opts)
    {
        // Output dir for the REPL's disk-first helpers (OpenOutput / EmitJSONLine).
        // The xEdit fork reads XEDIT_REPL_OUTPUT_DIR via GetEnvironmentVariable;
        // since usvfsCreateProcessHooked inherits the launcher's env (we pass
        // lpEnvironment=NULL), setting it here propagates to the child. We
        // honor an externally-set value (so the agent can pick a stable path)
        // and fall back to a per-process subdirectory under TEMP otherwise.
        var existingOutputDir = Environment.GetEnvironmentVariable("XEDIT_REPL_OUTPUT_DIR");
        string replOutputDir;
        if (string.IsNullOrEmpty(existingOutputDir))
        {
            replOutputDir = Path.Combine(Path.GetTempPath(), $"xedit-repl-{Environment.ProcessId}");
            Environment.SetEnvironmentVariable("XEDIT_REPL_OUTPUT_DIR", replOutputDir);
            Directory.CreateDirectory(replOutputDir);
            Console.Error.WriteLine($"[repl] output dir (default): {replOutputDir}");
        }
        else
        {
            replOutputDir = existingOutputDir;
            Directory.CreateDirectory(replOutputDir);
            Console.Error.WriteLine($"[repl] output dir (env): {replOutputDir}");
        }

        // Pipes must be inheritable when created so the child can pick them up.
        var sa = new SECURITY_ATTRIBUTES
        {
            nLength = (uint)Marshal.SizeOf<SECURITY_ATTRIBUTES>(),
            bInheritHandle = true,
            lpSecurityDescriptor = IntPtr.Zero,
        };

        // stdin pipe: parent writes, child reads.
        if (!CreatePipe(out var childStdinRead, out var parentStdinWrite, ref sa, 0))
        {
            Console.Error.WriteLine($"[repl] CreatePipe(stdin) failed: Win32 {Marshal.GetLastWin32Error()}");
            return 1;
        }
        // Parent's write end must NOT be inheritable — only the child read end is.
        if (!SetHandleInformation(parentStdinWrite, HANDLE_FLAG_INHERIT, 0))
        {
            Console.Error.WriteLine($"[repl] SetHandleInformation(parentStdinWrite) failed: Win32 {Marshal.GetLastWin32Error()}");
            return 1;
        }

        // stdout pipe: child writes, parent reads.
        if (!CreatePipe(out var parentStdoutRead, out var childStdoutWrite, ref sa, 0))
        {
            Console.Error.WriteLine($"[repl] CreatePipe(stdout) failed: Win32 {Marshal.GetLastWin32Error()}");
            return 1;
        }
        if (!SetHandleInformation(parentStdoutRead, HANDLE_FLAG_INHERIT, 0))
        {
            Console.Error.WriteLine($"[repl] SetHandleInformation(parentStdoutRead) failed: Win32 {Marshal.GetLastWin32Error()}");
            return 1;
        }

        var si = new STARTUPINFOW
        {
            cb = (uint)Marshal.SizeOf<STARTUPINFOW>(),
            dwFlags = STARTF_USESTDHANDLES,
            hStdInput = childStdinRead,
            hStdOutput = childStdoutWrite,
            hStdError = childStdoutWrite,  // merge stderr into stdout to keep framing simple
        };

        var commandLine = BuildCommandLine(opts.ChildExe, opts.ChildArgs);
        Console.Error.WriteLine($"[repl] spawning xEdit with stdio pipes: {commandLine}");

        if (!usvfsCreateProcessHooked(
                null, commandLine,
                IntPtr.Zero, IntPtr.Zero, true,    // bInheritHandles=TRUE so STARTF_USESTDHANDLES handles propagate
                CREATE_BREAKAWAY_FROM_JOB,
                IntPtr.Zero, opts.WorkingDir,
                ref si, out var pi))
        {
            int err = Marshal.GetLastWin32Error();
            Console.Error.WriteLine($"[repl] usvfsCreateProcessHooked failed: Win32 {err}");
            return 1;
        }

        // Close child-end handles in parent — parent only needs its own ends now.
        CloseHandle(childStdinRead);
        CloseHandle(childStdoutWrite);

        var readyEvent     = new ManualResetEventSlim(false);
        var endResultEvent = new ManualResetEventSlim(false);
        var readerStopped  = new ManualResetEventSlim(false);

        var readerThread = new Thread(() =>
        {
            try
            {
                ReadPipeToConsole(parentStdoutRead, readyEvent, endResultEvent);
            }
            finally
            {
                readerStopped.Set();
            }
        });
        readerThread.IsBackground = true;
        readerThread.Start();

        int exitCode = 1;
        try
        {
            // Wait for READY before sending anything. Boot can take ~30s on a
            // big modlist; cap at 5 minutes to surface obvious hangs.
            if (!readyEvent.Wait(TimeSpan.FromMinutes(5)))
            {
                Console.Error.WriteLine("[repl] timeout waiting for ===READY=== from xEdit");
                TerminateProcess(pi.hProcess, 1);
                return 1;
            }

            if (opts.ExecScript != null)
            {
                // Single-shot: send one script, wait for END_RESULT, then close stdin.
                if (!File.Exists(opts.ExecScript))
                {
                    Console.Error.WriteLine($"[repl] script not found: {opts.ExecScript}");
                    TerminateProcess(pi.hProcess, 1);
                    return 2;
                }
                var src = File.ReadAllText(opts.ExecScript);
                var escaped = Markers.EscapeSource(src);
                WritePipeLine(parentStdinWrite, escaped);
                WritePipeLine(parentStdinWrite, Markers.EndSource);

                if (!endResultEvent.Wait(TimeSpan.FromMinutes(10)))
                {
                    Console.Error.WriteLine("[repl] timeout waiting for ===END_RESULT===");
                    TerminateProcess(pi.hProcess, 1);
                    return 1;
                }
            }
            else
            {
                // Persistent: forward agent stdin to xEdit stdin one line at a time.
                // Neutralize stray marker lines in submitted source, but pass END_SOURCE through.
                string? line;
                while ((line = Console.In.ReadLine()) != null)
                {
                    if (line != Markers.EndSource && Markers.IsMarkerLine(line))
                        line = "{ neutralized: " + line + " }";
                    WritePipeLine(parentStdinWrite, line);
                }
            }

            // Close stdin → xEdit's TStdinReader sees EOF → loop breaks → process exits.
            CloseHandle(parentStdinWrite);
            parentStdinWrite = IntPtr.Zero;

            WaitForSingleObject(pi.hProcess, INFINITE);
            GetExitCodeProcess(pi.hProcess, out var exit);
            exitCode = (int)exit;
        }
        finally
        {
            readerStopped.Wait(TimeSpan.FromSeconds(5));
            try { CloseHandle(pi.hThread); } catch { }
            try { CloseHandle(pi.hProcess); } catch { }
            try { CloseHandle(parentStdoutRead); } catch { }
            if (parentStdinWrite != IntPtr.Zero) try { CloseHandle(parentStdinWrite); } catch { }
        }
        return exitCode;
    }

    /// <summary>
    /// Read xEdit's stdout pipe in chunks, split into lines, forward each line to
    /// the launcher's own stdout (which is connected to the agent). Set events when
    /// READY and END_RESULT markers arrive so the main thread can sequence its work.
    /// </summary>
    private static void ReadPipeToConsole(
        IntPtr pipeRead,
        ManualResetEventSlim readyEvent,
        ManualResetEventSlim endResultEvent)
    {
        var leftover = new StringBuilder();
        var buf = new byte[4096];
        while (true)
        {
            if (!ReadFile(pipeRead, buf, (uint)buf.Length, out var nRead, IntPtr.Zero) || nRead == 0)
                return;  // EOF or pipe closed
            leftover.Append(Encoding.UTF8.GetString(buf, 0, (int)nRead));

            // Drain complete lines.
            while (true)
            {
                int nl = -1;
                for (int i = 0; i < leftover.Length; i++)
                {
                    if (leftover[i] == '\n') { nl = i; break; }
                }
                if (nl < 0) break;
                var line = leftover.ToString(0, nl);
                leftover.Remove(0, nl + 1);
                if (line.Length > 0 && line[^1] == '\r')
                    line = line.Substring(0, line.Length - 1);

                Console.Out.WriteLine(line);
                Console.Out.Flush();

                if (!readyEvent.IsSet && (line == Markers.Ready || line.StartsWith(Markers.Ready + " ")))
                    readyEvent.Set();
                if (line == Markers.EndResult)
                    endResultEvent.Set();
            }
        }
    }

    private static void WritePipeLine(IntPtr pipeWrite, string line)
    {
        var bytes = Encoding.UTF8.GetBytes(line + "\n");
        if (!WriteFile(pipeWrite, bytes, (uint)bytes.Length, out var written, IntPtr.Zero))
        {
            Console.Error.WriteLine($"[repl] WriteFile failed: Win32 {Marshal.GetLastWin32Error()}, bytes={bytes.Length}");
        }
        else if (written != bytes.Length)
        {
            Console.Error.WriteLine($"[repl] WriteFile partial: wrote {written}/{bytes.Length} bytes");
        }
        else
        {
            // Truncate preview to keep stderr clean
            var preview = line.Length > 60 ? line.Substring(0, 60) + "..." : line;
            Console.Error.WriteLine($"[repl] wrote {bytes.Length}B: {preview}");
        }
    }

    /// <summary>Same logic as Program.BuildCommandLine; copied to keep ReplServer self-contained.</summary>
    private static string BuildCommandLine(string exe, string[] args)
    {
        var sb = new StringBuilder();
        sb.Append('"').Append(exe).Append('"');
        foreach (var a in args)
        {
            sb.Append(' ');
            if (a.Contains(' ') || a.Contains('\t'))
                sb.Append('"').Append(a.Replace("\"", "\\\"")).Append('"');
            else
                sb.Append(a);
        }
        return sb.ToString();
    }
}
