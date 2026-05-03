unit REPLSmoke;

interface

implementation

function Initialize: Integer;
begin
  AddMessage('hello from REPL');
  AddMessage('plugin0: ' + GetFileName(FileByIndex(0)));
  AddMessage('FileCount: ' + IntToStr(FileCount));
  Result := 0;
end;

end.
