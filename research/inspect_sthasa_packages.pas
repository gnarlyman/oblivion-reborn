{
  inspect_sthasa_packages.pas v2

  Walks every loaded file looking for Sthasa NPC. For each match (master
  or override), enumerates the PKID array (one PKID per package slot)
  and shows the value + tries to resolve via LinksTo.

  IMPORTANT: do not place curly braces of any kind inside this block
  comment - JvInterpreter ends the comment at the first close-brace and
  the leftover text reaches the parser as code.
}
unit UserScript;

const
  TARGET_EDID = 'Sthasa';
  OUT_PATH = 'C:\Users\mschon\AppData\Local\Temp\qr\sthasa_packages.txt';

var
  outLog: TStringList;

procedure DumpPackageRef(elem: IInterface; pkidIndex: Integer);
var
  cval: string;
  linked: IInterface;
begin
  cval := '';
  try
    cval := GetEditValue(elem);
  except
  end;
  outLog.Add('  PKID[' + IntToStr(pkidIndex) + '] edit=' + Chr(34) + cval + Chr(34) +
             ' name=' + Chr(34) + Name(elem) + Chr(34));
  try
    linked := LinksTo(elem);
    if Assigned(linked) then
      outLog.Add('    linksTo=' + GetFileName(GetFile(linked)) + ' / ' + EditorID(linked) +
                 ' [' + Signature(linked) + ']' +
                 ' lo_fid=' + IntToHex(GetLoadOrderFormID(linked), 8))
    else
      outLog.Add('    linksTo=NIL');
  except
    outLog.Add('    linksTo=EXCEPTION');
  end;
end;

procedure DumpRecordPackages(rec: IInterface; const linkLabel: string);
var
  i, k: Integer;
  child, grandChild: IInterface;
  pkidArrayFound: Boolean;
begin
  outLog.Add('--- ' + linkLabel + ' (FormID ' + IntToHex(GetLoadOrderFormID(rec), 8) + ') ---');
  pkidArrayFound := False;
  for i := 0 to Pred(ElementCount(rec)) do begin
    child := ElementByIndex(rec, i);
    // PKID is the array container ("AI Packages"); its children are the refs
    if Signature(child) = 'PKID' then begin
      pkidArrayFound := True;
      outLog.Add('  PKID array, ' + IntToStr(ElementCount(child)) + ' entries:');
      for k := 0 to Pred(ElementCount(child)) do begin
        grandChild := ElementByIndex(child, k);
        DumpPackageRef(grandChild, k);
      end;
    end;
  end;
  if not pkidArrayFound then
    outLog.Add('  (no PKID array found)');
end;

function Initialize: Integer;
var
  i, j: Integer;
  f, rec: IInterface;
begin
  outLog := TStringList.Create;
  outLog.Add('Loaded files: ' + IntToStr(FileCount));
  for i := 0 to Pred(FileCount) do begin
    f := FileByIndex(i);
    for j := 0 to Pred(RecordCount(f)) do begin
      rec := RecordByIndex(f, j);
      if (Signature(rec) = 'NPC_') and (EditorID(rec) = TARGET_EDID) then begin
        DumpRecordPackages(rec, GetFileName(f));
      end;
    end;
  end;
  outLog.SaveToFile(OUT_PATH);
  outLog.Free;
  Result := 0;
end;

end.
