{
  P1 verify: re-load with plugins.txt that excludes OverrideA/B.
  Confirms MergeAB.esp loads standalone (apart from Master.esm) and dumps
  its master list + records.
}
unit UserScript;

var
  gLog: TStringList;

function GetArg(const key: string): string;
var i: Integer; prefix, s: string;
begin
  Result := '';
  prefix := '--' + key + '=';
  for i := 0 to ParamCount do begin
    s := ParamStr(i);
    if Copy(s, 1, Length(prefix)) = prefix then begin
      Result := Copy(s, Length(prefix) + 1, MaxInt); Exit;
    end;
  end;
end;

function FindFileByName(const name: string): IInterface;
var i: Integer; f: IInterface;
begin
  Result := nil;
  for i := 0 to Pred(FileCount) do begin
    f := FileByIndex(i);
    if SameText(GetFileName(f), name) then begin Result := f; Exit; end;
  end;
end;

function MasterListAsCSV(plugin: IInterface): string;
var hdr, mg, mr: IInterface; i: Integer; sep, nm: string;
begin
  Result := ''; sep := '';
  hdr := ElementByIndex(plugin, 0);
  if not Assigned(hdr) then Exit;
  mg := ElementByPath(hdr, 'Master Files');
  if not Assigned(mg) then Exit;
  for i := 0 to Pred(ElementCount(mg)) do begin
    mr := ElementByIndex(mg, i);
    nm := GetEditValue(ElementByPath(mr, 'MAST'));
    Result := Result + sep + nm; sep := ',';
  end;
end;

procedure DumpRecord(rec: IInterface);
var
  sig, edid, fid, dmg, val, armor: string;
begin
  sig := Signature(rec);
  edid := EditorID(rec);
  fid := IntToHex(GetLoadOrderFormID(rec), 8);
  gLog.Add('  REC sig=' + sig + ' edid=' + edid + ' fid=' + fid);
  if sig = 'WEAP' then begin
    try dmg := GetElementEditValues(rec, 'DATA\Damage'); except dmg := '?'; end;
    try val := GetElementEditValues(rec, 'DATA\Value'); except val := '?'; end;
    gLog.Add('    DATA\Damage=' + dmg + '  DATA\Value=' + val);
  end;
  if sig = 'ARMO' then begin
    try armor := GetElementEditValues(rec, 'DATA\Armor'); except armor := '?'; end;
    gLog.Add('    DATA\Armor=' + armor);
  end;
end;

function Initialize: Integer;
var
  outPath: string;
  merged: IInterface;
  i, j: Integer;
  group, rec: IInterface;
begin
  outPath := GetArg('out');
  gLog := TStringList.Create;
  Result := 0;

  gLog.Add('=== P1 verify ===');
  gLog.Add('FileCount=' + IntToStr(FileCount));
  for i := 0 to Pred(FileCount) do
    gLog.Add('  loaded[' + IntToStr(i) + ']=' + GetFileName(FileByIndex(i)));

  merged := FindFileByName('MergeAB.esp');
  if not Assigned(merged) then begin
    gLog.Add('FATAL: MergeAB.esp not loaded');
    Result := 2;
  end else begin
    gLog.Add('MergeAB.esp masters=' + MasterListAsCSV(merged));
    for i := 0 to Pred(ElementCount(merged)) do begin
      group := ElementByIndex(merged, i);
      if Signature(group) = 'TES4' then Continue;
      for j := 0 to Pred(ElementCount(group)) do begin
        rec := ElementByIndex(group, j);
        DumpRecord(rec);
      end;
    end;
  end;

  gLog.SaveToFile(outPath);
  AddMessage('p1_verify done -> ' + outPath);
end;

end.
