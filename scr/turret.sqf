_vcl = _this select 0;
_gun = _this select 1;

_dir1 = getdir _vcl;
_vcl setdir 0;
_gun attachTo [_vcl,[0.0,0.0,0.0],"tailgun"]; 
_gun setDir 180;
_vcl setdir _dir1;

if (true) exitWith {};