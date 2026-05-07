{
  Dump MOONpc base record + a few neighboring MOO templates.
}
unit UserScript;

procedure DumpRecursive(elem: IInterface; indent: Integer);
var
  i: Integer;
  child: IInterface;
  pad: string;
  sig: string;
  val: string;
begin
  pad := '';
  for i := 0 to indent - 1 do pad := pad + '  ';
  sig := Name(elem);
  val := GetEditValue(elem);
  if Length(val) > 120 then val := Copy(val, 1, 120) + '...';
  AddMessage(pad + sig + ' = ' + val);
  if ElementCount(elem) > 0 then begin
    for i := 0 to ElementCount(elem) - 1 do begin
      child := ElementByIndex(elem, i);
      DumpRecursive(child, indent + 1);
    end;
  end;
end;

procedure DumpFormID(formID: Cardinal);
var
  ofile, rec: IInterface;
  i: Integer;
begin
  for i := 0 to FileCount - 1 do begin
    ofile := FileByIndex(i);
    rec := RecordByFormID(ofile, formID, False);
    if Assigned(rec) then begin
      AddMessage('==================================================');
      AddMessage('=== ' + IntToHex(formID, 8) + ' ' + Signature(rec) + ' ' + EditorID(rec) + ' ===');
      AddMessage('==================================================');
      DumpRecursive(rec, 0);
      AddMessage('');
      Exit;
    end;
  end;
  AddMessage(IntToHex(formID, 8) + ' NOT FOUND');
end;

function Initialize: integer;
begin
  Result := 0;
  DumpFormID($386FDF7C);  // MOONpc (NPC_ base)
  DumpFormID($386FDF7D);  // MOOCellNpc (ACHR placement)
end;

end.
