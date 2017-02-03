targetno = 0;
fliron=0;
targetlist = player neartargets 5000;
targetarray = targetlist select targetno;
target = targetarray select 4;
targetcount = count targetlist;
((findDisplay 30000) displayCtrl 40007) ctrlEnable false;
if (targetcount >= 1) then {((findDisplay 30000) displayCtrl 30003) ctrlSetText call compile format ["'TGT %1/%2'",(targetno + 1),targetcount];player doTarget target;((findDisplay 30000) displayCtrl 40004) ctrlEnable true;} else {((findDisplay 30000) displayCtrl 30003) ctrlSetText "NO TGT";((findDisplay 30000) displayCtrl 40004) ctrlEnable false;target=player;};
exit;
