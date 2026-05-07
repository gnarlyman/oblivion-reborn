// Dump every discovered function: address, name, size, parameter count.
// No args. Writes TSV to stdout/script-log.

import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionManager;

public class ListFunctions extends GhidraScript {
    @Override
    public void run() throws Exception {
        FunctionManager fm = currentProgram.getFunctionManager();
        println("addr\tname\tsize_bytes\tparam_count\tcalling_conv");
        int n = 0;
        for (Function f : fm.getFunctions(true)) {
            println(f.getEntryPoint() + "\t" + f.getName()
                    + "\t" + f.getBody().getNumAddresses()
                    + "\t" + f.getParameterCount()
                    + "\t" + f.getCallingConventionName());
            n++;
        }
        println("# total functions: " + n);
    }
}
