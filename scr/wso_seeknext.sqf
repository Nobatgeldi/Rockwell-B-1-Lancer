targetno = targetno + 1;
if (targetcount == targetno) then {targetno = 0;};
targetarray = targetlist select targetno;
target = targetarray select 4;
targetcount = count targetlist;
if (targetcount >= 1) then {((findDisplay 30000) displayCtrl 30003) ctrlSetText call compile format ["'TGT %1/%2'",(targetno + 1),targetcount];player doTarget target;} else {((findDisplay 30000) displayCtrl 30003) ctrlSetText "NO TGT";};
exit;
