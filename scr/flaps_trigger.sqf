_b1b = _this select 0;
sleep(0.01);
while {(alive _b1b)} do
{
	if ((_b1b animationPhase "FlapsSwitch")!=(_b1b animationPhase "flaps1_left")) then
	{
		_FSPhase = (_b1b animationPhase "FlapsSwitch");
		_b1b animate["flaps1_left",_FSPhase]; 
		_b1b animate["flaps2_left",_FSPhase]; 
		_b1b animate["flaps3_left",_FSPhase]; 
		_b1b animate["flaps1_right",_FSPhase]; 
		_b1b animate["flaps2_right",_FSPhase]; 
		_b1b animate["flaps3_right",_FSPhase]; 
		_b1b animate["flaps4",_FSPhase]; 
		_b1b animate["flaps5",_FSPhase]; 
		_b1b animate["flapsf_left",_FSPhase]; 
		_b1b animate["flapsf_right",_FSPhase]; 
	};
	sleep(0.1);
	if (((_b1b animationPhase "sweep_left_wing") > 0) and ((_b1b animationPhase "FlapsSwitch") > 0)) then
	{
		_b1b action ["flapsUp", _b1b]; 
	};
};