//////////////////////////
// This Script By UNN V1.0
//////////////////////////

private ["_vehicle","_xehinit","_flarecount","_magazine","_launcherpos","_launchervel","_launchercount","_launchersetup","_launcherindex"];

_Vehicle=_This Select 0;
_XEHInit=(Count _This)==1;

/////////////////////////////////
// Launcher parameters start here
/////////////////////////////////

//_LauncherPos=[[[2.01953,-3.45313,-3.86909],[2.11865,-3.46313,-3.87811]],[[-2.01953,-3.45313,-3.86909],[-2.11865,-3.46313,-3.87811]],[[2.01953,-3.72314,-3.86909],[2.06909,-3.72827,-3.8736]],[[-2.01953,-3.72314,-3.86909],[-2.06909,-3.72827,-3.8736]],[[0.304199,-14.1692,-1.38671],[0.321777,-14.1995,-1.48029]],[[-0.304199,-14.1692,-1.38671],[-0.321777,-14.1995,-1.48029]]];
_LauncherPos=[[[2.01953,-13.45313,1.13091],[2.11865,-13.46313,1.12189]],[[-2.01953,-13.45313,1.13091],[-2.11865,-13.46313,1.12189]],[[2.01953,-13.72314,1.13091],[2.06909,-13.72827,-0.8736]],[[-2.01953,-13.72314,1.13091],[-2.06909,-13.72827,1.1264]],[[0.304199,-24.1692,4.38671],[0.321777,-24.1995,4.48029]],[[-0.304199,-24.1692,4.38671],[-0.321777,-24.1995,4.48029]]];
_LauncherVel=[];
_LauncherCount=6;
_FlareCount=50;
_LauncherSetup="B1B";

///////////////////////////////
// Launcher parameters end here
///////////////////////////////

//Load the main flare script if we need to
If (IsNil "RKSL_FlareAssign") Then {RKSL_FlareAssign=Compile PreprocessFile ((Localize "STR_RKSL_RADARSYSSCRIPTPATH")+"RKSLFlareAssign.sqf")};

//Call the main flare script here
[_Vehicle,_FlareCount,"",_LauncherPos,_LauncherVel,_LauncherCount,_LauncherSetup,_LauncherIndex,_XEHInit] Call RKSL_FlareAssign;


