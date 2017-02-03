_plane = _this select 0;
_woldphase = 0;
_wnewphase = 0;
sleep 0.1;
while {(alive _plane)} do
{	
	_wnewphase = (_plane animationPhase "sweep_left_wing");
	HintSilent Format ["Phase : %1",_wnewphase];
	if ((_wnewphase != _woldphase) and (_wnewphase <= 1.0)) then
	{
		_rugol = rugol - 45 * _wnewphase;
		_lugol = lugol + 45 * _wnewphase;
		
		_rx2 = rx1 - cos(_rugol)*radius;
		_ry2 = ry1 - sin(_rugol)*radius;
		_rz2 = rz1;

		_lx2 = lx1 - cos(_lugol)*radius;
		_ly2 = ly1 - sin(_lugol)*radius;
		_lz2 = lz1;
		
		rkub attachTo [_plane,[_rx2,_ry2,_rz2]]; 
		lkub attachTo [_plane,[_lx2,_ly2,_lz2]];
	};
	_woldphase = _wnewphase;
	sleep 0.3;
};

