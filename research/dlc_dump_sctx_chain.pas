{
  Find SCPT records by (master file, local FID), walk the override
  chain, emit SCTX from each version into a single text file.
}
unit UserScript;

const
  OUT_DIR = 'D:\Modlists\Reborn\research\dlc_audit\';

function FindFileByName(const name: string): IInterface;
var
  i: Integer;
  f: IInterface;
begin
  Result := nil;
  for i := 0 to Pred(FileCount) do begin
    f := FileByIndex(i);
    if SameText(GetFileName(f), name) then begin
      Result := f;
      Exit;
    end;
  end;
end;

function LookupRecord(const masterName: string; localFid: Cardinal): IInterface;
var
  f: IInterface;
begin
  Result := nil;
  f := FindFileByName(masterName);
  if not Assigned(f) then Exit;
  Result := RecordByFormID(f, localFid, False);
  if not Assigned(Result) then
    Result := RecordByFormID(f, localFid, True);
end;

procedure DumpChain(const label_, masterName: string; localFid: Cardinal; sl: TStringList);
var
  rec, ovr: IInterface;
  i, n: Integer;
  sctx: string;
begin
  sl.Add('================================================================');
  sl.Add('SCPT: ' + label_ + '   master=' + masterName
         + '   localFid=' + IntToHex(localFid, 8));
  sl.Add('================================================================');
  rec := LookupRecord(masterName, localFid);
  if not Assigned(rec) then begin
    sl.Add('  NOT FOUND');
    sl.Add('');
    Exit;
  end;
  n := OverrideCount(rec);
  sl.Add('  master=' + GetFileName(GetFile(rec)) + '   overrides=' + IntToStr(n));
  sl.Add('');
  sl.Add('---- [MASTER] ' + GetFileName(GetFile(rec)) + ' ----');
  sctx := GetElementEditValues(rec, 'SCTX');
  sl.Add(sctx);
  sl.Add('');
  for i := 0 to Pred(n) do begin
    ovr := OverrideByIndex(rec, i);
    sl.Add('---- [OVERRIDE ' + IntToStr(i) + '] ' + GetFileName(GetFile(ovr)) + ' ----');
    sctx := GetElementEditValues(ovr, 'SCTX');
    sl.Add(sctx);
    sl.Add('');
  end;
end;

function Initialize: Integer;
var
  sl: TStringList;
  outPath: string;
begin
  ForceDirectories(OUT_DIR);
  sl := TStringList.Create;
  try
    DumpChain('DLCBattlehornCastleScript',          'DLCBattlehornCastle.esp', $0100B08A, sl);
    DumpChain('DLC06ThievesDenQuestScript',         'DLCThievesDen.esp',       $01003E85, sl);
    DumpChain('DLCDeepscornScript',                 'DLCVileLair.esp',         $010046AB, sl);
    DumpChain('DLCFrostcragSpireScript',            'DLCFrostcrag.esp',        $01000D54, sl);
    DumpChain('DLCHorseArmorScript',                'DLCHorseArmor.esp',       $01000CED, sl);
    DumpChain('DLCOrreryQuestScript',               'DLCOrrery.esp',           $0111B9FC, sl);
    DumpChain('DL9QuestSCRIPT',                     'DLCMehrunesRazor.esp',    $010013DB, sl);
    DumpChain('PSCharactergenStartingEquipmentScript', 'PSMainQuestDelayer.esp', $01012EAF, sl);
    outPath := OUT_DIR + 'sctx_chains.txt';
    sl.SaveToFile(outPath);
    AddMessage('Wrote ' + outPath + ' (' + IntToStr(sl.Count) + ' lines)');
    EmitJSONLine(OUT_DIR + '_sctx_done.json', '{"status":"ok"}');
  finally
    sl.Free;
  end;
  Result := 0;
end;

end.
