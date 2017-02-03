targetno = targetno + 1;
if (targetcount == targetno) then {targetno = 0;};
target = targetlist select targetno;
targetcount = count targetlist;
if (targetcount >= 1) then {((findDisplay 30000) displayCtrl 30003) ctrlSetText call compile format ["'FLIR TGT %1/%2'",(targetno + 1),targetcount];player doTarget target;} else {((findDisplay 30000) displayCtrl 30003) ctrlSetText "NO TGT";};
exit;
