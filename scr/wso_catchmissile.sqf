//--- 03/18/2008 --- Karel Moricky (Gaia)

_air = player;

_list = (getpos _air) nearObjects 50;
_dir = getdir _air;
_nr = count _list;
_listwp = ["Bo_GBU12_LGB", "Bo_GBU31_LGB", "Bo_GBU38_LGB", "Bo_MK82_GPB"];

_MyAmmoClass = "M_JSOW_AT";
_obj = _list select 1;
_updated = 0;
for [{_i=0},{_i <= _nr},{_i=_i+1}] do 
{
	_obj = _list select _i;
	_type = typeOf _obj;
	if ((_type in _listwp) and (_updated == 0)) then {_obj setvelocity (velocity (vehicle _air));_updated = 1;};
};

exit;