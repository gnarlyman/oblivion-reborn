namespace UsvfsLauncher;

/// <summary>
/// Frame marker constants and source-line escaping for the xEdit REPL wire
/// protocol. Mirrors xEdit/wbREPLMode.pas.
/// </summary>
internal static class Markers
{
    public const string Ready      = "===READY===";
    public const string EndSource  = "===END_SOURCE===";
    public const string Result     = "===RESULT===";
    public const string EndResult  = "===END_RESULT===";

    /// <summary>True if the line is a recognized frame marker (bare or with payload).</summary>
    public static bool IsMarkerLine(string line)
    {
        if (line == EndSource || line == EndResult) return true;
        if (line == Ready || line.StartsWith(Ready + " ")) return true;
        if (line == Result || line.StartsWith(Result + " ")) return true;
        return false;
    }

    /// <summary>
    /// Neutralize any submitted Pascal source line that exactly matches a
    /// frame marker, by wrapping it in a Pascal block comment. Marker
    /// recognition on the xEdit side is anchored to bare lines, so a stray
    /// `===END_SOURCE===` literal in user source would otherwise cut off
    /// the script prematurely.
    /// </summary>
    public static string EscapeSource(string source)
    {
        // Preserve the exact line endings the source used. We split on \n
        // and reattach \r if the original line had it; trailing newline
        // (if present) is preserved.
        var lines = source.Split('\n');
        for (int i = 0; i < lines.Length; i++)
        {
            var line = lines[i];
            var trailingCr = line.EndsWith("\r");
            var bare = trailingCr ? line.Substring(0, line.Length - 1) : line;
            if (IsMarkerLine(bare))
            {
                bare = "{ neutralized: " + bare + " }";
                lines[i] = trailingCr ? bare + "\r" : bare;
            }
        }
        return string.Join("\n", lines);
    }
}
