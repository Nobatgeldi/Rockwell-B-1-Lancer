class CfgMagazines {
	class Default;	// External class reference
	class VehicleMagazine;	// External class reference
	class 2Rnd_GBU12_LGB;	// External class reference
	///class 8Rnd_Hellfire;	// External class reference

	class 16Rnd_GBU31_b1b : 2Rnd_GBU12_LGB {
		displayName = "GBU-31 JDAM";
		ammo = "Bo_GBU31_LGB";
		count = 16;
	};

	class 56Rnd_GBU38_b1b : 2Rnd_GBU12_LGB {
		displayName = "GBU-38 JDAM";
		ammo = "Bo_GBU38_LGB";
		count = 56;
	};

	class 56Rnd_MK82_b1b : 2Rnd_GBU12_LGB {
		displayName = "MK-82 GPB";
		ammo = "Bo_MK82_GPB";
		count = 56;
	};
	class 12Rnd_PG_missiles;	// External class reference

	class 4Rnd_AGM154_b1b : VehicleMagazine {
		type = 65536;
		scope = public;
		displayName = "AGM-154 JSOW";
		ammo = M_JSOW_AT;
		count = 4;
		initSpeed = 0;
		maxLeadSpeed = 200;	// max estimated speed km/h
		nameSound = "rockets";
		sound[] = {"\a3\weapons_f\Data\Sound\rocket1", db0, 1};
		reloadSound[] = {"\a3\weapons_f\Data\Sound\missload", 0.000316228, 1};
	};

	class 2Rnd_AGM154_b1b : 4Rnd_AGM154_b1b {
		count = 2;
	};

	class 2Rnd_MK82_b1b : 56Rnd_MK82_b1b {
		count = 2;
	};

	class 2Rnd_GBU31_b1b : 16Rnd_GBU31_b1b {
		count = 2;
	};

	class 2Rnd_GBU38_b1b : 56Rnd_GBU38_b1b {
		count = 2;
	};

	class 2Rnd_Maverick_A10 : 12Rnd_PG_missiles {
		count = 2;
	};
};
