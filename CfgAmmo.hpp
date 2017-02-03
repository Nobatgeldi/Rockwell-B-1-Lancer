class CfgAmmo {

	class Default;	// External class reference
	class Bo_GBU12_LGB;	// External class reference
	class M_PG_AT;

	class Bo_GBU31_LGB : Bo_GBU12_LGB {
		model = "\b1b\GBU31\GBU31.p3d";
		proxyShape = "\b1b\GBU31\GBU31.p3d";
		hit = 20000;
		indirectHit = 5000;
		indirectHitRange = 100;
		laserLock = true;
		canLock = LockYes;
	};

	class Bo_GBU38_LGB : Bo_GBU12_LGB {
		model = "\b1b\GBU38\GBU38.p3d";
		proxyShape = "\b1b\GBU38\GBU38.p3d";
		hit = 5000;
		indirectHit = 1250;
		indirectHitRange = 30;
		laserLock = true;
		canLock = LockYes;
	};

	class Bo_BLU109_LGB : Bo_GBU31_LGB {
		explosionTime = 5;
	};

	class Bo_MK82_GPB : Bo_GBU38_LGB {
		model = "\b1b\mk82\mk82.p3d";
		proxyShape = "\b1b\mk82\mk82.p3d";
		laserLock = false;
		canLock = LockNo;
	};
	//class M_Maverick_AT;	// External class reference

	class M_JSOW_AT : M_PG_AT {
		model = "\b1b\agm154\agm154.p3d";
		proxyShape = "\b1b\agm154\agm154.p3d";
		hit = 20000;
		indirectHit = 5000;
		indirectHitRange = 150;
		maxSpeed = 500;	// max speed on level road, km/h
		initTime = 0;
		thrust = 150;
		thrustTime = 60;
		timeToLive = 120;
		laserLock = true;
		manueuvrability = 25;

		class AnimationSources {
			class Wing {
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
		};
	};
};
