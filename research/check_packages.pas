{
  Compare AI package NAMED flags between VirtueRider's packages and AdamusPhillida's.
}
unit UserScript;

procedure DumpPackageFlags(pkid: Cardinal);
var
  ofile, pkg, flags, child: IInterface;
  i: Integer;
  flagName: string;
begin
  ofile := FileByName('Oblivion.esm');
  pkg := RecordByFormID(ofile, pkid, False);
  if not Assigned(pkg) then begin AddMessage('  ' + IntToHex(pkid, 8) + ' NOT FOUND'); Exit; end;
  AddMessage('  ' + EditorID(pkg) + ' (' + IntToHex(pkid, 8) + ')');
  AddMessage('    Type = ' + GetEditValue(ElementByPath(pkg, 'PKDT\Type')));
  flags := ElementByPath(pkg, 'PKDT\Flags');
  if not Assigned(flags) then begin AddMessage('    no flags'); Exit; end;
  for i := 0 to ElementCount(flags) - 1 do begin
    child := ElementByIndex(flags, i);
    flagName := Name(child);
    if GetEditValue(child) = '1' then
      AddMessage('    [SET] ' + flagName);
  end;
end;

procedure DumpNPCPackages(formID: Cardinal; tag: string);
var
  ofile, npc, pkgs, pkidElem: IInterface;
  i: Integer;
  pkidVal: string;
  pkidFid: Cardinal;
begin
  ofile := FileByName('Oblivion.esm');
  npc := RecordByFormID(ofile, formID, False);
  if not Assigned(npc) then Exit;
  AddMessage('=== ' + tag + ': ' + IntToHex(formID, 8) + ' ===');
  pkgs := ElementByPath(npc, 'AI Packages');
  for i := 0 to ElementCount(pkgs) - 1 do begin
    pkidElem := ElementByIndex(pkgs, i);
    pkidVal := GetEditValue(pkidElem);
    if Pos('[PACK:', pkidVal) > 0 then begin
      pkidFid := StrToInt('$' + Copy(pkidVal, Pos('[PACK:', pkidVal) + 6, 8));
      DumpPackageFlags(pkidFid and $FFFFFF);
    end;
  end;
  AddMessage('');
end;

function Initialize: integer;
begin
  Result := 0;
  DumpNPCPackages($000700CC, 'CRASHING-VirtueRider');
  DumpNPCPackages($0002FB2B, 'STABLE-AdamusPhillida');
end;

end.
