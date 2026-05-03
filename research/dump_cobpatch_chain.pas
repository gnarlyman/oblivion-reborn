unit DumpCobPatchChain;

(*
  Forensic: dump the cobPatchOOOQS SCPT override chain as JSONL.
  One row per chain link with plugin, EDID, SCDA byte length, SCDA hex.

  cobPatchOOOQS lives in Cobl Main.esm. Memory + prior dumps put its
  master FormID at 02003251 in load orders where Cobl Main.esm is at LO
  index 02. We resolve via RecordByHexFormID on the LO-style FID; if the
  load order has shifted, fall back to a scan over Files for any plugin
  whose name matches "Cobl Main.esm" and locate by EDID linear-search.
*)

interface

implementation

const
  TARGET_FID_HEX = '02003251';
  TARGET_EDID    = 'cobPatchOOOQS';

function JsonEsc(const s: string): string;
begin
  Result := StringReplace(s, '\', '\\', [rfReplaceAll]);
  Result := StringReplace(Result, '"', '\"', [rfReplaceAll]);
end;

function FindByEdidScan: IInterface;
var
  i, j: Integer;
  f, rec: IInterface;
begin
  Result := nil;
  for i := 0 to FileCount - 1 do begin
    f := FileByIndex(i);
    if SameText(GetFileName(f), 'Cobl Main.esm') then begin
      for j := 0 to RecordCount(f) - 1 do begin
        rec := RecordByIndex(f, j);
        if Signature(rec) = 'SCPT' then begin
          if SameText(EditorID(rec), TARGET_EDID) then begin
            Result := rec;
            Exit;
          end;
        end;
      end;
    end;
  end;
end;

procedure DumpLink(outPath: string; link: IInterface; isMaster: Boolean);
var
  scda: IInterface;
  scdaHex, line, isMasterStr: string;
  scdaLen: Integer;
begin
  scda := ElementByPath(link, 'SCDA');
  if Assigned(scda) then begin
    scdaHex := GetEditValue(scda);
    scdaLen := Length(scdaHex) div 2;
  end else begin
    scdaHex := '';
    scdaLen := 0;
  end;
  if isMaster then isMasterStr := 'true' else isMasterStr := 'false';
  line := '{"plugin":"' + JsonEsc(GetFileName(GetFile(link))) + '"' +
          ',"is_master":' + isMasterStr +
          ',"edid":"' + JsonEsc(EditorID(link)) + '"' +
          ',"sig":"' + JsonEsc(Signature(link)) + '"' +
          ',"scda_len":' + IntToStr(scdaLen) +
          ',"scda_hex":"' + scdaHex + '"}';
  EmitJSONLine(outPath, line);
end;

function Initialize: Integer;
var
  master, override: IInterface;
  outPath, summary: string;
  i, n: Integer;
begin
  master := FindByEdidScan;
  if not Assigned(master) then begin
    AddMessage('FATAL: cobPatchOOOQS not found in Cobl Main.esm');
    Result := 1;
    Exit;
  end;
  master := MasterOrSelf(master);

  outPath := OpenOutput('cobpatch_scda_chain.jsonl');
  AddMessage('master: ' + GetFileName(GetFile(master)) + ' / ' + EditorID(master));
  AddMessage('writing chain to: ' + outPath);

  DumpLink(outPath, master, True);
  n := OverrideCount(master);
  AddMessage('overrides: ' + IntToStr(n));
  for i := 0 to n - 1 do begin
    override := OverrideByIndex(master, i);
    DumpLink(outPath, override, False);
  end;

  summary := '{"target_fid":"' + TARGET_FID_HEX +
             '","master_plugin":"' + JsonEsc(GetFileName(GetFile(master))) +
             '","overrides":' + IntToStr(n) + '}';
  WriteSummary(summary);
  Result := 0;
end;

end.
