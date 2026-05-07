// Export the entire program to C/C++ source via Ghidra's CppExporter
// (the same backend the GUI uses for File -> Export Program -> C/C++).
//
// Args: <output-c-file> [<per-fn-timeout-secs>]
//   The companion .h file is emitted next to the .c file.
//   Default per-function decompile timeout: 180s (vs Ghidra default 30s).
//
// Uses parallel decompilation across all available cores.

import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompileOptions;
import ghidra.app.util.exporter.CppExporter;

import java.io.File;

public class ExportFullC extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 1) {
            println("Usage: ExportFullC <output-c-file> [<per-fn-timeout-secs>]");
            return;
        }
        File outFile = new File(args[0]);
        File parent = outFile.getParentFile();
        if (parent != null && !parent.exists()) parent.mkdirs();

        int timeoutSecs = 180;
        if (args.length >= 2) timeoutSecs = Integer.parseInt(args[1]);

        DecompileOptions opts = new DecompileOptions();
        opts.setDefaultTimeout(timeoutSecs);

        // (DecompileOptions, createHeader, createC, useCppComments, emitTypes, emitGlobals, tagFilter)
        CppExporter exporter = new CppExporter(opts, true, true, false, true, true, null);

        long t0 = System.currentTimeMillis();
        println("Exporting whole program to " + outFile.getAbsolutePath()
                + "  (per-fn timeout=" + timeoutSecs + "s)");

        boolean ok = exporter.export(outFile, currentProgram, null, monitor);

        long secs = (System.currentTimeMillis() - t0) / 1000;
        println("CppExporter result: " + ok + "  elapsed=" + secs + "s");
        if (outFile.exists()) {
            println(".c size = " + outFile.length() + " bytes");
        }
        // CppExporter computes header path internally via getHeaderFile(); naming is "<base>.h"
        File hFile = new File(outFile.getAbsolutePath().replaceFirst("\\.c$", ".h"));
        if (hFile.exists()) {
            println(".h size = " + hFile.length() + " bytes  (" + hFile.getName() + ")");
        }
    }
}
