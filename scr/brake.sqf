private["_dikCode","_pos","_plane","_pos2"];
_dikCode = (_this select 1);
_player  = (player);
_plane	 = (vehicle _player);
_pos 	 = (getpos _plane);
_pos2	 = (_pos select 2);

if ((_dikCode in (ActionKeys "user19")) and (_pos2 < 0.06) and ((speed _plane)> 30) and (temp_tire < 210)) then
{
	_dir 	 = getDir _plane;
	_speed 	 = ((speed _plane)*(-0.005));
	_vel = velocity _plane;
	temp_tire = temp_tire + 1;
	if ((temp_tire > 195) and (tt == 0)) then
	{
		//_plane vehicleRadio "il76temperature";
		tt = 1;
	};
	//_plane vehicleRadio "il76brake";
	//sleep 0.35;
	if (temp_tire < 200) then
	{
		_plane setVelocity [((_vel select 0)+(sin _dir*_speed)),((_vel select 1)+ (cos _dir*_speed)),(_vel select 2)];
	};
	//_plane vehicleRadio "il76tire";
};

/*if (_dikCode in (ActionKeys "user17")) then
{
	HintSilent Format ["Phase : %1",(_plane animationPhase "gear_r1")];
};*/