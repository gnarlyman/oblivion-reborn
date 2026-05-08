{
  dump_winning.pas

  For each "winning override" record in the active load order, emit one
  JSONL line to a file:

      {"fid":"01023F2A","plugin":"OOO Enhanced.esp","sig":"NPC_"}

  fid is the LO FID (8-uppercase hex). Used by predictor/oracle_diff.py to
  validate Python's pure-Python override-winning logic against xEdit's
  authoritative resolution.

  Output path can be set via OUTPUT_PATH environment variable; defaults to
  oracle_winning.jsonl in xEdit's working directory.

  Run via:
    "<xEdit.exe>" -script:dump_winning -nobuildrefs -autoload "Reborn-OOO"

  Or via REPL daemon (research/repl_daemon.py).

  NOTE: Plugin names with backslash or double-quote characters would break the
  JSON output. No Bethesda/MO2 plugin name contains those characters in
  practice; this is a documented assumption.

  IMPORTANT: do not place curly braces of any kind inside this block
  comment - JvInterpreter ends the comment at the first close-brace and
  the leftover text reaches the parser as code.
}
unit dump_winning;

var
  outFile: TStringList;
  outputPath: string;

function Initialize: Integer;
begin
  outFile := TStringList.Create;
  outputPath := GetEnvironmentVariable('OUTPUT_PATH');
  if outputPath = '' then
    outputPath := 'oracle_winning.jsonl';
  AddMessage('dump_winning: output -> ' + outputPath);
  Result := 0;
end;

function Process(e: IInterface): Integer;
var
  fid: Cardinal;
  plugin: string;
  sig: string;
  line: string;
begin
  (* Skip non-winning overrides. *)
  if not IsWinningOverride(e) then begin
    Result := 0;
    Exit;
  end;
  (* Skip TES4 file headers - they are not game records. *)
  sig := Signature(e);
  if sig = 'TES4' then begin
    Result := 0;
    Exit;
  end;

  fid := GetLoadOrderFormID(e);
  plugin := GetFileName(GetFile(e));
  line := '{"fid":"' + IntToHex(fid, 8) + '","plugin":"' + plugin + '","sig":"' + sig + '"}';
  outFile.Add(line);
  Result := 0;
end;

function Finalize: Integer;
begin
  AddMessage('dump_winning: writing ' + IntToStr(outFile.Count) + ' lines to ' + outputPath);
  outFile.SaveToFile(outputPath);
  outFile.Free;
  Result := 0;
end;

end.
