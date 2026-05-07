// Dump N 4-byte function-pointer slots starting at <hex-address>; resolve each to a function/symbol name.
// Args: <hex-address> [<count=32>] [<output-path>]
//
// Example:
//   analyzeHeadless <projDir> Oblivion -process Oblivion.exe -readOnly \
//       -scriptPath D:\Modlists\Reborn\research\ghidra-scripts \
//       -postScript DumpVtable.java A36CE0 32 D:\tmp\queuedhead_vtable.txt

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressSpace;
import ghidra.program.model.listing.Function;
import ghidra.program.model.symbol.Symbol;
import ghidra.program.model.symbol.SymbolTable;

import java.io.PrintWriter;

public class DumpVtable extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 1) {
            println("Usage: DumpVtable <hex-address> [<count=32>] [<output-path>]");
            return;
        }

        String hex = args[0];
        if (hex.startsWith("0x") || hex.startsWith("0X")) hex = hex.substring(2);
        AddressSpace space = currentProgram.getAddressFactory().getDefaultAddressSpace();
        Address vtblAddr = space.getAddress(Long.parseUnsignedLong(hex, 16));

        int count = (args.length >= 2 && !args[1].isEmpty()) ? Integer.parseInt(args[1]) : 32;
        String outPath = (args.length >= 3) ? args[2] : null;

        SymbolTable st = currentProgram.getSymbolTable();

        StringBuilder sb = new StringBuilder();
        sb.append(String.format("Vtable at %s (%d slots):%n", vtblAddr, count));
        sb.append("  idx  slot-addr     ptr         function/symbol%n".replace("%n", System.lineSeparator()));

        for (int i = 0; i < count; i++) {
            Address slot = vtblAddr.add(i * 4L);
            int rawPtr;
            try {
                rawPtr = currentProgram.getMemory().getInt(slot);
            } catch (Exception e) {
                sb.append(String.format("  [%2d] %s  <unreadable>%n", i, slot));
                continue;
            }
            long ptrL = ((long) rawPtr) & 0xFFFFFFFFL;
            Address fn = space.getAddress(ptrL);

            String name = "(no symbol)";
            try {
                Function f = getFunctionAt(fn);
                if (f != null) {
                    name = f.getName();
                } else {
                    Symbol s = st.getPrimarySymbol(fn);
                    if (s != null) name = s.getName();
                    else {
                        Function fc = getFunctionContaining(fn);
                        if (fc != null) {
                            name = fc.getName() + "+" + (ptrL - fc.getEntryPoint().getOffset());
                        }
                    }
                }
            } catch (Exception e) {
                name = "(resolve failed: " + e.getMessage() + ")";
            }

            sb.append(String.format("  [%2d] %s  0x%08X  %s%n", i, slot, ptrL, name));
        }

        String output = sb.toString();
        println(output);

        if (outPath != null) {
            try (PrintWriter w = new PrintWriter(outPath)) {
                w.print(output);
            }
            println("Wrote to " + outPath);
        }
    }
}
