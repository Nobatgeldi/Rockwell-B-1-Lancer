//[vehicle, position, unit]
sleep 0.5;
	inittime = daytime;
	miscam=false;
	mistarget=player;
	target=player;
	zoomlvl=0;
	fliron = 0;
	0 setovercast (random 0.8);
	_fov = 0.226;
	skiptime (-daytime);
	showcinemaborder false;
	setaperture 0.02;
	0 fadesound 0;
	titleRsc ["TVOverlay","plain"];
	CheckStatus = [] execVM "\b1b\scr\wso_checkstatus.sqf";
exit;
