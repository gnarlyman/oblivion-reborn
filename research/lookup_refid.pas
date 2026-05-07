{
  Look up specific formIDs from the latest crash.
}
unit UserScript;

procedure Lookup(formID: Cardinal);
var
  ofile, rec: IInterface;
  i: Integer;
begin
  for i := 0 to FileCount - 1 do begin
    ofile := FileByIndex(i);
    rec := RecordByFormID(ofile, formID, False);
    if Assigned(rec) then begin
      AddMessage(IntToHex(formID, 8) + ' = ' + Signature(rec) + ' ' + EditorID(rec) + ' [in ' + GetFileName(GetFile(rec)) + ']');
      Exit;
    end;
  end;
  AddMessage(IntToHex(formID, 8) + ' = NOT FOUND');
end;

function Initialize: integer;
begin
  Result := 0;
  Lookup($386FDF7D);
  Lookup($386FDF7C);
  Lookup($386FDF7E);
  Lookup($00000A31);
end;

end.
