private["_dikCode","_pos","_plane","_pos2","_MaxIntensity","_Boost","_leftengine","_rightengine","_emitters","_Intensity","_looptime", "_plane"];
_dikCode = (_this select 1);
_shiftState = (_this select 2); // boolean
_ctrlState = (_this select 3); // boolean
_altState = (_this select 4); // boolean
_player  = (player);
_plane	 = (vehicle _player);
_pos 	 = (getpos _plane);
_pos2	 = (_pos select 2);

if ((_dikCode in (ActionKeys "user17")) and ((_plane animationPhase "sweep_left_wing") <= 1) and ((_plane animationPhase "WingsSwitch") == 1)) then
{
	_plane animate ["sweep_left_wing",(_plane animationPhase "sweep_left_wing")+0.1];
	_plane animate ["sweep_right_wing",(_plane animationPhase "sweep_right_wing")+0.1];
};

if ((_dikCode in (ActionKeys "user16")) and ((_plane animationPhase "sweep_left_wing") > 0) and ((_plane animationPhase "WingsSwitch") == 1)) then
{
	_plane animate ["sweep_left_wing",(_plane animationPhase "sweep_left_wing")-0.1];
	_plane animate ["sweep_right_wing",(_plane animationPhase "sweep_right_wing")-0.1];
};