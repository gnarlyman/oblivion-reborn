{
  Strip the 7 DLC SCPT overrides from PSMQD - Delay DLC Start Patch.esp
  but keep PSCharactergenStartingEquipmentScript (which has the only
  edit we still want — the IsModLoaded "Delay DLC Start.esp" guard).

  After this runs the BP rebuild will pick up the load-order winner
  before PSMQD for each DLC script, which is either the vanilla form
  with the original CharacterGen >= 88 gate or an Unofficial / OOO
  Enhanced override that keeps the same gate. With alt-start, vanilla
  CharacterGen never reaches 88, so the per-DLC self-start path stays
  dormant. Delay DLC Start's DelayDLCStartCM quest then drives all
  starts via its INI conditions.
}
unit UserScript;

const
  TARGET_PLUGIN = 'PSMQD - Delay DLC Start Patch.esp';
  KEEP_EDID     = 'PSCharactergenStartingEquipmentScript';

function FindFileByName(const name: string): IInterface;
var
  i: Integer;
  f: IInterface;
begin
  Result := nil;
  for i := 0 to Pred(FileCount) do begin
    f := FileByIndex(i);
    if SameText(GetFileName(f), name) then begin
      Result := f;
      Exit;
    end;
  end;
end;

function Initialize: Integer;
var
  f, grp, rec: IInterface;
  i, j, removed, kept, scanned: Integer;
  edid, sig: string;
begin
  f := FindFileByName(TARGET_PLUGIN);
  if not Assigned(f) then begin
    AddMessage('ERROR: not loaded: ' + TARGET_PLUGIN);
    Result := 1;
    Exit;
  end;

  removed := 0;
  kept    := 0;
  scanned := 0;

  for i := Pred(ElementCount(f)) downto 0 do begin
    grp := ElementByIndex(f, i);
    if Signature(grp) <> 'GRUP' then Continue;
    for j := Pred(ElementCount(grp)) downto 0 do begin
      rec := ElementByIndex(grp, j);
      sig := Signature(rec);
      if sig <> 'SCPT' then Continue;
      Inc(scanned);
      edid := GetElementEditValues(rec, 'EDID');
      if SameText(edid, KEEP_EDID) then begin
        AddMessage('KEEP   ' + sig + ' ' + edid);
        Inc(kept);
      end
      else begin
        AddMessage('REMOVE ' + sig + ' ' + edid);
        Remove(rec);
        Inc(removed);
      end;
    end;
  end;

  AddMessage('--- summary ---');
  AddMessage('scanned: ' + IntToStr(scanned));
  AddMessage('kept:    ' + IntToStr(kept));
  AddMessage('removed: ' + IntToStr(removed));

  // Mark dirty so xEdit saves the .esp on clean exit.
  if removed > 0 then begin
    MarkModifiedRecursive(f);
    AddMessage('marked file modified; xEdit will save on exit');
  end;

  EmitJSONLine(
    'D:\Modlists\Reborn\research\dlc_audit\_psmqd_strip_done.json',
    '{"scanned":' + IntToStr(scanned)
    + ',"kept":' + IntToStr(kept)
    + ',"removed":' + IntToStr(removed) + '}');

  Result := 0;
end;

end.
