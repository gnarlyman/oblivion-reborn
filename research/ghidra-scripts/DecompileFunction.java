// Decompile the function containing a given address.
// Args: <hex-address> [<output-path>]
//   Address may be with or without 0x prefix. If no output path is given,
//   the C output is written to stdout (and to script log).
//
// Example:
//   analyzeHeadless <projDir> Oblivion -process Oblivion.exe -readOnly \
//       -scriptPath D:\Modlists\Reborn\research\ghidra-scripts \
//       -postScript DecompileFunction.java 5547F0 D:\tmp\sub_5547F0.c

import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileOptions;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;

import java.io.PrintWriter;

public class DecompileFunction extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 1) {
            println("Usage: DecompileFunction <hex-address> [<output-path>]");
            return;
        }

        String hex = args[0];
        if (hex.startsWith("0x") || hex.startsWith("0X")) hex = hex.substring(2);
        Address addr = currentProgram.getAddressFactory().getDefaultAddressSpace()
                .getAddress(Long.parseUnsignedLong(hex, 16));

        Function f = getFunctionContaining(addr);
        if (f == null) {
            println("No function contains address " + addr);
            return;
        }
        println("Function: " + f.getName() + " @ " + f.getEntryPoint()
                + "  size=" + f.getBody().getNumAddresses());

        DecompInterface decomp = new DecompInterface();
        decomp.setOptions(new DecompileOptions());
        decomp.openProgram(currentProgram);
        DecompileResults res = decomp.decompileFunction(f, 60, monitor);
        if (!res.decompileCompleted()) {
            println("Decompile failed: " + res.getErrorMessage());
            return;
        }
        String c = res.getDecompiledFunction().getC();

        if (args.length >= 2) {
            try (PrintWriter w = new PrintWriter(args[1])) {
                w.print(c);
            }
            println("Wrote " + c.length() + " bytes to " + args[1]);
        } else {
            println(c);
        }
    }
}
