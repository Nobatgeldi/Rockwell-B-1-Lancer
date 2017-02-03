if (!isServer) exitWith {};
_vehicle = _this select 0;
_speed = _this select 1;
while 
	{
		alive _vehicle;
	}
do
	{
		waitUntil { speed _vehicle >= _speed };
			_vehicle animate["WingL",1];
			_vehicle animate["WingR",1];
		waitUntil { speed _vehicle <= _speed };
			_vehicle animate["WingL",0];
			_vehicle animate["WingR",0];
	};
exit;