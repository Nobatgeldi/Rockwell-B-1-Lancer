//--- 03/18/2008 --- Karel Moricky (Gaia)
	disableSerialization;
	_ok = createDialog "WSOConsole";
	titlecut ["INITIATING...","BLACK",1];

	//Set variables
		specam = 1;
		_pos = position player;
		_dis = _pos distance target;
		_coef = 0.00001 * _dis;
		_fov = 0.05;
		_camstyle = "BLACK FADED";
		_camtime = 5;
		_fovmax = 0.09;
		_fovmin = 0.01;
		_display = findDisplay 30000;
		_header = _display displayCtrl 31000;
		_control1 = _display displayCtrl 30001;
		_control2 = _display displayCtrl 30002;
		_control3 = _display displayCtrl 30003;
		_desButton = _display displayCtrl 40100;
		_pointer = "EmptyDetector" createvehicle (position player);  //Creates ghost item for multiplayer camera

	//Initialize Console
		_desButton ctrlShow false;
		(_display displayCtrl 40004) ctrlEnable false;
		(_display displayCtrl 40007) ctrlEnable false;
		(_display displayCtrl 40008) ctrlEnable false;
		(_display displayCtrl 40009) ctrlEnable false;
		if (miscam) then {(_display displayCtrl 40010) ctrlSetText 'WTV ON';} else {(_display displayCtrl 40010) ctrlSetText 'WTV OFF'};
		if (zoomlvl==1) then {(_display displayCtrl 40008) ctrlEnable true;(_display displayCtrl 40009) ctrlEnable false;} else {(_display displayCtrl 40008) ctrlEnable false;(_display displayCtrl 40009) ctrlEnable true;};
		if (GPSDesignate) then {(_display displayCtrl 30003) ctrlSetText 'GPS TGT';(_display displayCtrl 40004) ctrlEnable false;};
		if (!alive DesignatedT) then {designating = false;(_display displayCtrl 30004) ctrlSetText 'LASER OFF';} else {(_display displayCtrl 30004) ctrlSetText 'LASER ON';};
		if ((targetcount >= 1) AND (fliron==0)) then {(_display displayCtrl 30003) ctrlSetText call compile format ["'TGT %1/%2'",(targetno + 1),targetcount];player doTarget target;(_display displayCtrl 40004) ctrlEnable true;} else {(_display displayCtrl 30003) ctrlSetText "NO TGT";(_display displayCtrl 40004) ctrlEnable false;};
		if ((targetcount >= 1) AND (fliron==1)) then {(_display displayCtrl 30003) ctrlSetText call compile format ["'FLIR TGT %1/%2'",(targetno + 1),targetcount];player doTarget target;(_display displayCtrl 40007) ctrlEnable true;} else {(_display displayCtrl 30003) ctrlSetText "NO TGT";(_display displayCtrl 40007) ctrlEnable false;};

	//Initialize Target Buttons
		if (wc_target1 == player) then {(_display displayCtrl 40051) ctrlEnable false;};
		if (wc_target2 == player) then {(_display displayCtrl 40052) ctrlEnable false;};
		if (wc_target3 == player) then {(_display displayCtrl 40053) ctrlEnable false;};
		if (wc_target4 == player) then {(_display displayCtrl 40054) ctrlEnable false;};
		if (wc_target5 == player) then {(_display displayCtrl 40055) ctrlEnable false;};
		if (wc_target6 == player) then {(_display displayCtrl 40056) ctrlEnable false;};
		if (wc_target7 == player) then {(_display displayCtrl 40057) ctrlEnable false;};
		if (wc_target8 == player) then {(_display displayCtrl 40058) ctrlEnable false;};
		if (wc_target9 == player) then {(_display displayCtrl 40059) ctrlEnable false;};
		if (wc_target10 == player) then {(_display displayCtrl 40060) ctrlEnable false;};


	sleep 1;

//create camera
	_camera = "camera" camCreate _pos;
	_camera cameraEffect ["internal","back"];

//Start loop
	while 	{
		(dialog);
	}
	do	{
		_pos = position player;
		//_target = _this select 1;
		_dis = _pos distance target;


		/*switch(viewmode) do {
			case 1: {*/
				_header ctrlSetText 'WEAPON CAMERA ACTIVE';
				titlecut [" ","BLACK IN",1];
				//while {viewmode == 1} do {
					_desButton ctrlShow false;
					_camera camSetFOV 0.7;
					sleep 0.01;
					_pos = mistarget modelToWorld [0,-1.5,0.5];
					_dir = getdir mistarget;
					_dis = _pos distance _target;
					_camera SetDir _dir;
					_camera camPreparePos _pos;
					_camera camPrepareFocus [0,0.5/2];
					_camera camCommitPrepared 0;
					_control1 ctrlSetText call compile format ["'DIST %1m'",round(_dis)];
					_control2 ctrlSetText call compile format ["'ZOOM %1'",round((1/0.7))];
					_control3 ctrlSetText "MISSILE FEED";
			//	};
			/*};
			  case 2: {
				_header ctrlSetText 'TARGET CAMERA ACTIVE';
				titlecut [" ","BLACK IN",1];
				while {viewmode == 2} do {
				  _desButton ctrlShow true;
					_pos = position player;
					_alt = _pos select 2;
					_dis = _pos distance target;
					_tpos = position target;
					_camdir = getdir _camera;

					if (zoomlvl==1) then {_fovmax = 0.04;_fovmin = 0.005;} else {_fovmax = 0.09;_fovmin = 0.01;};

					// Check if in multiplayer, if so, move camera close to target
					if ((specam==1)) then {
						//Work out back bearing to target, then position ghost item there
						_ax = _tpos select 0;
						_ay = _tpos select 1;
						_bx = _pos select 0;
						_by = _pos select 1;
						_dx = (_ax max _bx) - (_ax min _bx);
						_dy = (_ay max _by) - (_ay min _by);
						_bearing = ((_dx atan2 _dy) + 180);
						_pointer setdir _bearing;
						_pointer setpos _tpos;

						//Work out distance ratio and offset
						_disratio = _dis / 10000;
						_newdis =  1200 * _disratio;
						_camoffset = _dis - _newdis;

						//Work out new height
						_adjacent = [_ax,_ay,0] distance [_bx,_by,0];
						_opposite = _pos select 2;
						_angle =  _opposite atan2 _adjacent;
						_talt = (target ModelToWorld [0,0,0]) select 2;
						_height = _talt + ((tan(_angle)) * _newdis);

						//Move camera back based on ghost item location
						_pos = _pointer modelToWorld [0,-(_newdis),_height];
						_fov = ((1/_newdis)/0.01*(_fovmax - _fovmin))+_fovmin;
					} else {
						_fov = ((1/_dis)/0.01*(_fovmax - _fovmin))+_fovmin;
					};

					// Commit results to UI
				  _control1 ctrlSetText call compile format ["'DIST %1m'",round(_dis)];
					_control2 ctrlSetText call compile format ["'ZOOM %1'",round((1/_fov))];
					_camera camPrepareTarget target;
					_camera camPreparePos [(_pos select 0),(_pos select 1), (_pos select 2)];
					_camera camPrepareFOV _fov;
					_camera camPrepareFocus [0,_dis / 2];
					_camera camCommitPrepared 0;
					sleep 0.01;
				};
			};
		};*/
		_camera camPrepareFocus [0,0.5/2];
		_desButton ctrlShow false;
		titlecut ["AWAITING TARGET...",_camstyle,_camtime];
		_control1 ctrlSetText 'DIST ---m';
		_control2 ctrlSetText 'ZOOM ---';
		if !(GPSDesignate) then {_control3 ctrlSetText 'NO TGT';};
		_camstyle = "BLACK";
		_camtime = 1;
		sleep 0.1;
		while {(viewmode==0) AND (dialog)} do { sleep 0.5;};
	};

titlecut [" ","BLACK IN",1];
_camera cameraEffect ["terminate","back"];
camdestroy _camera;
