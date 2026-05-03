{
  P2 fixture generator.
  Loads Master.esm only. Creates:
    NewA.esp - depends on Master.esm. Adds WEAP MergeSwordA.
    NewB.esp - depends on Master.esm + NewA.esp. Adds CONT MergeChestB
               whose Items list contains one entry pointing at MergeSwordA.
  After save we have a 2-plugin pair with a cross-plugin FormID reference.
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

function AddRecordWithFID(plugin: IInterface; sig: string; localFid: Cardinal; edid: string): IInterface;
var grp, rec: IInterface;
begin
  grp := Add(plugin, sig, True);
  rec := Add(grp, sig, True);
  SetLoadOrderFormID(rec, GetLoadOrder(plugin) * $01000000 + localFid);
  SetElementEditValues(rec, 'EDID', edid);
  Result := rec;
end;

function Initialize: Integer;
var
  outPath: string;
  fNewA, fNewB, weap, cont, items, item: IInterface;
  swordFidLO: Cardinal;
begin
  outPath := GetArg('out');
  gLog := TStringList.Create;
  Result := 0;

  gLog.Add('=== P2 fixture gen ===');
  gLog.Add('FileCount(start)=' + IntToStr(FileCount));

  // NewA: defines a new weapon
  fNewA := AddNewFileName('NewA.esp');
  if not Assigned(fNewA) then begin gLog.Add('FATAL: AddNewFileName NewA.esp nil'); Result := 2; gLog.SaveToFile(outPath); Exit; end;
  AddMasterIfMissing(fNewA, 'Master.esm');
  gLog.Add('NewA.esp created, load order=' + IntToStr(GetLoadOrder(fNewA)));

  weap := AddRecordWithFID(fNewA, 'WEAP', $001100, 'MergeSwordA');
  SetElementEditValues(weap, 'FULL', 'Merge Sword A');
  SetElementEditValues(weap, 'MODL\MODL', 'Weapons\Merge.NIF');
  SetElementEditValues(weap, 'DATA\Type', 'Blade One Hand');
  SetElementEditValues(weap, 'DATA\Speed', '1.0');
  SetElementEditValues(weap, 'DATA\Reach', '1.0');
  SetElementEditValues(weap, 'DATA\Value', '50');
  SetElementEditValues(weap, 'DATA\Health', '100');
  SetElementEditValues(weap, 'DATA\Weight', '5.0');
  SetElementEditValues(weap, 'DATA\Damage', '12');
  swordFidLO := GetLoadOrderFormID(weap);
  gLog.Add('  WEAP MergeSwordA loFID=' + IntToHex(swordFidLO, 8));

  // NewB: defines a chest whose inventory references MergeSwordA
  fNewB := AddNewFileName('NewB.esp');
  if not Assigned(fNewB) then begin gLog.Add('FATAL: AddNewFileName NewB.esp nil'); Result := 3; gLog.SaveToFile(outPath); Exit; end;
  AddMasterIfMissing(fNewB, 'Master.esm');
  AddMasterIfMissing(fNewB, 'NewA.esp');
  gLog.Add('NewB.esp created, load order=' + IntToStr(GetLoadOrder(fNewB)));

  cont := AddRecordWithFID(fNewB, 'CONT', $001200, 'MergeChestB');
  SetElementEditValues(cont, 'FULL', 'Merge Chest B');
  items := Add(cont, 'Items', True);
  item := ElementByIndex(items, 0);
  SetElementNativeValues(item, 'Item', swordFidLO);  // cross-plugin ref!
  SetElementNativeValues(item, 'Count', 1);
  gLog.Add('  CONT MergeChestB loFID=' + IntToHex(GetLoadOrderFormID(cont), 8));
  gLog.Add('  CNTO Item=' + IntToHex(swordFidLO, 8) + ' (points at MergeSwordA)');

  gLog.Add('Done. xEdit autosave will write NewA.esp + NewB.esp on exit.');
  gLog.SaveToFile(outPath);
end;

end.
