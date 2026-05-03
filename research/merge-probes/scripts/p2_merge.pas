{
  P2 merge: copy NewA + NewB records into MergeNew.esp as NEW records
  (aAsNew=True). The critical question: does MergeChestB's inventory
  reference (which points at NewA's MergeSwordA) get auto-remapped to
  the new local FID of the copied MergeSwordA, or does it stay pointing
  at the original FID (forcing NewA to remain a master)?
}
unit UserScript;

var
  gLog: TStringList;

function GetArg(const key: string): string;
var i: Integer; prefix, s: string;
begin
  Result := '';
  prefix := '--' + key + '=';
  for i := 0 to ParamCount do begin
    s := ParamStr(i);
    if Copy(s, 1, Length(prefix)) = prefix then begin
      Result := Copy(s, Length(prefix) + 1, MaxInt); Exit;
    end;
  end;
end;

function FindFileByName(const name: string): IInterface;
var i: Integer; f: IInterface;
begin
  Result := nil;
  for i := 0 to Pred(FileCount) do begin
    f := FileByIndex(i);
    if SameText(GetFileName(f), name) then begin Result := f; Exit; end;
  end;
end;

function MasterListAsCSV(plugin: IInterface): string;
var hdr, mg, mr: IInterface; i: Integer; sep, nm: string;
begin
  Result := ''; sep := '';
  hdr := ElementByIndex(plugin, 0);
  if not Assigned(hdr) then Exit;
  mg := ElementByPath(hdr, 'Master Files');
  if not Assigned(mg) then Exit;
  for i := 0 to Pred(ElementCount(mg)) do begin
    mr := ElementByIndex(mg, i);
    nm := GetEditValue(ElementByPath(mr, 'MAST'));
    Result := Result + sep + nm; sep := ',';
  end;
end;

procedure CopyAsNew(src, target: IInterface; var copied, errs: Integer);
var
  i, j: Integer;
  group, rec, dst: IInterface;
  sig, recSig, edid, srcFid, dstFid: string;
begin
  for i := 0 to Pred(ElementCount(src)) do begin
    group := ElementByIndex(src, i);
    sig := Signature(group);
    if sig = 'TES4' then Continue;
    for j := 0 to Pred(ElementCount(group)) do begin
      rec := ElementByIndex(group, j);
      recSig := Signature(rec);
      if recSig = '' then Continue;
      edid := EditorID(rec);
      srcFid := IntToHex(GetLoadOrderFormID(rec), 8);
      try
        dst := wbCopyElementToFile(rec, target, True, True);  // aAsNew=True !
        if Assigned(dst) then begin
          Inc(copied);
          dstFid := IntToHex(GetLoadOrderFormID(dst), 8);
          gLog.Add('  COPY-NEW ok sig=' + recSig + ' edid=' + edid +
                  ' src=' + srcFid + ' -> dst=' + dstFid);
        end else begin
          Inc(errs);
          gLog.Add('  COPY-NEW nil sig=' + recSig + ' edid=' + edid + ' src=' + srcFid);
        end;
      except
        on E: Exception do begin
          Inc(errs);
          gLog.Add('  COPY-NEW EXC sig=' + recSig + ' edid=' + edid + ' src=' + srcFid + ' msg=' + E.Message);
        end;
      end;
    end;
  end;
end;

procedure DumpRecordsDetailed(plugin: IInterface);
var
  i, j, k: Integer;
  group, rec, items, item, itemRef: IInterface;
  sig, fid, edid, itemFid, refTarget: string;
begin
  for i := 0 to Pred(ElementCount(plugin)) do begin
    group := ElementByIndex(plugin, i);
    if Signature(group) = 'TES4' then Continue;
    for j := 0 to Pred(ElementCount(group)) do begin
      rec := ElementByIndex(group, j);
      sig := Signature(rec);
      edid := EditorID(rec);
      fid := IntToHex(GetLoadOrderFormID(rec), 8);
      gLog.Add('  REC sig=' + sig + ' edid=' + edid + ' fid=' + fid);
      if sig = 'CONT' then begin
        items := ElementByPath(rec, 'Items');
        if Assigned(items) then begin
          for k := 0 to Pred(ElementCount(items)) do begin
            item := ElementByIndex(items, k);
            try itemFid := IntToHex(GetElementNativeValues(item, 'Item'), 8); except itemFid := 'ERR'; end;
            itemRef := LinksTo(ElementByPath(item, 'Item'));
            if Assigned(itemRef) then
              refTarget := EditorID(itemRef) + ' in ' + GetFileName(GetFile(itemRef))
            else
              refTarget := '<unresolved>';
            gLog.Add('    CNTO Item=' + itemFid + ' -> ' + refTarget);
          end;
        end;
      end;
    end;
  end;
end;

function Initialize: Integer;
var
  outPath: string;
  srcA, srcB, target: IInterface;
  copiedA, copiedB, errsA, errsB, i: Integer;
  fatal: Boolean;
begin
  outPath := GetArg('out');
  gLog := TStringList.Create;
  Result := 0;
  fatal := False;

  gLog.Add('=== P2 copy-as-new probe ===');
  gLog.Add('FileCount=' + IntToStr(FileCount));
  for i := 0 to Pred(FileCount) do
    gLog.Add('  loaded[' + IntToStr(i) + ']=' + GetFileName(FileByIndex(i)));

  srcA := FindFileByName('NewA.esp');
  srcB := FindFileByName('NewB.esp');
  if not Assigned(srcA) then begin gLog.Add('FATAL: NewA.esp not loaded'); fatal := True; Result := 2; end;
  if not Assigned(srcB) then begin gLog.Add('FATAL: NewB.esp not loaded'); fatal := True; Result := 2; end;

  if not fatal then begin
    target := AddNewFileName('MergeNew.esp');
    if not Assigned(target) then begin
      gLog.Add('FATAL: AddNewFileName MergeNew.esp returned nil');
      fatal := True; Result := 3;
    end;
  end;

  if not fatal then begin
    gLog.Add('Created MergeNew.esp, load order=' + IntToStr(GetLoadOrder(target)));
    AddMasterIfMissing(target, 'Master.esm');
    gLog.Add('After Master.esm add, masters=' + MasterListAsCSV(target));

    copiedA := 0; errsA := 0;
    gLog.Add('Copying NewA records as NEW...');
    CopyAsNew(srcA, target, copiedA, errsA);
    gLog.Add('  copied=' + IntToStr(copiedA) + ' errs=' + IntToStr(errsA));
    gLog.Add('After A copy-as-new, masters=' + MasterListAsCSV(target));

    copiedB := 0; errsB := 0;
    gLog.Add('Copying NewB records as NEW...');
    CopyAsNew(srcB, target, copiedB, errsB);
    gLog.Add('  copied=' + IntToStr(copiedB) + ' errs=' + IntToStr(errsB));
    gLog.Add('After B copy-as-new, masters=' + MasterListAsCSV(target));

    gLog.Add('Final dump (look at CNTO Item ref):');
    DumpRecordsDetailed(target);

    gLog.Add('Calling CleanMasters...');
    try
      CleanMasters(target);
      gLog.Add('  CleanMasters ok, masters=' + MasterListAsCSV(target));
    except
      on E: Exception do gLog.Add('  CleanMasters EXC: ' + E.Message);
    end;
  end;

  gLog.SaveToFile(outPath);
  AddMessage('p2_merge done -> ' + outPath);
end;

end.
