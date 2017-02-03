_veh = (_this select 0);

_script1 = [];

if (alive player) then
{
_script1 set [0, _veh execVM "\b1b\scr\FX_SonicBoom.sqf"];
_script1 set [1, _veh execVM "\b1b\scr\FX_WingtipTrails.sqf"];
_script1 set [2, _veh execVM "\b1b\scr\FX_FuselageVapour.sqf"];
};