unit DumpRecordFull;

(*
  REPL example: walk the override chain of a single record (identified by
  load-order FormID, hex) and emit one JSONL row per chain link, with
  every top-level subrecord's edit value at that link.

  Why FormID and not EditorID: RecordByHexFormID is an O(1) hash lookup
  that always works. RecordByEditorID needs the file's editor-id index,
  which xEdit only builds for record defs flagged with dfIndexEditorID
  (or globally when wbTrackAllEditorID = True; that's not the default).
  FormIDs are stable across plugin versions; EDIDs are not always indexed.

  Parameter-passing convention for REPL scripts: agent string-substitutes
  TARGET_FID_HEX below before submitting source. (No protocol-level param
  channel exists; this is the recommended pattern. See README.md.)

  Output: <output-dir>\record_chain.jsonl — one row per chain link with:
    plugin, is_master (bool), edid, signature, subrecords (map of
    signature -> edit value, both strings).

  Summary: target FormID + edid + chain_links count.

  Comment style is paren-star because JvInterpreter terminates brace
  comments at the first close-brace, including JSON examples.
*)

interface

implementation

const
  TARGET_FID_HEX = '00000007';   // Player (NPC_) in Oblivion.esm; agent overrides
  MAX_VALUE_LEN  = 4096;

function JsonEsc(const s: string): string;
begin
  Result := StringReplace(s,      '\', '\\',   [rfReplaceAll]);
  Result := StringReplace(Result, '"', '\"',   [rfReplaceAll]);
  Result := StringReplace(Result, #13#10, '\n',[rfReplaceAll]);
  Result := StringReplace(Result, #10, '\n',   [rfReplaceAll]);
  Result := StringReplace(Result, #9,  '\t',   [rfReplaceAll]);
end;

function SafeEditValue(elem: IInterface): string;
begin
  Result := '';
  try
    Result := GetEditValue(elem);
  except
    Result := '<EXCEPTION>';
  end;
  if Length(Result) > MAX_VALUE_LEN then
    Result := Copy(Result, 1, MAX_VALUE_LEN) + '...<truncated>';
end;

function SubrecordsAsJson(rec: IInterface): string;
var
  i: Integer;
  child: IInterface;
  sig, val, comma: string;
begin
  Result := '{';
  for i := 0 to ElementCount(rec) - 1 do begin
    child := ElementByIndex(rec, i);
    sig := Signature(child);
    if sig = '' then sig := Name(child);
    val := SafeEditValue(child);
    if i > 0 then comma := ',' else comma := '';
    Result := Result + comma + '"' + JsonEsc(sig) + '":"' + JsonEsc(val) + '"';
  end;
  Result := Result + '}';
end;

function EmitChainLink(outPath: string; link: IInterface; isMaster: Boolean;
  edid: string): Boolean;
var
  line: string;
  isMasterStr: string;
begin
  if isMaster then isMasterStr := 'true' else isMasterStr := 'false';
  line := '{"plugin":"' + JsonEsc(GetFileName(GetFile(link))) +
          '","is_master":' + isMasterStr +
          ',"edid":"' + JsonEsc(edid) +
          '","signature":"' + JsonEsc(Signature(link)) +
          '","subrecords":' + SubrecordsAsJson(link) + '}';
  EmitJSONLine(outPath, line);
  Result := True;
end;

function Initialize: Integer;
var
  master, override: IInterface;
  outPath, edid, summary: string;
  i, numOverrides, chainLinks: Integer;
begin
  master := RecordByHexFormID(TARGET_FID_HEX);
  if not Assigned(master) then begin
    AddMessage('FATAL: FormID ' + TARGET_FID_HEX + ' not found in load order');
    Result := 1;
    Exit;
  end;
  // RecordByHexFormID returns the master directly when the FID's file byte
  // points at the master's file; for safety, walk to MasterOrSelf anyway.
  master := MasterOrSelf(master);
  edid := EditorID(master);

  outPath := OpenOutput('record_chain.jsonl');
  AddMessage('target: ' + GetFileName(GetFile(master)) +
    '#' + TARGET_FID_HEX + ' (' + edid + ')');
  AddMessage('writing chain to: ' + outPath);

  EmitChainLink(outPath, master, True, edid);
  chainLinks := 1;

  numOverrides := OverrideCount(master);
  for i := 0 to numOverrides - 1 do begin
    override := OverrideByIndex(master, i);
    EmitChainLink(outPath, override, False, edid);
    Inc(chainLinks);
  end;

  AddMessage('chain links emitted: ' + IntToStr(chainLinks));

  summary := '{"target_fid":"' + JsonEsc(TARGET_FID_HEX) +
    '","edid":"' + JsonEsc(edid) +
    '","plugin":"' + JsonEsc(GetFileName(GetFile(master))) +
    '","chain_links":' + IntToStr(chainLinks) + '}';
  WriteSummary(summary);
  Result := 0;
end;

end.
