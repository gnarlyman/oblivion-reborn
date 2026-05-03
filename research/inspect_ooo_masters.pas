{
  inspect_ooo_masters.pas - dump master lists for OOO ESM/ESP

  IMPORTANT: do not place curly braces of any kind inside this block
  comment - JvInterpreter ends the comment at the first close-brace and
  the leftover text reaches the parser as code.
}
unit UserScript;

const
  OUT_PATH = 'C:\Users\mschon\AppData\Local\Temp\qr\ooo_masters.txt';

var
  outLog: TStringList;

procedure DumpMasters(f: IInterface);
var
  i: Integer;
  m: IInterface;
begin
  outLog.Add('=== ' + GetFileName(f) + ' ===');
  outLog.Add('  MasterCount = ' + IntToStr(MasterCount(f)));
  for i := 0 to Pred(MasterCount(f)) do begin
    m := MasterByIndex(f, i);
    if Assigned(m) then
      outLog.Add('    [' + IntToStr(i) + '] ' + GetFileName(m))
    else
      outLog.Add('    [' + IntToStr(i) + '] NIL');
  end;
end;

function Initialize: Integer;
var
  i: Integer;
  f: IInterface;
  fname: string;
begin
  outLog := TStringList.Create;
  for i := 0 to Pred(FileCount) do begin
    f := FileByIndex(i);
    fname := GetFileName(f);
    if (fname = 'Oscuro''s_Oblivion_Overhaul.esm') or
       (fname = 'Oscuro''s_Oblivion_Overhaul.esp') or
       (fname = 'OOOShiveringIsles.esp') or
       (fname = 'Unofficial Oblivion Patch.esp') then
      DumpMasters(f);
  end;
  outLog.SaveToFile(OUT_PATH);
  outLog.Free;
  Result := 0;
end;

end.
