unit REPLHelpersSmoke;

interface

implementation

function Initialize: Integer;
var
  outPath: string;
  i, n: Integer;
  rec: string;
begin
  AddMessage('opening overrides.jsonl');
  outPath := OpenOutput('overrides.jsonl');
  AddMessage('OpenOutput returned: ' + outPath);

  n := FileCount;
  for i := 0 to n - 1 do begin
    rec := '{"index":' + IntToStr(i) +
           ',"name":"' + GetFileName(FileByIndex(i)) + '"}';
    EmitJSONLine(outPath, rec);
  end;

  AddMessage('wrote ' + IntToStr(n) + ' records');
  WriteSummary('{"records":' + IntToStr(n) + ',"first":"' +
    GetFileName(FileByIndex(0)) + '"}');
  Result := 0;
end;

end.
