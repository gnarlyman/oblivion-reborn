unit DumpTES4Descriptions;

(*
  Forensic: dump the TES4 file-header description (SNAM subrecord) for
  every plugin whose name matches one of TARGET_PLUGINS. WB reads
  in-file Bash tags from this description as `{{BASH:Tag1, Tag2, ...}}`.
*)

interface

implementation

const
  T1 = 'Cobl Tweaks - OOO.esp';
  T2 = 'Cobl Tweaks - OOO Mergeable.esp';
  T3 = 'Cobl Tweaks - Vanilla.esp';
  T4 = 'Cobl Tweaks - SI.esp';

function JsonEsc(const s: string): string;
begin
  Result := StringReplace(s, '\', '\\', [rfReplaceAll]);
  Result := StringReplace(Result, '"', '\"', [rfReplaceAll]);
  Result := StringReplace(Result, #13#10, '\n', [rfReplaceAll]);
  Result := StringReplace(Result, #10, '\n', [rfReplaceAll]);
  Result := StringReplace(Result, #13, '\n', [rfReplaceAll]);
end;

procedure DumpFile(outPath: string; f: IInterface);
var
  hdr, snam, cnam, mast: IInterface;
  desc, author, line: string;
  i, mc: Integer;
  masters: string;
begin
  hdr := ElementByPath(f, 'TES4');
  if not Assigned(hdr) then begin
    AddMessage('  no TES4 header for ' + GetFileName(f));
    Exit;
  end;
  snam := ElementByPath(hdr, 'SNAM');
  if Assigned(snam) then desc := GetEditValue(snam) else desc := '';
  cnam := ElementByPath(hdr, 'CNAM');
  if Assigned(cnam) then author := GetEditValue(cnam) else author := '';

  masters := '';
  mc := MasterCount(f);
  for i := 0 to mc - 1 do begin
    if i > 0 then masters := masters + '|';
    masters := masters + GetFileName(MasterByIndex(f, i));
  end;

  line := '{"plugin":"' + JsonEsc(GetFileName(f)) + '"' +
          ',"author":"' + JsonEsc(author) + '"' +
          ',"masters":"' + JsonEsc(masters) + '"' +
          ',"desc":"' + JsonEsc(desc) + '"}';
  EmitJSONLine(outPath, line);
end;

function Initialize: Integer;
var
  i: Integer;
  f: IInterface;
  name, outPath: string;
  matches: Integer;
begin
  outPath := OpenOutput('tes4_descriptions.jsonl');
  matches := 0;
  for i := 0 to FileCount - 1 do begin
    f := FileByIndex(i);
    name := GetFileName(f);
    if SameText(name, T1) or SameText(name, T2) or
       SameText(name, T3) or SameText(name, T4) then begin
      AddMessage('match: ' + name);
      DumpFile(outPath, f);
      Inc(matches);
    end;
  end;
  WriteSummary('{"matches":' + IntToStr(matches) + '}');
  AddMessage('matches: ' + IntToStr(matches));
  Result := 0;
end;

end.
