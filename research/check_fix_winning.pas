{
  Verify our Rider Hair Fix is winning the override chain for 000700CC,
  and identify NPC 38461B6F from MOO.
}
unit UserScript;

procedure ShowOverrideChain(formID: Cardinal);
var
  ofile, rec, override, lnam: IInterface;
  i, count: Integer;
  files: TStringList;
begin
  ofile := FileByName('Oblivion.esm');
  rec := RecordByFormID(ofile, formID, False);
  if not Assigned(rec) then begin
    AddMessage('NOT FOUND in Oblivion.esm: ' + IntToHex(formID, 8));
    Exit;
  end;
  count := OverrideCount(rec);
  AddMessage('FormID ' + IntToHex(formID, 8) + ' (' + EditorID(rec) + ') has ' + IntToStr(count) + ' overrides:');

  // Show master + each override and its LNAM value
  lnam := ElementByPath(rec, 'LNAM');
  if Assigned(lnam) then
    AddMessage('  [master] Oblivion.esm  LNAM = ' + GetEditValue(lnam))
  else
    AddMessage('  [master] Oblivion.esm  LNAM = <missing>');

  for i := 0 to count - 1 do begin
    override := OverrideByIndex(rec, i);
    lnam := ElementByPath(override, 'LNAM');
    if Assigned(lnam) then
      AddMessage('  [' + IntToStr(i+1) + '] ' + GetFileName(GetFile(override)) + '  LNAM = ' + GetEditValue(lnam))
    else
      AddMessage('  [' + IntToStr(i+1) + '] ' + GetFileName(GetFile(override)) + '  LNAM = <missing>');
  end;

  // Winner
  override := WinningOverride(rec);
  if Assigned(override) then begin
    lnam := ElementByPath(override, 'LNAM');
    if Assigned(lnam) then
      AddMessage('  WINNER: ' + GetFileName(GetFile(override)) + '  LNAM = ' + GetEditValue(lnam))
    else
      AddMessage('  WINNER: ' + GetFileName(GetFile(override)) + '  LNAM = <missing>');
  end;
  AddMessage('');
end;

procedure DumpMOORider(localFID: Cardinal);
var
  moo, rec, lnam, qi, hnam, race, cls: IInterface;
  fid: Cardinal;
begin
  moo := FileByName('Maskar''s Oblivion Overhaul.esp');
  if not Assigned(moo) then begin AddMessage('MOO not loaded'); Exit; end;
  // Build full FormID using MOO's load order index
  rec := RecordByFormID(moo, localFID or ($38 shl 24), False);
  if not Assigned(rec) then begin AddMessage('NOT FOUND ' + IntToHex(localFID, 8) + ' in MOO'); Exit; end;
  AddMessage('=== MOO NPC: ' + IntToHex(localFID, 8) + ' (' + EditorID(rec) + ') ===');
  qi := ElementByPath(rec, 'Record Header\Record Flags\Quest Item');
  hnam := ElementByPath(rec, 'HNAM');
  lnam := ElementByPath(rec, 'LNAM');
  race := ElementByPath(rec, 'RNAM');
  cls := ElementByPath(rec, 'CNAM');
  if Assigned(qi) then AddMessage('  Quest Item = ' + GetEditValue(qi)) else AddMessage('  Quest Item = <missing>');
  if Assigned(hnam) then AddMessage('  HNAM = ' + GetEditValue(hnam)) else AddMessage('  HNAM = <missing>');
  if Assigned(lnam) then AddMessage('  LNAM = ' + GetEditValue(lnam)) else AddMessage('  LNAM = <missing>');
  if Assigned(race) then AddMessage('  Race = ' + GetEditValue(race));
  if Assigned(cls) then AddMessage('  Class = ' + GetEditValue(cls));
  AddMessage('');
end;

function Initialize: integer;
begin
  Result := 0;
  ShowOverrideChain($000700CC);
  ShowOverrideChain($000700C0);
  AddMessage('=== NPC 38461B6F from MOO (assuming MOO is at index 0x38) ===');
  DumpMOORider($00461B6F);
end;

end.
