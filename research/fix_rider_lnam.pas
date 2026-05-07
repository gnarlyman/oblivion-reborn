{
  fix_rider_lnam.pas - create "Reborn - Rider Hair Fix.esp" that overrides
  the 17 mounted Imperial Legion riders with LNAM (hair length) set to 0.

  Hypothesis: custom non-zero LNAM triggers per-NPC hair allocation, which
  creates LFM/IOManager pressure that races on free for these NPCs (all
  marked Quest Item). Setting LNAM to 0 makes the engine use race-default
  hair length, no per-NPC allocation, no LFM stress.
}
unit UserScript;

const
  TargetFileName = 'Reborn - Rider Hair Fix.esp';

function FindFileByName(name: string): IInterface;
var
  i: Integer;
  f: IInterface;
begin
  Result := nil;
  for i := 0 to Pred(FileCount) do begin
    f := FileByIndex(i);
    if GetFileName(f) = name then begin
      Result := f;
      Exit;
    end;
  end;
end;

procedure AddMasterIfMissing(target: IInterface; masterName: string);
var
  masters: IInterface;
  i: Integer;
  m: IInterface;
  newMaster: IInterface;
begin
  masters := ElementByPath(target, 'TES4\Master Files');
  if Assigned(masters) then
    for i := 0 to ElementCount(masters) - 1 do begin
      m := ElementByIndex(masters, i);
      if GetEditValue(ElementByPath(m, 'MAST')) = masterName then Exit;
    end;
  newMaster := Add(target, 'Master Files', True);
  // Some xEdit versions auto-add MAST via Add; use SetEditValue if not
end;

procedure FixOneRider(formID: Cardinal; target: IInterface; var fixed: Integer);
var
  obl, npc, override, lnam: IInterface;
begin
  obl := FileByName('Oblivion.esm');
  npc := RecordByFormID(obl, formID, False);
  if not Assigned(npc) then begin
    AddMessage('  SKIP ' + IntToHex(formID, 8) + ' (not found)');
    Exit;
  end;

  override := wbCopyElementToFile(npc, target, False, True);
  if not Assigned(override) then begin
    AddMessage('  FAIL ' + IntToHex(formID, 8) + ' (copy failed)');
    Exit;
  end;

  lnam := ElementByPath(override, 'LNAM');
  if not Assigned(lnam) then begin
    AddMessage('  SKIP ' + IntToHex(formID, 8) + ' (no LNAM)');
    Exit;
  end;

  SetEditValue(lnam, '0.000000');
  AddMessage('  FIX  ' + IntToHex(formID, 8) + ' ' + EditorID(npc) + ' LNAM 0.0');
  Inc(fixed);
end;

function Initialize: Integer;
var
  target: IInterface;
  fixed: Integer;
begin
  fixed := 0;
  target := FindFileByName(TargetFileName);
  if not Assigned(target) then
    target := AddNewFileName(TargetFileName, False);
  if not Assigned(target) then begin
    AddMessage('FAIL: could not create or find ' + TargetFileName);
    Result := 1;
    Exit;
  end;
  AddMessage('Target: ' + GetFileName(target));
  AddMasterIfMissing(target, 'Oblivion.esm');

  FixOneRider($000700C0, target, fixed);
  FixOneRider($000700C1, target, fixed);
  FixOneRider($000700C2, target, fixed);
  FixOneRider($000700C3, target, fixed);
  FixOneRider($000700C4, target, fixed);
  FixOneRider($000700C5, target, fixed);
  FixOneRider($000700C6, target, fixed);
  FixOneRider($000700C7, target, fixed);
  FixOneRider($000700C8, target, fixed);
  FixOneRider($000700C9, target, fixed);
  FixOneRider($000700CA, target, fixed);
  FixOneRider($000700CB, target, fixed);
  FixOneRider($000700CC, target, fixed);
  FixOneRider($000700CD, target, fixed);
  FixOneRider($0018BA86, target, fixed);
  FixOneRider($0018BA88, target, fixed);
  FixOneRider($0018BA89, target, fixed);

  AddMessage('Done. Fixed ' + IntToStr(fixed) + ' riders.');
  AddMessage('To save: stop the REPL daemon and xEdit will write ' + TargetFileName);

  Result := 0;
end;

end.
