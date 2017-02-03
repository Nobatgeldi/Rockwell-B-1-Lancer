_Object=target;

_Pos=targetloc;
_Pos Set [2,2];

DesignatedT="GPSTarget" CreateVehicle [0,0,0];
target = DesignatedT;
Designating = true;
GPSDesignate = true;
SeekVM = [] execVM '\b1b\scr\wso_console1.sqf';
((findDisplay 30000) displayCtrl 30004) ctrlSetText 'LASER ON';
((findDisplay 30000) displayCtrl 30003) ctrlSetText 'GPS TGT';
((findDisplay 30000) displayCtrl 40004) ctrlEnable false;
while {target==DesignatedT} do {DesignatedT SetPos _Pos;sleep 0.02};
deletevehicle DesignatedT;
GPSDesignate = false;
Designating = false;
exit;
