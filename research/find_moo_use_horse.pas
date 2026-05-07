{
  Find ALL Use Horse packages in MOO regardless of naming.
  Also dump packages used by MOOImperialLegionRecruitSoldier03 (00461B6F).
}
unit UserScript;

procedure ScanMOO;
var
  moo, group, rec, useHorse: IInterface;
  i: Integer;
begin
  moo := FileByName('Maskar''s Oblivion Overhaul.esp');
  group := GroupBySignature(moo, 'PACK');
  if not Assigned(group) then begin AddMessage('No PACK group in MOO'); Exit; end;
  AddMessage('=== MOO Use Horse packages ===');
  for i := 0 to ElementCount(group) - 1 do begin
    rec := ElementByIndex(group, i);
    useHorse := ElementByPath(rec, 'PKDT\Flags\Use Horse');
    if not Assigned(useHorse) then continue;
    if GetEditValue(useHorse) = '1' then
      AddMessage('  ' + IntToHex(GetLoadOrderFormID(rec), 8) + ' ' + EditorID(rec));
  end;
end;

procedure DumpMOORecruit;
var
  moo, npc, pkgs, pkidElem: IInterface;
  i: Integer;
begin
  moo := FileByName('Maskar''s Oblivion Overhaul.esp');
  npc := RecordByFormID(moo, $38461B6F, False);
  if not Assigned(npc) then begin AddMessage('Recruit not found'); Exit; end;
  AddMessage('=== Packages on MOOImperialLegionRecruitSoldier03 ===');
  pkgs := ElementByPath(npc, 'AI Packages');
  for i := 0 to ElementCount(pkgs) - 1 do begin
    pkidElem := ElementByIndex(pkgs, i);
    AddMessage('  PKID[' + IntToStr(i) + '] = ' + GetEditValue(pkidElem));
  end;
end;

function Initialize: integer;
begin
  Result := 0;
  ScanMOO;
  AddMessage('');
  DumpMOORecruit;
end;

end.
