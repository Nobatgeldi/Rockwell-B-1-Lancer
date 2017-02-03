private ["_opacity","_leftwingemitter","_rightwingemitter","_emitters","_rate","_direction","_looptime"];

_opacity = 0;
_leftwingemitter = "#particlesource" createVehicle position _this;
_rightwingemitter = "#particlesource" createVehicle position _this;
_emitters = [_leftwingemitter,_rightwingemitter];
_left_tip = "left_tip";
_right_tip = "right_tip";
{_x setParticleRandom [0.5,[0.1,0.1,0.1],[0,0,0],0,0.1,[0.1,0.1,0.1,0.05],0,0]} foreach _emitters;
{_x setDropInterval 0} foreach _emitters;
_direction = vectordir _this;
_looptime = 0.1;
while {(alive _this) and (_this animationPhase "KillFx" == 0)} do
	{
		_rate = round(((abs(((vectordir _this select 0) - (_direction select 0))*1000)) + (abs(((vectordir _this select 1) - (_direction select 1))*1000)) + (abs(((vectordir _this select 2) - (_direction select 2))*1000)))/3);
		_direction = vectordir _this;
		if ((_rate*((speed _this)/1000)) > (5*(10*_looptime))) then	{if (_opacity < 1) then {_opacity = _opacity + 0.05*(10*_looptime)}}
		else {if (_opacity > 0) then {_opacity = _opacity - 0.2*(10*_looptime)}};
		/*_animp = round ((_this animationPhase "sweep_left_wing")*10);
		if (_animp > 10) then {_animp=10};
		if (_animp < 0) then {_animp=0};
		_name_right = Format["right_tip%1",_animp];
		_name_left = Format["left_tip%1",_animp];*/
		//HintSilent Format ["Selection : %1",_name_right];
		_leftwingemitter setParticleParams ["\wop_gui\ROCKETSMOKE\RocketSmoke","","Billboard",1,1.5,(llancer selectionposition "cerveny pozicni"),(velocity _this),1,1.275,1,0.1,[0.5,0.7],[[1,1,1,0.01*_opacity],[1,1,1,0.2*_opacity],[1,1,1,0]],[0],0.01,0.01,"","",llancer];
		_rightwingemitter setParticleParams ["\wop_gui\ROCKETSMOKE\RocketSmoke","","Billboard",1,1.5,(rlancer selectionposition "zeleny pozicni"),(velocity _this),1,1.275,1,0.1,[0.5,0.7],[[1,1,1,0.01*_opacity],[1,1,1,0.2*_opacity],[1,1,1,0]],[0],0.01,0.01,"","",rlancer];
		{_x setpos (getpos _this)} foreach _emitters;
		if (_opacity > 0) then {{_x setDropInterval 0.001} foreach _emitters} else {{_x setDropInterval 0} foreach _emitters};
		_i = 0;
		_looptime = time;
		waitUntil {_i = _i + 1; _i > 1};
		_looptime = time - _looptime;
	};
deleteVehicle _leftwingemitter;
deleteVehicle _rightwingemitter;