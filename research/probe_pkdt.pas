{
  Probe PKDT subrecord bytes for ImperialLegionRiderVirtue1 (00070120),
  which has Use Horse + Must Reach Location set, type Travel.
}
unit UserScript;

function Initialize: integer;
var
  ofile, pkg, pkdt, e: IInterface;
  i: Integer;
  hex: string;
  bytes: string;
begin
  Result := 0;
  ofile := FileByName('Oblivion.esm');
  pkg := RecordByFormID(ofile, $00070120, False);
  pkdt := ElementByPath(pkg, 'PKDT');
  AddMessage('PKDT element: ' + Name(pkdt));
  AddMessage('  child count: ' + IntToStr(ElementCount(pkdt)));

  // Iterate child elements
  for i := 0 to ElementCount(pkdt) - 1 do begin
    e := ElementByIndex(pkdt, i);
    AddMessage('  child[' + IntToStr(i) + '] ' + Name(e) + ' = ' + GetEditValue(e));
  end;
end;

end.
