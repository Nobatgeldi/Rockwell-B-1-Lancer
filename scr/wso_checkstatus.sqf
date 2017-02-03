//[vehicle, position, unit]
viewmode = 0;
miscam = false;
mistarget = player;
target = player;
_changer = 0;
wc_target1=player;
wc_target2=player;
wc_target3=player;
wc_target4=player;
wc_target5=player;
wc_target6=player;
wc_target7=player;
wc_target8=player;
wc_target9=player;
wc_target10=player;

sleep 2;
while {vehicle player iskindof "b1b"} do {
	if (((alive mistarget) AND (miscam)) AND !(mistarget==player) AND (dialog)) then {viewmode = 1;_changer=1};
	if (!(target==player) AND !(viewmode==1) AND (dialog)) then {viewmode = 2;_changer=1};
	if (_changer==0) then {viewmode=0};
	_changer=0;
	sleep 0.01;
};
exit;