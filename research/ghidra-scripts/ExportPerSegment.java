// Export the program to one C file per 0x10000-byte address segment.
// Args: <output-dir> [<per-fn-timeout-secs>]
//   Each segment file is named seg_<hex8>.c (e.g. seg_00430000.c).
//   A seg_index.tsv at the dir root maps function-name -> file:line.
//
// Per-segment use of CppExporter: each export() call gets an AddressSetView
// restricted to that segment, so the resulting file contains only functions
// whose entry point falls in that range. The companion .h is suppressed
// (caller already has the global Oblivion-decompiled.h from ExportFullC).

import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompileOptions;
import ghidra.app.util.exporter.CppExporter;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressSet;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionManager;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.mem.MemoryBlock;

import java.io.File;
import java.io.PrintWriter;
import java.util.HashMap;
import java.util.Map;
import java.util.TreeSet;

public class ExportPerSegment extends GhidraScript {
    private static final long SEGMENT_SIZE = 0x10000L;

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 1) {
            println("Usage: ExportPerSegment <output-dir> [<per-fn-timeout-secs>]");
            return;
        }
        File outDir = new File(args[0]);
        if (!outDir.exists()) outDir.mkdirs();

        int timeoutSecs = 180;
        if (args.length >= 2) timeoutSecs = Integer.parseInt(args[1]);

        // 1. Collect every segment that actually contains a function.
        FunctionManager fm = currentProgram.getFunctionManager();
        TreeSet<Long> segments = new TreeSet<>();
        Map<Long, Integer> fnCountPerSeg = new HashMap<>();
        FunctionIterator fit = fm.getFunctions(true);
        int totalFns = 0;
        while (fit.hasNext()) {
            Function f = fit.next();
            long ep = f.getEntryPoint().getOffset();
            long seg = ep & ~(SEGMENT_SIZE - 1);
            segments.add(seg);
            fnCountPerSeg.merge(seg, 1, Integer::sum);
            totalFns++;
        }
        println("Total functions: " + totalFns + "  spread across "
                + segments.size() + " segments of 0x" + Long.toHexString(SEGMENT_SIZE));

        DecompileOptions opts = new DecompileOptions();
        opts.setDefaultTimeout(timeoutSecs);

        long t0 = System.currentTimeMillis();

        // 2. Per-segment export.
        try (PrintWriter index = new PrintWriter(new File(outDir, "seg_index.tsv"))) {
            index.println("segment\tfunction_count\tfile\tbytes");
            for (Long seg : segments) {
                if (monitor.isCancelled()) break;
                String hex = String.format("%08x", seg);
                Address start = currentProgram.getAddressFactory()
                        .getDefaultAddressSpace().getAddress(seg);
                Address end = start.add(SEGMENT_SIZE - 1);
                AddressSet range = new AddressSet(start, end);

                File segFile = new File(outDir, "seg_" + hex + ".c");

                // createHeader=false, createC=true, cppComments=false, types=false (already in global .h),
                // emitGlobals=false (also in global .h), no tag filter
                CppExporter exporter = new CppExporter(opts, false, true, false, false, false, null);
                boolean ok = exporter.export(segFile, currentProgram, range, monitor);
                long sz = segFile.exists() ? segFile.length() : 0;
                int n = fnCountPerSeg.getOrDefault(seg, 0);
                println(String.format("seg_%s  fns=%4d  %s  %d bytes  ok=%s",
                        hex, n, segFile.getName(), sz, ok));
                index.println("0x" + hex + "\t" + n + "\t" + segFile.getName() + "\t" + sz);
            }
        }

        long secs = (System.currentTimeMillis() - t0) / 1000;
        println("Per-segment export complete  elapsed=" + secs + "s  out=" + outDir.getAbsolutePath());
    }
}
