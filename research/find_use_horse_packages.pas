{
  Find all AI packages with "Use Horse" flag set, across loaded plugins.
  Output: formID + EditorID + source plugin + which NPCs reference it.
}
unit UserScript;

procedure ScanFile(f: IInterface);
var
  group: IInterface;
  rec, flags, useHorse: IInterface;
  i: Integer;
  count: Integer;
begin
  group := GroupBySignature(f, 'PACK');
  if not Assigned(group) then Exit;
  count := 0;
  for i := 0 to ElementCount(group) - 1 do begin
    rec := ElementByIndex(group, i);
    flags := ElementByPath(rec, 'PKDT\Flags');
    if not Assigned(flags) then continue;
    useHorse := ElementByPath(flags, 'Use Horse');
    if not Assigned(useHorse) then continue;
    if GetEditValue(useHorse) <> '1' then continue;
    AddMessage('  ' + IntToHex(GetLoadOrderFormID(rec), 8) + ' ' + EditorID(rec));
    Inc(count);
  end;
  AddMessage('  Total in ' + GetFileName(f) + ': ' + IntToStr(count));
end;

procedure ScanFileByName(name: string);
var
  f: IInterface;
begin
  f := FileByName(name);
  if not Assigned(f) then begin AddMessage(name + ' NOT LOADED'); Exit; end;
  AddMessage('=== ' + name + ' ===');
  ScanFile(f);
  AddMessage('');
end;

function Initialize: integer;
begin
  Result := 0;
  ScanFileByName('Oblivion.esm');
  ScanFileByName('Oscuro''s_Oblivion_Overhaul.esp');
  ScanFileByName('Oscuro''s_Oblivion_Overhaul.esm');
  ScanFileByName('Maskar''s Oblivion Overhaul.esp');
end;

end.
