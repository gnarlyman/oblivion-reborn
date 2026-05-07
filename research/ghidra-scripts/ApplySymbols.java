// Apply a TSV catalog of (address, name, kind) symbols to the program.
// Args: <tsv-path>
//   TSV columns:  hex-addr  TAB  name  TAB  kind   (kind: function | label)
//   Lines starting with '#' and empty lines are ignored.
//
// For kind=function:
//   - If a function exists containing the address, rename it to <name>.
//   - Else, attempt to create a function at the address, then rename.
// For kind=label:
//   - Create a primary user-defined label at the address.
//
// Counts and per-row outcomes are printed; on completion the program
// is saved (run WITHOUT -readOnly).

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionManager;
import ghidra.program.model.symbol.Symbol;
import ghidra.program.model.symbol.SymbolTable;
import ghidra.program.model.symbol.SourceType;

import java.io.BufferedReader;
import java.io.FileReader;

public class ApplySymbols extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 1) {
            println("Usage: ApplySymbols <tsv-path>");
            return;
        }
        String tsvPath = args[0];

        FunctionManager fm = currentProgram.getFunctionManager();
        SymbolTable st = currentProgram.getSymbolTable();

        int rows = 0, fnRenamed = 0, fnCreated = 0, lbl = 0, errors = 0;

        try (BufferedReader br = new BufferedReader(new FileReader(tsvPath))) {
            String line;
            while ((line = br.readLine()) != null) {
                String s = line.trim();
                if (s.isEmpty() || s.startsWith("#")) continue;
                String[] cols = s.split("\\t+");
                if (cols.length < 3) {
                    println("WARN  skip (bad columns): " + line);
                    errors++;
                    continue;
                }
                rows++;
                String hex = cols[0].trim();
                String name = cols[1].trim();
                String kind = cols[2].trim().toLowerCase();
                if (hex.startsWith("0x") || hex.startsWith("0X")) hex = hex.substring(2);

                Address addr;
                try {
                    addr = currentProgram.getAddressFactory()
                            .getDefaultAddressSpace()
                            .getAddress(Long.parseUnsignedLong(hex, 16));
                } catch (Exception e) {
                    println("ERROR  bad addr " + hex + " : " + e.getMessage());
                    errors++;
                    continue;
                }

                try {
                    if (kind.equals("function")) {
                        Function f = fm.getFunctionContaining(addr);
                        if (f == null) {
                            f = createFunction(addr, name);
                            if (f == null) {
                                println("ERROR  could not create function at " + addr + "  (" + name + ")");
                                errors++;
                                continue;
                            }
                            fnCreated++;
                        } else {
                            f.setName(name, SourceType.USER_DEFINED);
                            fnRenamed++;
                        }
                    } else if (kind.equals("label")) {
                        st.createLabel(addr, name, SourceType.USER_DEFINED);
                        lbl++;
                    } else {
                        println("WARN  unknown kind '" + kind + "' for " + name);
                        errors++;
                    }
                } catch (Exception e) {
                    println("ERROR  apply " + name + " @ " + addr + " : " + e.getMessage());
                    errors++;
                }
            }
        }

        println("===== ApplySymbols summary =====");
        println("  rows seen:        " + rows);
        println("  functions renamed: " + fnRenamed);
        println("  functions created: " + fnCreated);
        println("  labels created:   " + lbl);
        println("  errors:           " + errors);
    }
}
