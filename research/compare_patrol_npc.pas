{
  Compare ALL 17 mounted riders + several control NPCs.
  Checking: Quest Item flag, LNAM (hair length), HCLR.
}
unit UserScript;

procedure GetField(npc: IInterface; path: string; var v: string);
var e: IInterface;
begin
  e := ElementByPath(npc, path);
  if Assigned(e) then v := GetEditValue(e) else v := '?';
end;

procedure SummarizeNPC(formID: Cardinal);
var
  npc: IInterface;
  ofile: IInterface;
  ed, qi, lnam, hclrR, hclrG, hclrB, cls, race: string;
begin
  ofile := FileByName('Oblivion.esm');
  npc := RecordByFormID(ofile, formID, False);
  if not Assigned(npc) then Exit;
  ed := EditorID(npc);
  GetField(npc, 'Record Header\Record Flags\Quest Item', qi);
  GetField(npc, 'LNAM', lnam);
  GetField(npc, 'HCLR\Red', hclrR);
  GetField(npc, 'HCLR\Green', hclrG);
  GetField(npc, 'HCLR\Blue', hclrB);
  GetField(npc, 'CNAM', cls);
  GetField(npc, 'RNAM', race);
  if cls <> '?' then cls := Copy(cls, 1, 18);
  if race <> '?' then race := Copy(race, 1, 12);
  AddMessage(Format('  %08x QI=%s LNAM=%s HCLR=%s/%s/%s race=%s class=%s  %s',
    [formID, qi, lnam, hclrR, hclrG, hclrB, race, cls, ed]));
end;

function Initialize: integer;
begin
  Result := 0;
  AddMessage('=== 17 Mounted Imperial Legion Riders ===');
  SummarizeNPC($000700C0);
  SummarizeNPC($000700C1);
  SummarizeNPC($000700C2);
  SummarizeNPC($000700C3);
  SummarizeNPC($000700C4);
  SummarizeNPC($000700C5);
  SummarizeNPC($000700C6);
  SummarizeNPC($000700C7);
  SummarizeNPC($000700C8);
  SummarizeNPC($000700C9);
  SummarizeNPC($000700CA);
  SummarizeNPC($000700CB);
  SummarizeNPC($000700CC);
  SummarizeNPC($000700CD);
  SummarizeNPC($0018BA86);
  SummarizeNPC($0018BA88);
  SummarizeNPC($0018BA89);
  AddMessage('');
  AddMessage('=== Controls (non-crashing NPCs) ===');
  SummarizeNPC($0002FB2B);  // AdamusPhillida (Guard, Imperial)
  SummarizeNPC($0000A27E);  // Wilbur (Publican, Redguard)
  // Random other guards from the LegionForester* range
  SummarizeNPC($000C58CB);  // ICGuardImperialLegion (some IC guard)
  SummarizeNPC($000C5921);  // another IC guard
  SummarizeNPC($000034BD);  // Captain Renault main quest
  SummarizeNPC($000B9A85);  // Janus Hassildor
end;

end.
