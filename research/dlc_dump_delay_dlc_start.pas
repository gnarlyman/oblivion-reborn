unit UserScript;

const
  OUT_DIR = 'D:\Modlists\Reborn\research\dlc_audit\';

function FindFileByName(const name: string): IInterface;
var i: Integer; f: IInterface;
begin
  Result := nil;
  for i := 0 to Pred(FileCount) do begin
    f := FileByIndex(i);
    if SameText(GetFileName(f), name) then begin Result := f; Exit; end;
  end;
end;

function Esc(const s: string): string;
begin
  Result := StringReplace(s, '\', '\\', [rfReplaceAll]);
  Result := StringReplace(Result, '"', '\"', [rfReplaceAll]);
  Result := '"' + Result + '"';
end;

procedure WalkGroup(grp: IInterface; out_: TStringList);
var i: Integer; rec, master: IInterface; sig, edid, masterName, line: string; fid: Cardinal;
begin
  for i := 0 to Pred(ElementCount(grp)) do begin
    rec := ElementByIndex(grp, i);
    if Signature(rec) = 'GRUP' then begin WalkGroup(rec, out_); Continue; end;
    sig := Signature(rec);
    edid := GetElementEditValues(rec, 'EDID');
    fid := GetLoadOrderFormID(rec);
    master := MasterOrSelf(rec);
    masterName := GetFileName(GetFile(master));
    line := '{"sig":' + Esc(sig)
          + ',"edid":' + Esc(edid)
          + ',"fid":"' + IntToHex(fid, 8) + '"'
          + ',"master":' + Esc(masterName) + '}';
    out_.Add(line);
  end;
end;

procedure DumpTarget(const target: string);
var f, grp: IInterface; i: Integer; out_: TStringList; outPath: string;
begin
  f := FindFileByName(target);
  if not Assigned(f) then begin AddMessage('SKIP: not loaded: ' + target); Exit; end;
  out_ := TStringList.Create;
  try
    for i := 0 to Pred(ElementCount(f)) do begin
      grp := ElementByIndex(f, i);
      if Signature(grp) = 'GRUP' then WalkGroup(grp, out_);
    end;
    outPath := OUT_DIR + StringReplace(target, '.esp', '.jsonl', [rfReplaceAll]);
    out_.SaveToFile(outPath);
    AddMessage('OK ' + IntToStr(out_.Count) + ' records -> ' + outPath);
  finally
    out_.Free;
  end;
end;

function Initialize: Integer;
begin
  ForceDirectories(OUT_DIR);
  DumpTarget('Delay DLC Start.esp');
  EmitJSONLine(OUT_DIR + '_delay_done.json', '{"status":"ok"}');
  Result := 0;
end;

end.
