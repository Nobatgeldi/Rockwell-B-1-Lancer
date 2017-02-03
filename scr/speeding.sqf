private["_dikCode","_pos","_plane","_pos2"];
_dikCode = (_this select 1);
_player  = (player);
_plane	 = (vehicle _player);
_pos 	 = (getpos _plane);
_pos2	 = (_pos select 2);

if ((_dikCode in (ActionKeys "HeliUp")) and ((speed _plane)> 100) and ((speed _plane)< 2500) and ((_plane animationPhase "ABSwitch")==1) ) then
{
	_dir 	 = getDir _plane;	
	_speed 	 = ((speed _plane)*(0.001));
	_vel = velocity _plane;	
	_plane setVelocity [((_vel select 0)+(sin _dir*_speed)),((_vel select 1)+ (cos _dir*_speed)),(_vel select 2)];
};