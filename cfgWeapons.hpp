class cfgWeapons {
	class Default;	// External class reference
	class Bomb_04_Plane_CAS_01_F;	// External class reference
	//class HellfireLauncher;	// External class reference

	class BombLauncher_GBU31 : Bomb_04_Plane_CAS_01_F {
		displayName = "GBU-31 JDAM";
		magazines[] = {"16Rnd_GBU31_b1b"};
		count = 16;
	};

	class BombLauncher_GBU38 : Bomb_04_Plane_CAS_01_F {
		displayName = "GBU-38 JDAM";
		magazines[] = {"56Rnd_GBU38_b1b"};
		count = 56;
	};

	class BombLauncher_MK82 : Bomb_04_Plane_CAS_01_F {
		displayName = "MK-82 GPB";
		magazines[] = {"56Rnd_MK82_b1b"};
		count = 56;
	};
	class MissileLauncher;	// External class reference

	class JSOWLauncher : MissileLauncher {
		type = 65536;
		displayName = "AGM-154 JSOW";
		magazines[] = {"4Rnd_AGM154_b1b"};
		initSpeed = 0;
		count = 4;
	};
};
