unit ReplPointQuery;

{ Trivial point query: cheapest meaningful work — read a wb global, emit a
  summary. Used by repl_perf_smoke.py to measure the warm per-script floor
  after cold boot is amortized. }

interface

implementation

function Initialize: Integer;
begin
  WriteSummary('{"file_count":' + IntToStr(FileCount) + '}');
  Result := 0;
end;

end.
