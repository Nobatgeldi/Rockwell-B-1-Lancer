targetno=0;
fliron=1;
targetlist = nearestObjects [player, ["Man","SeaGull","Hawk"], 5000];
target = targetlist select targetno;
targetcount = count targetlist;
((findDisplay 30000) displayCtrl 40004) ctrlEnable false;
if (targetcount >= 1) then {((findDisplay 30000) displayCtrl 30003) ctrlSetText call compile format ["'FLIR TGT %1/%2'",(targetno + 1),targetcount];player doTarget target;((findDisplay 30000) displayCtrl 40007) ctrlEnable true;} else {((findDisplay 30000) displayCtrl 30003) ctrlSetText "NO TGT";((findDisplay 30000) displayCtrl 40007) ctrlEnable false;};
exit;
