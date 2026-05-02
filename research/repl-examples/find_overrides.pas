unit FindOverrides;

(*
  REPL example: enumerate every record in the warm load order that is a
  master AND has at least one override, emitting one JSONL row per record.

  No parameters: operates on the full load order.

  Output: <output-dir>\overrides.jsonl — fields per row:
    plugin           filename of the master's owning file
    edid             editor id
    fid              load-order form id, 8 hex digits
    signature        4-char record signature
    override_count   number of override links in the chain

  Summary: records_with_overrides + total_records_scanned

  Demonstrates: OpenOutput / EmitJSONLine / WriteSummary, full-load-order
  iteration, master vs override discrimination via GetFile equality.

  Comment style is paren-star instead of brace because JvInterpreter ends
  brace comments at the first close-brace, including ones inside JSON
  examples. See feedback_pascal_script_quirks.md.
*)

interface

implementation

function Initialize: Integer;
var
  i, j, totalScanned, withOverrides, ovCount: Integer;
  f, rec, master: IInterface;
  outPath, line: string;
begin
  outPath := OpenOutput('overrides.jsonl');
  AddMessage('writing to: ' + outPath);

  totalScanned := 0;
  withOverrides := 0;
  for i := 0 to FileCount - 1 do begin
    f := FileByIndex(i);
    for j := 0 to RecordCount(f) - 1 do begin
      rec := RecordByIndex(f, j);
      if Signature(rec) = '' then Continue;  // GRUPs / file headers
      Inc(totalScanned);

      // Skip records that are overrides — we only emit one row per master
      // record, attributed to the file the master lives in.
      master := MasterOrSelf(rec);
      if GetFileName(GetFile(master)) <> GetFileName(GetFile(rec)) then
        Continue;

      ovCount := OverrideCount(rec);
      if ovCount > 0 then begin
        line := '{"plugin":"' + GetFileName(GetFile(rec)) +
                '","edid":"' + EditorID(rec) +
                '","fid":"' + IntToHex(GetLoadOrderFormID(rec), 8) +
                '","signature":"' + Signature(rec) +
                '","override_count":' + IntToStr(ovCount) + '}';
        EmitJSONLine(outPath, line);
        Inc(withOverrides);
      end;
    end;
  end;

  AddMessage('scanned ' + IntToStr(totalScanned) + ' records, ' +
    IntToStr(withOverrides) + ' had overrides');

  WriteSummary('{"records_with_overrides":' + IntToStr(withOverrides) +
    ',"total_records_scanned":' + IntToStr(totalScanned) + '}');
  Result := 0;
end;

end.
