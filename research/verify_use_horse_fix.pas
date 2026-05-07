{
  Verify our Patrol Walk Fix is winning the override for VirtueRider's
  packages. Also identify NPC 386FDF7C from MOO.
}
unit UserScript;

procedure ShowPackChain(formID: Cardinal);
var
  ofile, rec, override, useHorse: IInterface;
  i, count: Integer;
begin
  ofile := FileByName('Oblivion.esm');
  rec := RecordByFormID(ofile, formID, False);
  if not Assigned(rec) then begin AddMessage('NOT in Oblivion.esm: ' + IntToHex(formID, 8)); Exit; end;
  count := OverrideCount(rec);
  AddMessage('PACK ' + IntToHex(formID, 8) + ' (' + EditorID(rec) + ') ' + IntToStr(count) + ' overrides:');
  useHorse := ElementByPath(rec, 'PKDT\Flags\Use Horse');
  AddMessage('  master: Use Horse = ' + GetEditValue(useHorse));
  for i := 0 to count - 1 do begin
    override := OverrideByIndex(rec, i);
    useHorse := ElementByPath(override, 'PKDT\Flags\Use Horse');
    AddMessage('  [' + IntToStr(i+1) + '] ' + GetFileName(GetFile(override)) + ' Use Horse = ' + GetEditValue(useHorse));
  end;
  override := WinningOverride(rec);
  useHorse := ElementByPath(override, 'PKDT\Flags\Use Horse');
  AddMessage('  WINNER: ' + GetFileName(GetFile(override)) + ' Use Horse = ' + GetEditValue(useHorse));
  AddMessage('');
end;

procedure DumpUnknownNPC;
var
  moo, ooo, rec, useHorse: IInterface;
  i: Integer;
  e, pkgs: IInterface;
  pkidVal: string;
  pkidFid: Cardinal;
begin
  moo := FileByName('Maskar''s Oblivion Overhaul.esp');
  rec := RecordByFormID(moo, $386FDF7C, False);
  if not Assigned(rec) then begin
    ooo := FileByName('Oscuro''s_Oblivion_Overhaul.esp');
    rec := RecordByFormID(ooo, $386FDF7C, False);
  end;
  if not Assigned(rec) then begin AddMessage('386FDF7C not found in MOO or OOO'); Exit; end;
  AddMessage('=== NPC 386FDF7C: ' + EditorID(rec) + ' Sig=' + Signature(rec) + ' ===');
  AddMessage('  Source: ' + GetFileName(GetFile(rec)));
  if Signature(rec) = 'NPC_' then begin
    AddMessage('  Race = ' + GetEditValue(ElementByPath(rec, 'RNAM')));
    AddMessage('  Class = ' + GetEditValue(ElementByPath(rec, 'CNAM')));
    e := ElementByPath(rec, 'Record Header\Record Flags\Quest Item');
    AddMessage('  Quest Item = ' + GetEditValue(e));
    pkgs := ElementByPath(rec, 'AI Packages');
    if Assigned(pkgs) then begin
      for i := 0 to ElementCount(pkgs) - 1 do begin
        pkidVal := GetEditValue(ElementByIndex(pkgs, i));
        AddMessage('  PKID[' + IntToStr(i) + '] = ' + pkidVal);
      end;
    end;
  end;
end;

function Initialize: integer;
begin
  Result := 0;
  ShowPackChain($00070120);  // ImperialLegionRiderVirtue1
  ShowPackChain($00070121);  // ImperialLegionRiderVirtue2
  DumpUnknownNPC;
end;

end.
