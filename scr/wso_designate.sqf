_Object=target;

_Pos=GetPos _Object;
_Pos Set [2,1];
GPSDesignate = false;
DesignatedT="GPSTarget" CreateVehicle [0,0,0];
Designating = true;
while {target==_object} do {_Pos=GetPos _Object;_Pos Set [2,5];DesignatedT SetPos _Pos;sleep 0.02};
hint "it's dead";
deletevehicle DesignatedT;
Designating = false;
exit;
