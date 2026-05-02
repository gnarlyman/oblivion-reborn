unit ReplMutationProbe;

{
  Phase 4 mutation test: drive xEdit's plugin-save path
  (TFileStream + FileWriteToStream — same pattern Build/Edit Scripts/SaveAs.pas
  uses) and verify the bytes land in scratch instead of real Stock Game/Data.

  Picks a small existing plugin by name, serializes it to a new filename
  inside virtual wbDataPath, and reports both paths in the result envelope.
  The agent then compares scratch vs. real Data to confirm redirection.
}

interface

implementation

function Initialize: Integer;
var
  src: IwbFile;
  fs: TFileStream;
  outName, outPath, srcName, summary: string;
begin
  srcName := 'WorldMapsForAllWorldspaces.esp';
  src := FileByName(srcName);
  if not Assigned(src) then begin
    AddMessage('FATAL: source plugin not in load order: ' + srcName);
    Result := 1;
    Exit;
  end;
  AddMessage('source plugin: ' + GetFileName(src));

  outName := 'mutation-probe.esp';
  outPath := wbDataPath + outName;
  AddMessage('virtual save target: ' + outPath);

  fs := TFileStream.Create(outPath, fmCreate);
  try
    // 3rd arg: 0 = rmNo (don't reset modified flag). Saves bytes; pure copy.
    FileWriteToStream(src, fs, 0);
  finally
    fs.Free;
  end;
  AddMessage('save complete (' + outName + '); scratch should now contain it');

  summary := '{"src_name":"' + srcName +
    '","virtual_target":"' + StringReplace(outPath, '\', '\\', [rfReplaceAll]) +
    '"}';
  WriteSummary(summary);
  Result := 0;
end;

end.
