unit ReplEdidProbe;

(* List the first 10 non-empty EDIDs in Oblivion.esm so we can pick a
   stable example to seed dump_record_full.pas with. *)

interface

implementation

function Initialize: Integer;
var
  i, found: Integer;
  f, rec: IInterface;
  edid: string;
begin
  f := FileByName('Oblivion.esm');
  if not Assigned(f) then begin
    AddMessage('FATAL: Oblivion.esm not loaded');
    Result := 1;
    Exit;
  end;

  found := 0;
  for i := 0 to RecordCount(f) - 1 do begin
    rec := RecordByIndex(f, i);
    if Signature(rec) = '' then Continue;
    edid := EditorID(rec);
    if edid = '' then Continue;
    AddMessage('[' + IntToHex(GetLoadOrderFormID(rec), 8) + '] ' +
      Signature(rec) + ' ' + edid);
    Inc(found);
    if found >= 10 then Break;
  end;
  WriteSummary('{"found":' + IntToStr(found) + '}');
  Result := 0;
end;

end.
