{
  P1: Override-only merge probe.
  Loads Master.esm + OverrideA.esp + OverrideB.esp.
  Creates MergeAB.esp, copies every record from A then B as overrides
  WITHOUT proactively adding A/B as masters of MergeAB.
  Reports what xEdit ended up putting in MergeAB's master list.
}
unit UserScript;

var
  gLog: TStringList;

function GetArg(const key: string): string;
var
  i: Integer; prefix, s: string;
begin
  Result := '';
  prefix := '--' + key + '=';
  for i := 0 to ParamCount do begin
    s := ParamStr(i);
    if Copy(s, 1, Length(prefix)) = prefix then begin
      Result := Copy(s, Length(prefix) + 1, MaxInt);
      Exit;
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
var
  hdr, mg, mr: IInterface; i: Integer; sep, name: string;
begin
  Result := '';
  hdr := ElementByIndex(plugin, 0);
  if not Assigned(hdr) then Exit;
  mg := ElementByPath(hdr, 'Master Files');
  if not Assigned(mg) then Exit;
  sep := '';
  for i := 0 to Pred(ElementCount(mg)) do begin
    mr := ElementByIndex(mg, i);
    name := GetEditValue(ElementByPath(mr, 'MAST'));
    Result := Result + sep + name;
    sep := ',';
  end;
end;

procedure CopyAllOverrides(src, target: IInterface; var copied, errs: Integer);
var
  i, j: Integer;
  group, rec, dst: IInterface;
  sig, recSig, edid, fid: string;
begin
  for i := 0 to Pred(ElementCount(src)) do begin
    group := ElementByIndex(src, i);
    sig := Signature(group);
    if sig = 'TES4' then Continue;
    for j := 0 to Pred(ElementCount(group)) do begin
      rec := ElementByIndex(group, j);
      recSig := Signature(rec);
      if recSig = '' then Continue;
      edid := EditorID(rec);
      fid := IntToHex(GetLoadOrderFormID(rec), 8);
      try
        dst := wbCopyElementToFile(rec, target, False, True);
        if Assigned(dst) then begin
          Inc(copied);
          gLog.Add('  COPY ok sig=' + recSig + ' edid=' + edid + ' fid=' + fid);
        end else begin
          Inc(errs);
          gLog.Add('  COPY nil sig=' + recSig + ' edid=' + edid + ' fid=' + fid);
        end;
      except
        on E: Exception do begin
          Inc(errs);
          gLog.Add('  COPY EXC sig=' + recSig + ' edid=' + edid + ' fid=' + fid + ' msg=' + E.Message);
        end;
      end;
    end;
  end;
end;

procedure DumpRecords(plugin: IInterface);
var
  i, j: Integer;
  group, rec: IInterface;
  sig: string;
begin
  for i := 0 to Pred(ElementCount(plugin)) do begin
    group := ElementByIndex(plugin, i);
    sig := Signature(group);
    if sig = 'TES4' then Continue;
    for j := 0 to Pred(ElementCount(group)) do begin
      rec := ElementByIndex(group, j);
      gLog.Add('  REC sig=' + Signature(rec) +
              ' edid=' + EditorID(rec) +
              ' fid=' + IntToHex(GetLoadOrderFormID(rec), 8));
    end;
  end;
end;

function Initialize: Integer;
var
  outPath: string;
  srcA, srcB, target: IInterface;
  copiedA, copiedB, errsA, errsB, i: Integer;
  fatal: Boolean;
begin
  outPath := GetArg('out');
  gLog := TStringList.Create;
  fatal := False;
  Result := 0;

  gLog.Add('=== P1 override-only merge probe ===');
  gLog.Add('FileCount=' + IntToStr(FileCount));
  for i := 0 to Pred(FileCount) do
    gLog.Add('  loaded[' + IntToStr(i) + ']=' + GetFileName(FileByIndex(i)));

  srcA := FindFileByName('OverrideA.esp');
  srcB := FindFileByName('OverrideB.esp');
  if not Assigned(srcA) then begin gLog.Add('FATAL: OverrideA.esp not loaded'); fatal := True; Result := 2; end;
  if not Assigned(srcB) then begin gLog.Add('FATAL: OverrideB.esp not loaded'); fatal := True; Result := 2; end;

  if not fatal then begin
    target := AddNewFileName('MergeAB.esp');
    if not Assigned(target) then begin
      gLog.Add('FATAL: AddNewFileName MergeAB.esp returned nil');
      fatal := True; Result := 3;
    end;
  end;

  if not fatal then begin
    gLog.Add('Created target MergeAB.esp');

    AddMasterIfMissing(target, 'Master.esm');
    gLog.Add('After AddMasterIfMissing(Master.esm), masters=' + MasterListAsCSV(target));

    copiedA := 0; errsA := 0;
    gLog.Add('Copying OverrideA records...');
    CopyAllOverrides(srcA, target, copiedA, errsA);
    gLog.Add('  -> copied=' + IntToStr(copiedA) + ' errs=' + IntToStr(errsA));
    gLog.Add('After A, masters=' + MasterListAsCSV(target));

    copiedB := 0; errsB := 0;
    gLog.Add('Copying OverrideB records...');
    CopyAllOverrides(srcB, target, copiedB, errsB);
    gLog.Add('  -> copied=' + IntToStr(copiedB) + ' errs=' + IntToStr(errsB));
    gLog.Add('After B, masters=' + MasterListAsCSV(target));

    gLog.Add('Calling CleanMasters(target)...');
    try
      CleanMasters(target);
      gLog.Add('  CleanMasters ok, masters=' + MasterListAsCSV(target));
    except
      on E: Exception do gLog.Add('  CleanMasters EXC: ' + E.Message);
    end;

    gLog.Add('Final record dump:');
    DumpRecords(target);
  end;

  gLog.SaveToFile(outPath);
  AddMessage('p1_merge done -> ' + outPath);
end;

end.
