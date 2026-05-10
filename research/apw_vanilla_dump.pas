unit APWVanillaDump;

(*
  REPL script: for each FID in the input list, dump the FULL master record
  (Oblivion.esm) and every override link in the chain so we can diff them
  to see exactly what APW changed.

  Input: hard-coded path D:\Modlists\Reborn\research\apw_vanilla_sample_fids.txt
         each line: <hexFID>\t<sig>\t<edid>\t<plugin>

  Output: <output-dir>\apw_vanilla_dump.jsonl
    one row per chain-link; fields:
      target_fid, target_edid, target_sig, plugin, link_idx, is_master, subrecords

  Comment style is paren-star NOT brace because JvInterpreter ends brace
  comments at the first close-brace.
*)

interface

implementation

const
  INPUT_PATH    = 'D:\Modlists\Reborn\research\apw_vanilla_sample_fids.txt';
  MAX_VALUE_LEN = 2048;

function JsonEsc(const s: string): string;
begin
  Result := StringReplace(s,      '\', '\\',   [rfReplaceAll]);
  Result := StringReplace(Result, '"', '\"',   [rfReplaceAll]);
  Result := StringReplace(Result, #13#10, '\n',[rfReplaceAll]);
  Result := StringReplace(Result, #10, '\n',   [rfReplaceAll]);
  Result := StringReplace(Result, #9,  '\t',   [rfReplaceAll]);
end;

function SafeEditValue(elem: IInterface): string;
begin
  Result := '';
  try
    Result := GetEditValue(elem);
  except
    Result := '<EXCEPTION>';
  end;
  if Length(Result) > MAX_VALUE_LEN then
    Result := Copy(Result, 1, MAX_VALUE_LEN) + '...<truncated>';
end;

function SubrecordsAsJson(rec: IInterface): string;
var
  i: Integer;
  child: IInterface;
  sig, val, comma: string;
begin
  Result := '{';
  for i := 0 to ElementCount(rec) - 1 do begin
    child := ElementByIndex(rec, i);
    sig := Signature(child);
    if sig = '' then sig := Name(child);
    val := SafeEditValue(child);
    if i > 0 then comma := ',' else comma := '';
    Result := Result + comma + '"' + JsonEsc(sig) + '":"' + JsonEsc(val) + '"';
  end;
  Result := Result + '}';
end;

function HexToInt(const s: string): Cardinal;
var
  i: Integer;
  c: string;
  d: Integer;
begin
  Result := 0;
  for i := 1 to Length(s) do begin
    c := Copy(s, i, 1);
    if (c >= '0') and (c <= '9') then d := Ord(c[1]) - Ord('0')
    else if (c >= 'a') and (c <= 'f') then d := 10 + Ord(c[1]) - Ord('a')
    else if (c >= 'A') and (c <= 'F') then d := 10 + Ord(c[1]) - Ord('A')
    else d := 0;
    Result := Result * 16 + d;
  end;
end;

function FirstField(const line, sep: string): string;
var
  p: Integer;
begin
  p := Pos(sep, line);
  if p = 0 then Result := line
  else Result := Copy(line, 1, p - 1);
end;

function EmitChainLink(outPath: string; link: IInterface;
  targetFid, targetEdid, targetSig: string; linkIdx: Integer; isMaster: Boolean): Boolean;
var
  line: string;
  isMasterStr: string;
begin
  if isMaster then isMasterStr := 'true' else isMasterStr := 'false';
  line := '{"target_fid":"' + JsonEsc(targetFid) +
          '","target_edid":"' + JsonEsc(targetEdid) +
          '","target_sig":"' + JsonEsc(targetSig) +
          '","plugin":"' + JsonEsc(GetFileName(GetFile(link))) +
          '","link_idx":' + IntToStr(linkIdx) +
          ',"is_master":' + isMasterStr +
          ',"subrecords":' + SubrecordsAsJson(link) + '}';
  EmitJSONLine(outPath, line);
  Result := True;
end;

function ProcessOne(outPath, fidHex: string): Integer;
var
  master, override: IInterface;
  edid, sig: string;
  i, ovCount: Integer;
begin
  Result := 0;
  master := RecordByHexFormID(fidHex);
  if not Assigned(master) then begin
    AddMessage('  skip: ' + fidHex + ' (not found)');
    Exit;
  end;
  master := MasterOrSelf(master);
  edid := EditorID(master);
  sig := Signature(master);

  EmitChainLink(outPath, master, fidHex, edid, sig, 0, True);
  Result := 1;

  ovCount := OverrideCount(master);
  for i := 0 to ovCount - 1 do begin
    override := OverrideByIndex(master, i);
    EmitChainLink(outPath, override, fidHex, edid, sig, i + 1, False);
    Inc(Result);
  end;
end;

function Initialize: Integer;
var
  outPath, line, fidHex: string;
  sl: TStringList;
  i, totalLines, totalLinks, perRec: Integer;
begin
  outPath := OpenOutput('apw_vanilla_dump.jsonl');
  AddMessage('output: ' + outPath);
  AddMessage('reading FIDs from: ' + INPUT_PATH);

  sl := TStringList.Create;
  try
    sl.LoadFromFile(INPUT_PATH);
    totalLines := sl.Count;
    totalLinks := 0;
    AddMessage('input lines: ' + IntToStr(totalLines));

    for i := 0 to totalLines - 1 do begin
      line := sl[i];
      if Length(line) = 0 then Continue;
      fidHex := FirstField(line, #9);
      if Length(fidHex) = 0 then Continue;
      perRec := ProcessOne(outPath, fidHex);
      totalLinks := totalLinks + perRec;
    end;
    AddMessage('total chain-links emitted: ' + IntToStr(totalLinks));
    WriteSummary('{"records_processed":' + IntToStr(totalLines) +
                 ',"chain_links":' + IntToStr(totalLinks) + '}');
  finally
    sl.Free;
  end;
  Result := 0;
end;

end.
