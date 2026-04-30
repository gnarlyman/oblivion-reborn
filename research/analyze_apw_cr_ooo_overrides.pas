unit AnalyzeAPWCROOOOverrides;

// Analyzer for APW - Conflict Resolution.esp.
// Walks every override record, filters to ones that:
//   (a) target a master loaded by current xEdit session (Reborn-OOO masters), AND
//   (b) "touch" OOO (record owned by OOO or references an OOO-owned FormID).
// Emits two CSVs to D:\Modlists\Reborn\research\:
//   apw_cr_ooo_overrides.csv   - long-form, one row per record
//   apw_cr_ooo_patterns.csv    - one row per unique diff_pattern_key
//
// Per feedback_pascal_script_quirks.md:
//   - no nested {} block comments
//   - no s[i] string indexing (use Copy(s, i, 1))
//   - no top-level array vars (use TStringList)
//   - uses-unit resolves from xEdit install dir
//
// Designed to run against APW's MO2 instance (where APW CR + all its
// masters load). Reborn-OOO master set is loaded from a static file
// path so the filter is correct regardless of which session we run in.

const
  OUT_DIR = 'D:\Modlists\Reborn\research\';
  APW_CR_NAME = 'APW - Conflict Resolution.esp';
  REBORN_PLUGINS_TXT = 'D:\Modlists\Reborn\profiles\Reborn-OOO\plugins.txt';
  OOO_MASTERS_CSV = 'Oscuro''s_Oblivion_Overhaul.esm,Oscuro''s_Oblivion_Overhaul.esp,OOOShiveringIsles.esp,Oscuro''s_Oblivion_Overhaul - Knights of Nine.esp,OOOShiveringIsles_Optional_CrucibleEdits.esp,OOO_Unoficial-Patch.esp';

var
  apwCR: IInterface;
  rebornMasters: TStringList;
  oooMasters: TStringList;
  outOverrides: TStringList;
  patternCounts: TStringList;
  patternSamples: TStringList;
  // counters for sanity output
  totalOverrides: Integer;
  inRebornMasters: Integer;
  oooTouching: Integer;
  refMatched: Integer;

function CSVEscape(s: string): string;
begin
  if (Pos(',', s) > 0) or (Pos('"', s) > 0) or (Pos(#10, s) > 0) or (Pos(#13, s) > 0) then
    Result := '"' + StringReplace(s, '"', '""', [rfReplaceAll]) + '"'
  else
    Result := s;
end;

function ElementReferencesOOO(elem: IInterface): Boolean;
var
  i: Integer;
  refRec: IInterface;
  refMaster: IInterface;
  refMasterName: string;
begin
  Result := False;
  if not Assigned(elem) then Exit;
  // Try to follow the reference if this element holds a FormID
  try
    refRec := LinksTo(elem);
    if Assigned(refRec) then begin
      refMaster := MasterOrSelf(refRec);
      if Assigned(refMaster) then begin
        refMasterName := GetFileName(GetFile(refMaster));
        if oooMasters.IndexOf(refMasterName) >= 0 then begin
          Result := True;
          Exit;
        end;
      end;
    end;
  except
    // LinksTo may throw on non-FormID elements; ignore
  end;
  // Recurse into children
  for i := 0 to Pred(ElementCount(elem)) do begin
    if ElementReferencesOOO(ElementByIndex(elem, i)) then begin
      Result := True;
      Exit;
    end;
  end;
end;

function RecordTouchesOOO(e: IInterface; var reason: string): Boolean;
var
  master: IInterface;
  masterName: string;
begin
  Result := False;
  reason := '';
  master := MasterOrSelf(e);
  if Assigned(master) then begin
    masterName := GetFileName(GetFile(master));
    if oooMasters.IndexOf(masterName) >= 0 then begin
      Result := True;
      reason := 'owns_record';
      Exit;
    end;
  end;
  if ElementReferencesOOO(e) then begin
    Result := True;
    reason := 'references_ooo';
    Inc(refMatched);
  end;
end;

function ChangeSummary(e: IInterface): string;
var
  master: IInterface;
  i: Integer;
  child: IInterface;
  masterChild: IInterface;
  diffs: TStringList;
  childSig: string;
begin
  Result := '';
  master := MasterOrSelf(e);
  if not Assigned(master) or Equals(master, e) then Exit;
  diffs := TStringList.Create;
  try
    for i := 0 to Pred(ElementCount(e)) do begin
      child := ElementByIndex(e, i);
      childSig := Signature(child);
      if childSig = '' then begin
        // For non-signature elements (struct fields), use Name
        childSig := Name(child);
        // Truncate to keep summary tight
        if Length(childSig) > 16 then childSig := Copy(childSig, 1, 16);
      end;
      masterChild := nil;
      try
        if Signature(child) <> '' then
          masterChild := ElementBySignature(master, Signature(child));
      except
      end;
      if not Assigned(masterChild) then
        diffs.Add(childSig + '+')
      else if GetEditValue(child) <> GetEditValue(masterChild) then
        diffs.Add(childSig);
    end;
    Result := diffs.CommaText;
    // Truncate long summaries
    if Length(Result) > 200 then Result := Copy(Result, 1, 200) + '...';
  finally
    diffs.Free;
  end;
end;

function DiffPatternKey(e: IInterface; sig: string): string;
var
  master: IInterface;
  i: Integer;
  child: IInterface;
  masterChild: IInterface;
  buf: string;
  childSig: string;
  v1, v2: string;
begin
  Result := sig + '|';
  master := MasterOrSelf(e);
  if not Assigned(master) or Equals(master, e) then begin
    Result := Result + 'NOMASTER';
    Exit;
  end;
  buf := '';
  for i := 0 to Pred(ElementCount(e)) do begin
    child := ElementByIndex(e, i);
    childSig := Signature(child);
    if childSig = '' then childSig := Name(child);
    masterChild := nil;
    try
      if Signature(child) <> '' then
        masterChild := ElementBySignature(master, Signature(child));
    except
    end;
    if not Assigned(masterChild) then begin
      buf := buf + childSig + ':+;';
    end else begin
      v1 := GetEditValue(child);
      v2 := GetEditValue(masterChild);
      if v1 <> v2 then begin
        // Strict: include actual old/new values in the key.
        // Truncate long values to keep keys reasonable.
        if Length(v1) > 32 then v1 := Copy(v1, 1, 32);
        if Length(v2) > 32 then v2 := Copy(v2, 1, 32);
        buf := buf + childSig + ':' + v2 + '->' + v1 + ';';
      end;
    end;
  end;
  Result := Result + buf;
  // Cap final key length
  if Length(Result) > 256 then Result := Copy(Result, 1, 256);
end;

function Recommend(sig: string): string;
begin
  if (sig = 'LVLI') or (sig = 'LVLC') or (sig = 'CONT') or (sig = 'FACT') then
    Result := 'merge'
  else if (sig = 'SCPT') or (sig = 'QUST') then
    Result := 'review'
  else
    Result := 'review';
end;

function DriftStatus(e: IInterface): string;
var
  master: IInterface;
begin
  Result := 'present';
  master := MasterOrSelf(e);
  if not Assigned(master) then begin
    Result := 'unknown';
    Exit;
  end;
  // For now always 'present' since the master exists in the load order.
  // Real drift detection (master record content has changed since APW CR was authored)
  // requires comparing field values - deferred.
  Result := 'present';
end;

procedure EmitRow(e: IInterface; touchReason: string);
var
  fid: string;
  sig: string;
  edid: string;
  fname: string;
  master: IInterface;
  masterName: string;
  summary: string;
  patKey: string;
  drift: string;
  rec: string;
  countIdx: Integer;
  curCount: Integer;
begin
  fid := IntToHex(FormID(e), 8);
  sig := Signature(e);
  edid := EditorID(e);
  fname := Name(e);
  master := MasterOrSelf(e);
  masterName := '';
  if Assigned(master) then masterName := GetFileName(GetFile(master));
  summary := ChangeSummary(e);
  patKey := DiffPatternKey(e, sig);
  drift := DriftStatus(e);
  rec := Recommend(sig);

  outOverrides.Add(
    fid + ',' +
    CSVEscape(masterName) + ',' +
    sig + ',' +
    CSVEscape(edid) + ',' +
    CSVEscape(fname) + ',' +
    CSVEscape(summary) + ',' +
    CSVEscape(patKey) + ',' +
    touchReason + ',' +
    drift + ',' +
    rec
  );

  // Pattern aggregation
  countIdx := patternCounts.IndexOfName(patKey);
  if countIdx < 0 then begin
    patternCounts.Add(patKey + '=1');
    patternSamples.Add(patKey + '=' + fid + '|' + masterName + '|' + sig + '|' + CSVEscape(summary));
  end else begin
    curCount := StrToIntDef(patternCounts.ValueFromIndex[countIdx], 0);
    patternCounts[countIdx] := patKey + '=' + IntToStr(curCount + 1);
  end;
end;

procedure WalkRecords(e: IInterface);
var
  i: Integer;
  master: IInterface;
  masterName: string;
  touchReason: string;
begin
  if not Assigned(e) then Exit;
  if (Signature(e) <> '') and (IsMaster(e) = False) then begin
    Inc(totalOverrides);
    master := MasterOrSelf(e);
    if Assigned(master) then begin
      masterName := GetFileName(GetFile(master));
      if rebornMasters.IndexOf(masterName) >= 0 then begin
        Inc(inRebornMasters);
        if RecordTouchesOOO(e, touchReason) then begin
          Inc(oooTouching);
          EmitRow(e, touchReason);
        end;
      end;
    end;
  end;
  for i := 0 to Pred(ElementCount(e)) do
    WalkRecords(ElementByIndex(e, i));
end;

procedure LoadRebornMasters;
var
  raw: TStringList;
  i: Integer;
  line: string;
begin
  raw := TStringList.Create;
  try
    raw.LoadFromFile(REBORN_PLUGINS_TXT);
    for i := 0 to Pred(raw.Count) do begin
      line := Trim(raw[i]);
      // Skip comments, empty lines, and MO2 disabled markers
      if (line = '') or (Copy(line, 1, 1) = '#') or (Copy(line, 1, 1) = '*') then
        Continue;
      // MO2 prefixes disabled plugins with '-' or '#'; enabled have no prefix in plugins.txt
      rebornMasters.Add(line);
    end;
  finally
    raw.Free;
  end;
end;

function Initialize: Integer;
var
  i: Integer;
  f: IInterface;
  fname: string;
begin
  apwCR := nil;
  totalOverrides := 0;
  inRebornMasters := 0;
  oooTouching := 0;
  refMatched := 0;

  rebornMasters := TStringList.Create;
  oooMasters := TStringList.Create;
  oooMasters.CommaText := OOO_MASTERS_CSV;

  outOverrides := TStringList.Create;
  outOverrides.Add('target_fid,target_master,signature,editor_id,record_name,change_summary,diff_pattern_key,ooo_touch_reason,target_record_in_current_ooo,recommend');

  patternCounts := TStringList.Create;
  patternSamples := TStringList.Create;

  // Load Reborn-OOO master set from its plugins.txt (we may be running in
  // APW's xEdit session, so FileCount would give us APW masters).
  try
    LoadRebornMasters;
  except
    AddMessage('ERROR: failed to load ' + REBORN_PLUGINS_TXT);
    Result := 1;
    Exit;
  end;

  // Find APW CR ESP in the current xEdit session
  for i := 0 to Pred(FileCount) do begin
    f := FileByIndex(i);
    fname := GetFileName(f);
    if fname = APW_CR_NAME then begin
      apwCR := f;
      Break;
    end;
  end;

  if not Assigned(apwCR) then begin
    AddMessage('ERROR: ' + APW_CR_NAME + ' not loaded in this xEdit session.');
    Result := 1;
    Exit;
  end;

  // Vanilla Oblivion.esm is always loaded; add it explicitly to rebornMasters
  // in case plugins.txt formatting omitted it (some MO2 setups don't write it).
  if rebornMasters.IndexOf('Oblivion.esm') < 0 then
    rebornMasters.Insert(0, 'Oblivion.esm');

  AddMessage('Reborn masters loaded from plugins.txt: ' + IntToStr(rebornMasters.Count));
  AddMessage('OOO masters tracked: ' + IntToStr(oooMasters.Count));
  AddMessage('Walking ' + APW_CR_NAME + '...');
  Result := 0;
end;

function Process(e: IInterface): Integer;
begin
  // Apply Script per-file mode is not used here; we walk from Finalize.
  Result := 0;
end;

function Finalize: Integer;
var
  patterns: TStringList;
  i: Integer;
  pkey: string;
  pcount: string;
  psample: string;
begin
  WalkRecords(apwCR);

  AddMessage('---');
  AddMessage('totalOverrides: ' + IntToStr(totalOverrides));
  AddMessage('inRebornMasters: ' + IntToStr(inRebornMasters));
  AddMessage('oooTouching: ' + IntToStr(oooTouching));
  AddMessage('refMatched (subset of oooTouching, found via reference): ' + IntToStr(refMatched));
  AddMessage('Unique pattern keys: ' + IntToStr(patternCounts.Count));

  outOverrides.SaveToFile(OUT_DIR + 'apw_cr_ooo_overrides.csv');
  AddMessage('Wrote: ' + OUT_DIR + 'apw_cr_ooo_overrides.csv');

  patterns := TStringList.Create;
  patterns.Add('diff_pattern_key,count,sample_target_fid,sample_target_master,sample_signature,sample_change_summary');
  for i := 0 to Pred(patternCounts.Count) do begin
    pkey := patternCounts.Names[i];
    pcount := patternCounts.ValueFromIndex[i];
    psample := patternSamples.Values[pkey];
    patterns.Add(CSVEscape(pkey) + ',' + pcount + ',' + psample);
  end;
  patterns.SaveToFile(OUT_DIR + 'apw_cr_ooo_patterns.csv');
  AddMessage('Wrote: ' + OUT_DIR + 'apw_cr_ooo_patterns.csv');
  patterns.Free;

  rebornMasters.Free;
  oooMasters.Free;
  outOverrides.Free;
  patternCounts.Free;
  patternSamples.Free;

  Result := 0;
end;

end.
