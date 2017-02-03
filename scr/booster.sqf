private["_dikCode","_pos","_plane","_pos2","_MaxIntensity","_Boost","_leftengine","_rightengine","_emitters","_Intensity","_looptime", "_plane"];
_dikCode = (_this select 1);
_shiftState = (_this select 2); // boolean
_ctrlState = (_this select 3); // boolean
_altState = (_this select 4); // boolean
_player  = (player);
_plane	 = (vehicle _player);
_pos 	 = (getpos _plane);
_pos2	 = (_pos select 2);

if ((_dikCode in (ActionKeys "user18")) and ((speed _plane)> 100) and ((speed _plane)< 300)) then
{
	_dir 	 = getDir _plane;
	_speed 	 = ((speed _plane)*(0.001));
	_vel = velocity _plane;	
	_plane setVelocity [((_vel select 0)+(sin _dir*_speed)),((_vel select 1)+ (cos _dir*_speed)),(_vel select 2)];
};