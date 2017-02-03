#include "\wop_gui\data\Scripts\dikCodes.h"
private ["_plane","_alt","_a1", "_a2", "_a3", "_particle","_zloop"];
_plane = _this select 0;
temp_tire = 0.0;
tt = 1;
_oldphase = 0;
_woldphase = 0;
sleep 0.01;
_sayed = 0;

b1b_BRAKE=Compile PreProcessFile ("\b1b\scr\brake.sqf");
b1b_BOOST=Compile PreProcessFile ("\b1b\scr\booster.sqf");
b1b_SPEEDING=Compile PreProcessFile ("\b1b\scr\speeding.sqf");
b1b_SWEEPWINGS=Compile PreProcessFile ("\b1b\scr\sweepwings.sqf");

if (player IN _plane) then
{
	moduleName_keyDownEHId = (findDisplay 46) displayAddEventHandler ["KeyDown", "_as =_this Spawn b1b_BRAKE"];
	moduleName_keyDownEHId2 = (findDisplay 46) displayAddEventHandler ["KeyDown", "_as2 =_this Spawn b1b_BOOST"];
	moduleName_keyDownEHId3 = (findDisplay 46) displayAddEventHandler ["KeyDown", "_as3 =_this Spawn b1b_SPEEDING"];
	moduleName_keyDownEHId4 = (findDisplay 46) displayAddEventHandler ["KeyDown", "_as4 =_this Spawn b1b_SWEEPWINGS"];
};

/*_plane action ["lightOn", rlancer]; 
_plane action ["lightOn", llancer];*/

while {(alive _plane)} do
{
	if ((isengineon _plane) and ((speed _plane) >= 250)) then 
	{
		/*_alt = (getpos _plane select 2);
		_a1 = 0.1 + (_alt/1000);
		_a2 = _a1 + 0.2;
		_a3 = _a1 + 0.5;
		if ((_a1 < 0.85)) then 
		{
			_a1 = 0.85;
			_a2 = 0.92;
			_a3 = 1.0;
		};
		
		_particle = drop ["\wop_gui\data\cl_basic", "", "Billboard", 1, 25, (_plane selectionposition "osa vrtule 0"), [0,0,0],   0, 0.0052, 0.0040, 0.1, [1, 15, 30], [[0.1,0.1,0.1,0.0],[0.1,0.1,0.1,0.2],[0.1,0.1,0.1,0.1],[0.1,0.1,0.1,0.05],[0.1,0.1,0.1,0.025],[0.1,0.1,0.1,0.012],[0.1,0.1,0.1,0.0]],[0],0.0,2.0, "", "", _plane];
		_particle = drop ["\wop_gui\data\cl_basic", "", "Billboard", 1, 25, (_plane selectionposition "osa vrtule 1"), [0,0,0],   0, 0.0052, 0.0040, 0.1, [1, 15, 30], [[0.1,0.1,0.1,0.0],[0.1,0.1,0.1,0.2],[0.1,0.1,0.1,0.1],[0.1,0.1,0.1,0.05],[0.1,0.1,0.1,0.025],[0.1,0.1,0.1,0.012],[0.1,0.1,0.1,0.0]],[0],0.0,2.0, "", "", _plane];
		_particle = drop ["\wop_gui\data\cl_basic", "", "Billboard", 1, 25, (_plane selectionposition "osa vrtule 2"), [0,0,0],   0, 0.0052, 0.0040, 0.1, [1, 15, 30], [[0.1,0.1,0.1,0.0],[0.1,0.1,0.1,0.2],[0.1,0.1,0.1,0.1],[0.1,0.1,0.1,0.05],[0.1,0.1,0.1,0.025],[0.1,0.1,0.1,0.012],[0.1,0.1,0.1,0.0]],[0],0.0,2.0, "", "", _plane];
		_particle = drop ["\wop_gui\data\cl_basic", "", "Billboard", 1, 25, (_plane selectionposition "osa vrtule 3"), [0,0,0],   0, 0.0052, 0.0040, 0.1, [1, 15, 30], [[0.1,0.1,0.1,0.0],[0.1,0.1,0.1,0.2],[0.1,0.1,0.1,0.1],[0.1,0.1,0.1,0.05],[0.1,0.1,0.1,0.025],[0.1,0.1,0.1,0.012],[0.1,0.1,0.1,0.0]],[0],0.0,2.0, "", "", _plane];*/
		
		_zloop = abs(0.10-((speed _plane)/6000));
		sleep (0.001 + _zloop);
		
		_AnimAfterburner = (speed _plane - 400)/300;
		if (_AnimAfterburner > 1) then
		{
			_AnimAfterburner = 1
		};

		if (_AnimAfterburner < 0) then
		{
			_AnimAfterburner = 0
		};
		
		if (abs(_AnimAfterburner - _oldphase) > 0.05) then
		{
			_plane animate ["AfterburnerL",_AnimAfterburner];
			_plane animate ["AfterburnerR",_AnimAfterburner];
			_plane animate ["AfterburnerL2",_AnimAfterburner];
			_plane animate ["AfterburnerR2",_AnimAfterburner];
			_oldphase = _AnimAfterburner;
		};
		
		if (((_plane animationPhase "WingsSwitch") == 0) or ((speed _plane) >= 800)) then
		{
			if (((speed _plane) > 0) and ((speed _plane) < 300) and ((_plane animationPhase "sweep_left_wing") != 0.0)) then
			{
				_plane animate ["sweep_left_wing",0];
				_plane animate ["sweep_right_wing",0];
			};
			if (((speed _plane) >= 300) and ((speed _plane) < 800) and ((_plane animationPhase "sweep_left_wing") != 0.2)) then
			{
				_plane animate ["sweep_left_wing",0.2];
				_plane animate ["sweep_right_wing",0.2];
			};
			if (((speed _plane) >= 800) and ((speed _plane) < 900) and ((_plane animationPhase "sweep_left_wing") != 0.7)) then
			{
				_plane animate ["sweep_left_wing",0.7];
				_plane animate ["sweep_right_wing",0.7];
			};
			if (((speed _plane) >= 900) and ((speed _plane) < 1000) and ((_plane animationPhase "sweep_left_wing") != 0.8)) then
			{
				_plane animate ["sweep_left_wing",0.8];
				_plane animate ["sweep_right_wing",0.8];
			};
			if (((speed _plane) >= 1000) and ((_plane animationPhase "sweep_left_wing") != 1.0)) then
			{
				_plane animate ["sweep_left_wing",1.0];
				_plane animate ["sweep_right_wing",1.0];
			};
		};			
	}
	else
	{
		sleep 0.05;
	};
	_wnewphase = (_plane animationPhase "sweep_left_wing");
	if ((_wnewphase != _woldphase) and (_wnewphase <= 1.0) and (_wnewphase >= 0.0)) then
	{
		_rugol = rugol - 52.3 * _wnewphase;
		_lugol = lugol + 52.3 * _wnewphase;
		
		_rx2 = rx1 - cos(_rugol)*lancer_radius;
		_ry2 = ry1 - sin(_rugol)*lancer_radius;
		_rz2 = rz1;

		_lx2 = lx1 - cos(_lugol)*lancer_radius;
		_ly2 = ly1 - sin(_lugol)*lancer_radius;
		_lz2 = lz1;
		
		rlancer attachTo [_plane,[_rx2,_ry2,_rz2]]; 
		llancer attachTo [_plane,[_lx2,_ly2,_lz2]];
	};
	_woldphase = (_plane animationPhase "sweep_left_wing");
};

/*_plane action ["lightOff", rlancer]; 
_plane action ["lightOff", llancer];*/