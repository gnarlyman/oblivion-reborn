using System;
using System.Runtime.InteropServices;

namespace UsvfsLauncher;

internal static class UsvfsNative
{
    private const string Dll = "usvfs_x64.dll";

    public enum LogLevel : byte { Debug, Info, Warning, Error }
    public enum CrashDumpsType : byte { None, Mini, Data, Full }

    [Flags]
    public enum LinkFlags : uint
    {
        None = 0,
        FailIfExists = 0x1,
        MonitorChanges = 0x2,
        CreateTarget = 0x4,
        Recursive = 0x8,
        FailIfSkipped = 0x10,
    }

    [DllImport(Dll, CallingConvention = CallingConvention.StdCall)]
    public static extern IntPtr usvfsCreateParameters();

    [DllImport(Dll, CallingConvention = CallingConvention.StdCall)]
    public static extern void usvfsFreeParameters(IntPtr p);

    [DllImport(Dll, CallingConvention = CallingConvention.StdCall, CharSet = CharSet.Ansi)]
    public static extern void usvfsSetInstanceName(IntPtr p, string name);

    [DllImport(Dll, CallingConvention = CallingConvention.StdCall)]
    public static extern void usvfsSetDebugMode(IntPtr p, [MarshalAs(UnmanagedType.Bool)] bool debug);

    [DllImport(Dll, CallingConvention = CallingConvention.StdCall)]
    public static extern void usvfsSetLogLevel(IntPtr p, LogLevel level);

    [DllImport(Dll, CallingConvention = CallingConvention.StdCall)]
    public static extern void usvfsSetCrashDumpType(IntPtr p, CrashDumpsType t);

    [DllImport(Dll, CallingConvention = CallingConvention.StdCall, CharSet = CharSet.Ansi)]
    public static extern void usvfsSetCrashDumpPath(IntPtr p, string path);

    [DllImport(Dll, CallingConvention = CallingConvention.StdCall)]
    public static extern void usvfsSetProcessDelay(IntPtr p, int milliseconds);

    [DllImport(Dll, CallingConvention = CallingConvention.StdCall)]
    public static extern void usvfsInitLogging([MarshalAs(UnmanagedType.Bool)] bool toLocal);

    [DllImport(Dll, CallingConvention = CallingConvention.StdCall)]
    [return: MarshalAs(UnmanagedType.Bool)]
    public static extern bool usvfsCreateVFS(IntPtr p);

    [DllImport(Dll, CallingConvention = CallingConvention.StdCall)]
    public static extern void usvfsDisconnectVFS();

    [DllImport(Dll, CallingConvention = CallingConvention.StdCall)]
    public static extern void usvfsClearVirtualMappings();

    [DllImport(Dll, CallingConvention = CallingConvention.StdCall, CharSet = CharSet.Unicode)]
    [return: MarshalAs(UnmanagedType.Bool)]
    public static extern bool usvfsVirtualLinkDirectoryStatic(string source, string destination, uint flags);

    [DllImport(Dll, CallingConvention = CallingConvention.StdCall, CharSet = CharSet.Unicode)]
    [return: MarshalAs(UnmanagedType.Bool)]
    public static extern bool usvfsVirtualLinkFile(string source, string destination, uint flags);

    [StructLayout(LayoutKind.Sequential)]
    public struct STARTUPINFOW
    {
        public uint cb;
        public IntPtr lpReserved;
        public IntPtr lpDesktop;
        public IntPtr lpTitle;
        public uint dwX, dwY, dwXSize, dwYSize, dwXCountChars, dwYCountChars, dwFillAttribute, dwFlags;
        public ushort wShowWindow, cbReserved2;
        public IntPtr lpReserved2;
        public IntPtr hStdInput, hStdOutput, hStdError;
    }

    [StructLayout(LayoutKind.Sequential)]
    public struct PROCESS_INFORMATION
    {
        public IntPtr hProcess;
        public IntPtr hThread;
        public uint dwProcessId;
        public uint dwThreadId;
    }

    [DllImport(Dll, CallingConvention = CallingConvention.StdCall, CharSet = CharSet.Unicode)]
    [return: MarshalAs(UnmanagedType.Bool)]
    public static extern bool usvfsCreateProcessHooked(
        string lpApplicationName,
        [MarshalAs(UnmanagedType.LPWStr)] string lpCommandLine,
        IntPtr lpProcessAttributes,
        IntPtr lpThreadAttributes,
        [MarshalAs(UnmanagedType.Bool)] bool bInheritHandles,
        uint dwCreationFlags,
        IntPtr lpEnvironment,
        string lpCurrentDirectory,
        ref STARTUPINFOW lpStartupInfo,
        out PROCESS_INFORMATION lpProcessInformation);

    [DllImport(Dll, CallingConvention = CallingConvention.StdCall, CharSet = CharSet.Ansi)]
    [return: MarshalAs(UnmanagedType.Bool)]
    public static extern bool usvfsCreateVFSDump([Out] byte[] buffer, ref UIntPtr size);

    [DllImport(Dll, CallingConvention = CallingConvention.StdCall, CharSet = CharSet.Ansi)]
    public static extern IntPtr usvfsVersionString();

    // SetDllDirectory for finding usvfs_x64.dll alongside Reborn's MO2 install.
    [DllImport("kernel32.dll", CharSet = CharSet.Unicode, SetLastError = true)]
    [return: MarshalAs(UnmanagedType.Bool)]
    public static extern bool SetDllDirectoryW(string lpPathName);

    public const uint CREATE_BREAKAWAY_FROM_JOB = 0x01000000;
    public const uint INFINITE = 0xFFFFFFFF;
    public const uint WAIT_OBJECT_0 = 0;

    [DllImport("kernel32.dll", SetLastError = true)]
    public static extern uint WaitForSingleObject(IntPtr hHandle, uint dwMilliseconds);

    [DllImport("kernel32.dll", SetLastError = true)]
    [return: MarshalAs(UnmanagedType.Bool)]
    public static extern bool GetExitCodeProcess(IntPtr hProcess, out uint lpExitCode);

    [DllImport("kernel32.dll", SetLastError = true)]
    [return: MarshalAs(UnmanagedType.Bool)]
    public static extern bool CloseHandle(IntPtr hObject);
}
