unit APWAuthoredRecords;

(*
  Walk the six APW-authored ESPs and emit one JSONL row per record so we can
  see exactly what conflict resolution APW did on top of the Nexus mods.

  Output (in REPL output dir): apw_authored_records.jsonl
  Fields per row:
    plugin   filename of the APW ESP that holds this record
    fid      load-order form ID, 8 hex digits
    sig      4-char record signature
    edid     editor ID (may be empty for ACHR/REFR/etc.)
    is_new   true if this APW file is the originating master (no upstream record)
    ovrcount number of override records in the chain ahead of this file
    masters  semicolon-joined list of files in the chain before THIS file,
             starting with the originating master.

  Comment style is paren-star instead of brace because JvInterpreter ends
  brace comments at the first close-brace. See feedback_pascal_script_quirks.md.
*)

interface

implementation

function isTarget(filename: string): Boolean;
begin
  Result := (filename = 'APW Merge.esp') or
            (filename = 'APW Merge 2.esp') or
            (filename = 'APW Merge 3.esp') or
            (filename = 'APW - Conflict Resolution.esp') or
            (filename = 'LandMagicPatch.esp') or
            (filename = 'Harvest xOBSE.esp');
end;

function boolStr(b: Boolean): string;
begin
  if b then Result := 'true' else Result := 'false';
end;

(* Build the chain of filenames that hold a record with this FormID
   BEFORE the supplied record's file. Starts with the originating master. *)
function masterChainBefore(rec: IInterface): string;
var
  master, ov: IInterface;
  i, ovCount: Integer;
  chain, thisFile, ovFile: string;
begin
  thisFile := GetFileName(GetFile(rec));
  master := MasterOrSelf(rec);
  chain := GetFileName(GetFile(master));

  if chain = thisFile then begin
    (* This APW ESP IS the originating master. No chain. *)
    Result := '';
    Exit;
  end;

  ovCount := OverrideCount(master);
  for i := 0 to ovCount - 1 do begin
    ov := OverrideByIndex(master, i);
    ovFile := GetFileName(GetFile(ov));
    if ovFile = thisFile then Break;
    chain := chain + ';' + ovFile;
  end;
  Result := chain;
end;

function Initialize: Integer;
var
  i, j, total: Integer;
  f, rec: IInterface;
  outPath, line, fname, edid, sig, masters: string;
  isNew: Boolean;
  ovCount: Integer;
begin
  outPath := OpenOutput('apw_authored_records.jsonl');
  AddMessage('output: ' + outPath);

  total := 0;
  for i := 0 to FileCount - 1 do begin
    f := FileByIndex(i);
    fname := GetFileName(f);
    if not isTarget(fname) then Continue;
    AddMessage('walking ' + fname + ' (' + IntToStr(RecordCount(f)) + ' records)');

    for j := 0 to RecordCount(f) - 1 do begin
      rec := RecordByIndex(f, j);
      sig := Signature(rec);
      if sig = '' then Continue;  (* TES4 header / GRUP *)

      isNew := GetFileName(GetFile(MasterOrSelf(rec))) = fname;
      edid := EditorID(rec);
      masters := masterChainBefore(rec);
      ovCount := OverrideCount(MasterOrSelf(rec));

      line := '{"plugin":"' + fname +
              '","fid":"' + IntToHex(GetLoadOrderFormID(rec), 8) +
              '","sig":"' + sig +
              '","edid":"' + edid +
              '","is_new":' + boolStr(isNew) +
              ',"ovrcount":' + IntToStr(ovCount) +
              ',"masters":"' + masters + '"}';
      EmitJSONLine(outPath, line);
      Inc(total);
    end;
  end;

  AddMessage('emitted ' + IntToStr(total) + ' records');
  WriteSummary('{"records_emitted":' + IntToStr(total) + '}');
  Result := 0;
end;

end.
