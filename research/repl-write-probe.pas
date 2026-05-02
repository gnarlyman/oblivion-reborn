unit ReplWriteProbe;

interface

implementation

function Initialize: Integer;
var
  sl: TStringList;
  probePath, payload: string;
begin
  probePath := wbDataPath + 'usvfs-write-probe.txt';
  payload := 'hello-from-xedit-via-usvfs';
  AddMessage('virtual write target: ' + probePath);
  AddMessage('payload: ' + payload);

  sl := TStringList.Create;
  try
    sl.Add(payload);
    sl.SaveToFile(probePath);
  finally
    sl.Free;
  end;

  AddMessage('write completed');
  WriteSummary('{"probe_path":"' + StringReplace(probePath, '\', '\\', [rfReplaceAll]) +
    '","payload":"' + payload + '"}');
  Result := 0;
end;

end.
