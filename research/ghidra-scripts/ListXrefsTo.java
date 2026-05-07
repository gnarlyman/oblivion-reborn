// List every reference (xref) to a given address.
// Args: <hex-address>
//
// Example:
//   analyzeHeadless <projDir> Oblivion -process Oblivion.exe -readOnly \
//       -scriptPath D:\Modlists\Reborn\research\ghidra-scripts \
//       -postScript ListXrefsTo.java 552990

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.ReferenceIterator;

public class ListXrefsTo extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 1) {
            println("Usage: ListXrefsTo <hex-address>");
            return;
        }
        String hex = args[0];
        if (hex.startsWith("0x") || hex.startsWith("0X")) hex = hex.substring(2);
        Address target = currentProgram.getAddressFactory().getDefaultAddressSpace()
                .getAddress(Long.parseUnsignedLong(hex, 16));

        ReferenceIterator it = currentProgram.getReferenceManager().getReferencesTo(target);
        int n = 0;
        while (it.hasNext()) {
            Reference r = it.next();
            Function f = getFunctionContaining(r.getFromAddress());
            String fn = f == null ? "<top-level>" : f.getName() + "@" + f.getEntryPoint();
            println(r.getFromAddress() + "  " + r.getReferenceType() + "  in " + fn);
            n++;
        }
        println("Total xrefs to " + target + ": " + n);
    }
}
