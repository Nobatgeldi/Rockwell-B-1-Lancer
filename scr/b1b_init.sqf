_unit = vehicle (_this select 0);

// Watersystem and VTOL for harrier!
if (typeof vehicle _unit == "AV8_tvgb") then 
{
	_unit addeventhandler["Getin",{hws = (_this select 0) execvm "\TVGS\TVS\scr\hws\watersys.sqf"; vtol=(_this select 0) execvm "\TVGS\TVS\scr\vtol.sqf"}];
	NUXWATERBAR=0.15;
	NUXHEATBAR=0;
	_unit execvm "\TVGS\TVS\scr\hws\watersys.sqf";
	_unit execvm "\TVGS\TVS\scr\vtol.sqf";
};

// Tv Guided system
_gui= _this select 1;
_AmmoClass= _this select 2;
_pitchfactorup1= _this select 3;
_pitchfactorup2= _this select 4;
_pitchfactordown1= _this select 5;
_pitchfactordown2= _this select 6;
_pitchfactordown3= _this select 7;
_turnfactor1= _this select 8;
_turnfactor2= _this select 9;
_turnfactor3= _this select 10;
_unit setvariable ["NuxGuiType",_gui];
_unit setvariable ["NuxMyAmmoClass",_AmmoClass];
_unit setvariable ["NuxPfu1",_pitchfactorup1];
_unit setvariable ["NuxPfu2",_pitchfactorup2];
_unit setvariable ["NuxPfd1",_pitchfactordown1];
_unit setvariable ["NuxPfd2",_pitchfactordown2];
_unit setvariable ["NuxPfd3",_pitchfactordown3];
_unit setvariable ["NuxTf1",_turnfactor1];
_unit setvariable ["NuxTf2",_turnfactor2];
_unit setvariable ["NuxTf3",_turnfactor3];
_unit setVariable ["TVSONF",0];
_unit addEventHandler ["FIRED", {findMB = if ((player == gunner (_this select 0)) or ((player == driver (_this select 0)) and not (isPlayer gunner (_this select 0)))) then {_this execVM "\b1b\scr\catchmissile.sqf"}}];
_TVSONF = vehicle _unit addAction ["TVS ON", "\TVGS\TVS\scr\tvsaction.sqf",1,0,false];
