
#include "CfgWeapons.hpp"
#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"

#define VSoft		0
#define VArmor		1
#define VAir		2

#define ReadAndWrite		0
#define ReadAndCreate		1
#define ReadOnly		2
#define ReadOnlyVerified		3

#define true	1
#define false	0

#define LockNo		0
#define LockCadet		1
#define LockYes		2

#define private		0
#define protected		1
#define public		2

#define TEast		0
#define TWest		1
#define TGuerrila		2
#define TCivilian		3
#define TSideUnknown		4
#define TEnemy		5
#define TFriendly		6
#define TLogic		7

class RscText {};

class RscPicture {};

class RscTitles {
	class TVoverlay {
		idd = 20000;
		movingEnable = 1;
		duration = 10000;
		fadein = 0;
		fadeout = 0;
		name = "TV";

		class controls {
			class cross1A : RscText {
				idc = 50001;
				x = 0.45-0.05*2/4;
				y = 0.5;
				w = 0.05*3/4;
				h = 0.002;
				text = "";
				colorBackground[] = {1, 1, 1, 1};
			};

			class cross1B : cross1A {
				idc = 50002;
				x = 0.55-0.05*1/4;
				y = 0.5;
				w = 0.05*3/4;
				h = 0.002;
			};

			class cross2A : cross1A {
				idc = 50003;
				x = 0.5;
				y = 0.4;
				w = 0.002*3/4;
				h = 0.05;
			};

			class cross2B : cross1A {
				idc = 50004;
				x = 0.5;
				y = 0.55;
				w = 0.002*3/4;
				h = 0.05;
			};

			class LineTLH : RscText {
				x = 0.2;
				y = 0.25;
				w = 0.1*3/4;
				h = 0.002;
				text = "";
				colorBackground[] = {1, 1, 1, 1};
			};

			class LineTLV : LineTLH {
				x = 0.2;
				y = 0.25;
				w = 0.002*3/4;
				h = 0.1;
				text = "";
			};

			class LineTRH : LineTLH {
				x = 0.7+0.025;
				y = 0.25;
				w = 0.1*3/4;
				h = 0.002;
				text = "";
			};

			class LineTRV : LineTLH {
				x = 0.8-0.002*3/4;
				y = 0.25;
				w = 0.002*3/4;
				h = 0.1;
				text = "";
			};

			class LineBLH : LineTLH {
				x = 0.2;
				y = 0.75-0.002;
				w = 0.1*3/4;
				h = 0.002;
				text = "";
			};

			class LineBLV : LineTLH {
				x = 0.2;
				y = 0.65;
				w = 0.002*3/4;
				h = 0.1;
				text = "";
			};

			class LineBRH : LineTLH {
				x = 0.7+0.025;
				y = 0.75-0.002;
				w = 0.1*3/4;
				h = 0.002;
				text = "";
			};

			class LineBRV : LineTLH {
				x = 0.8-0.002*3/4;
				y = 0.65;
				w = 0.002*3/4;
				h = 0.1;
				text = "";
			};

			class black1 {
				x = -1.5;
				y = -0.1;
				w = 1.5;
				h = 1.2;
				type = VSoft;
				idc = -1;
				style = 48;
				colorBackground[] = {0, 0, 0, 0};
				colorText[] = {1, 1, 1, 1};
				font = "BitStream";
				sizeEx = 0;
				lineSpacing = 0;
				access = ReadAndWrite;
				text = "#(argb,8,8,3)color(0,0,0,1)";
			};

			class black2 {
				x = 1;
				y = -0.1;
				w = 1.5;
				h = 1.2;
				type = VSoft;
				idc = -1;
				style = 48;
				colorBackground[] = {0, 0, 0, 0};
				colorText[] = {1, 1, 1, 1};
				font = "BitStream";
				sizeEx = 0;
				lineSpacing = 0;
				access = ReadAndWrite;
				text = "#(argb,8,8,3)color(0,0,0,1)";
			};

			class TVDay {
				x = -0.2;
				y = -0.12;
				w = 1.4;
				h = 1.2;
				type = VSoft;
				idc = -1;
				style = 48;
				colorBackground[] = {0, 0, 0, 0};
				colorText[] = {1, 1, 1, 1};
				font = "BitStream";
				sizeEx = 0;
				lineSpacing = 0;
				access = ReadAndWrite;
				text = "\b1b\txt2\b1b_screen_ca.paa";
			};
		};
	};
};

class WSOConsole {
	idd = 30000;
	movingEnable = 1;
	controlsBackground[] = {};
	objects[] = {};
	controls[] = {"Header", "Distance", "CloseButton", "NoneButton", "Zoom", "UpdateButton", "SeekButton", "Mode", "NextButton", "DesignateButton", "Designated", "GPSButton", "FLIRButton", "NextFLIRButton", "ZoomOutButton", "ClearButton", "ZoomInButton", "MCamButton", "Tgt1Button", "Tgt2Button", "Tgt3Button", "Tgt4Button", "Tgt5Button", "Tgt6Button", "Tgt7Button", "Tgt8Button", "Tgt9Button", "Tgt10Button", "Set1Button", "Set2Button", "Set3Button", "Set4Button", "Set5Button", "Set6Button", "Set7Button", "Set8Button", "Set9Button", "Set10Button"};

	class Header {
		idc = 31000;
		type = VSoft;
		style = 2;
		colorBackground[] = {0, 0, 0, 0};
		colorText[] = {1, 1, 1, 1};
		font = "Bitstream";
		sizeEx = 0.03;
		x = 0.3;
		y = 0.16;
		w = 0.4;
		h = 0.04;
		text = "WEAPONS CONSOLE ACTIVE";
	};

	class Distance {
		idc = 30001;
		type = VSoft;
		style = 0;
		text = "DIST ---m";
		font = "Bitstream";
		sizeEx = 0.023;
		colorBackground[] = {1, 1, 1, 0};
		colorText[] = {1, 1, 1, 1};
		x = 0.18;
		y = 0.77;
		w = 0.2;
		h = 0.05;
	};

	class Mode {
		idc = 30003;
		type = VSoft;
		style = 1;
		text = DEFAULT;
		font = "Bitstream";
		sizeEx = 0.023;
		colorBackground[] = {1, 1, 1, 0};
		colorText[] = {1, 1, 1, 1};
		x = 0.615;
		y = 0.77;
		w = 0.2;
		h = 0.05;
	};

	class Designated {
		idc = 30004;
		type = VSoft;
		style = 1;
		text = "LASER OFF";
		font = "Bitstream";
		sizeEx = 0.023;
		colorBackground[] = {1, 1, 1, 0};
		colorText[] = {1, 1, 1, 1};
		x = 0.615;
		y = 0.77+0.03;
		w = 0.2;
		h = 0.05;
	};

	class Zoom {
		idc = 30002;
		type = VSoft;
		style = 0;
		text = "ZOOM ---";
		font = "Bitstream";
		sizeEx = 0.023;
		colorBackground[] = {1, 1, 1, 0};
		colorText[] = {1, 1, 1, 1};
		x = 0.18;
		y = 0.77+0.03;
		w = 0.2;
		h = 0.05;
	};

	class CloseButton {
		idc = 40001;
		type = VArmor;
		style = 2;
		default = 0;
		font = "Zeppelin32";
		sizeEx = 0.025;
		colorText[] = {0, 0, 0, 0.7};
		colorFocused[] = {1, 1, 1, 0.3};
		colorDisabled[] = {0, 0, 0, 0.5};
		colorBackground[] = {1, 1, 1, 0.2};
		colorBackgroundDisabled[] = {1, 1, 1, 0.1};
		colorBackgroundActive[] = {1, 1, 1, 0.3};
		offsetX = 0.003;
		offsetY = 0.003;
		offsetPressedX = 0.002;
		offsetPressedY = 0.002;
		colorShadow[] = {0.1, 0.1, 0.1, 0.2};
		colorBorder[] = {0.1, 0.1, 0.1, 1};
		borderSize = 0;
		soundEnter[] = {"", 0, 1};
		soundPush[] = {"buttonpushed.ogg", 0.1, 1};
		soundClick[] = {"", 0, 1};
		soundEscape[] = {"", 0, 1};
		x = 0.85+0.02;
		y = 0.9;
		w = 0.1;
		h = 0.04;
		text = CLOSE;
		action = "closeDialog 0;";
	};

	class UpdateButton : CloseButton {
		idc = 40002;
		x = 0.05-0.02;
		y = 0.25;
		w = 0.1;
		h = 0.04;
		text = CMDR;
		action = "target = assignedtarget (vehicle player);((findDisplay 30000) displayCtrl 30003) ctrlSetText 'COMMAND TGT';((findDisplay 30000) displayCtrl 30004) ctrlSetText 'LASER OFF';";
	};

	class SeekButton : CloseButton {
		idc = 40003;
		x = 0.05-0.02;
		y = 0.1;
		w = 0.1;
		h = 0.04;
		text = SEEK;
		action = "((findDisplay 30000) displayCtrl 30003) ctrlSetText 'SEEKING...';SeekVM = [] execVM '\b1b\scr\wso_seek.sqf';((findDisplay 30000) displayCtrl 30004) ctrlSetText 'LASER OFF';";
	};

	class NextButton : CloseButton {
		idc = 40004;
		x = 0.165-0.02;
		y = 0.1;
		w = 0.035;
		h = 0.04;
		text = "+";
		action = "((findDisplay 30000) displayCtrl 30003) ctrlSetText 'SEEKING...';SeekVM = [] execVM '\b1b\scr\wso_seeknext.sqf';((findDisplay 30000) displayCtrl 30004) ctrlSetText 'LASER OFF';";
	};

	class GPSButton : CloseButton {
		idc = 40005;
		x = 0.05-0.02;
		y = 0.15;
		w = 0.1;
		h = 0.04;
		text = GPS;
		action = "((findDisplay 30000) displayCtrl 30003) ctrlSetText 'SELECT LOC...';onMapSingleClick ""targetloc = _pos; SeekVM = [] execVM '\b1b\scr\wso_designatepos.sqf'; onMapSingleClick ''; true;"";closeDialog 0;((findDisplay 30000) displayCtrl 30004) ctrlSetText 'LASER OFF';";
	};

	class FLIRButton : CloseButton {
		idc = 40006;
		x = 0.05-0.02;
		y = 0.2;
		w = 0.1;
		h = 0.04;
		text = FLIR;
		action = "((findDisplay 30000) displayCtrl 30003) ctrlSetText 'SEEKING...';SeekVM = [] execVM '\b1b\scr\wso_seekhuman.sqf';((findDisplay 30000) displayCtrl 30004) ctrlSetText 'LASER OFF';";
	};

	class NextFLIRButton : CloseButton {
		idc = 40007;
		x = 0.165-0.02;
		y = 0.2;
		w = 0.035;
		h = 0.04;
		text = "+";
		action = "((findDisplay 30000) displayCtrl 30003) ctrlSetText 'SEEKING FLIR...';SeekVM = [] execVM '\b1b\scr\wso_seeknextflir.sqf';((findDisplay 30000) displayCtrl 30004) ctrlSetText 'LASER OFF';";
	};

	class MCamButton : CloseButton {
		idc = 40010;
		x = 0.05-0.02;
		y = 0.3;
		w = 0.1;
		h = 0.04;
		text = "WTV ON";
		action = "if (miscam) then {miscam=false;((findDisplay 30000) displayCtrl 40010) ctrlSetText 'WTV OFF';} else {miscam=true;((findDisplay 30000) displayCtrl 40010) ctrlSetText 'WTV ON';};";
	};

	class DesignateButton : CloseButton {
		idc = 40100;
		x = 0.45;
		y = 0.1;
		w = 0.1;
		h = 0.04;
		text = LASER;
		colorBackground[] = {1, 0, 0, 0.4};
		colorBackgroundDisabled[] = {1, 0, 0, 0.1};
		colorBackgroundActive[] = {1, 0, 0, 0.6};
		action = "SeekVM = [] execVM '\b1b\scr\wso_designate.sqf';((findDisplay 30000) displayCtrl 30004) ctrlSetText 'LASER ON';";
	};

	class ZoomOutButton : CloseButton {
		idc = 40008;
		x = 0.05-0.02;
		y = 0.5;
		w = 0.1;
		h = 0.04;
		text = "ZOOM -";
		action = "zoomlvl=0;((findDisplay 30000) displayCtrl 40008) ctrlEnable false;((findDisplay 30000) displayCtrl 40009) ctrlEnable true;";
	};

	class ZoomInButton : CloseButton {
		idc = 40009;
		x = 0.05-0.02;
		y = 0.55;
		w = 0.1;
		h = 0.04;
		text = "ZOOM +";
		action = "zoomlvl=1;((findDisplay 30000) displayCtrl 40008) ctrlEnable true;((findDisplay 30000) displayCtrl 40009) ctrlEnable false;";
	};

	class ClearButton : CloseButton {
		idc = 40050;
		x = 0.85+0.02;
		y = 0.1;
		w = 0.1;
		h = 0.04;
		text = CLEAR;
		action = "wc_target1=player;((findDisplay 30000) displayCtrl 40051) ctrlEnable false;wc_target2=player;((findDisplay 30000) displayCtrl 40052) ctrlEnable false;wc_target3=player;((findDisplay 30000) displayCtrl 40053) ctrlEnable false;wc_target4=player;((findDisplay 30000) displayCtrl 40054) ctrlEnable false;wc_target5=player;((findDisplay 30000) displayCtrl 40055) ctrlEnable false;wc_target6=player;((findDisplay 30000) displayCtrl 40056) ctrlEnable false;wc_target7=player;((findDisplay 30000) displayCtrl 40057) ctrlEnable false;wc_target8=player;((findDisplay 30000) displayCtrl 40058) ctrlEnable false;wc_target9=player;((findDisplay 30000) displayCtrl 40059) ctrlEnable false;wc_target10=player;((findDisplay 30000) displayCtrl 40060) ctrlEnable false;";
	};

	class Tgt1Button : CloseButton {
		idc = 40051;
		colorBackground[] = {0.7, 0.7, 1, 0.4};
		colorBackgroundActive[] = {0.7, 0.7, 1, 0.6};
		x = 0.85+0.02;
		y = 0.2;
		w = 0.1;
		h = 0.04;
		text = "TGT 1";
		action = "target=wc_target1;((findDisplay 30000) displayCtrl 30003) ctrlSetText 'MEM TGT 1';";
	};

	class Tgt2Button : Tgt1Button {
		idc = 40052;
		y = 0.25;
		text = "TGT 2";
		action = "target=wc_target2;((findDisplay 30000) displayCtrl 30003) ctrlSetText 'MEM TGT 2';";
	};

	class Tgt3Button : Tgt1Button {
		idc = 40053;
		y = 0.3;
		text = "TGT 3";
		action = "target=wc_target3;((findDisplay 30000) displayCtrl 30003) ctrlSetText 'MEM TGT 3';";
	};

	class Tgt4Button : Tgt1Button {
		idc = 40054;
		y = 0.35;
		text = "TGT 4";
		action = "target=wc_target4;((findDisplay 30000) displayCtrl 30003) ctrlSetText 'MEM TGT 4';";
	};

	class Tgt5Button : Tgt1Button {
		idc = 40055;
		y = 0.4;
		text = "TGT 5";
		action = "target=wc_target5;((findDisplay 30000) displayCtrl 30003) ctrlSetText 'MEM TGT 5';";
	};

	class Tgt6Button : Tgt1Button {
		idc = 40056;
		y = 0.45;
		text = "TGT 6";
		action = "target=wc_target6;((findDisplay 30000) displayCtrl 30003) ctrlSetText 'MEM TGT 6';";
	};

	class Tgt7Button : Tgt1Button {
		idc = 40057;
		y = 0.5;
		text = "TGT 7";
		action = "target=wc_target7;((findDisplay 30000) displayCtrl 30003) ctrlSetText 'MEM TGT 7';";
	};

	class Tgt8Button : Tgt1Button {
		idc = 40058;
		y = 0.55;
		text = "TGT 8";
		action = "target=wc_target8;((findDisplay 30000) displayCtrl 30003) ctrlSetText 'MEM TGT 8';";
	};

	class Tgt9Button : Tgt1Button {
		idc = 40059;
		y = 0.6;
		text = "TGT 9";
		action = "target=wc_target9;((findDisplay 30000) displayCtrl 30003) ctrlSetText 'MEM TGT 9';";
	};

	class Tgt10Button : Tgt1Button {
		idc = 40060;
		y = 0.65;
		text = "TGT 10";
		action = "target=wc_target10;";
	};

	class Set1Button : CloseButton {
		idc = 40071;
		x = 0.835-0.01;
		y = 0.2;
		w = 0.035;
		h = 0.04;
		text = "+";
		action = "if !(target==player) then {wc_target1=target;((findDisplay 30000) displayCtrl 40051) ctrlEnable true;};";
	};

	class Set2Button : Set1Button {
		idc = 40072;
		y = 0.25;
		action = "if !(target==player) then {wc_target2=target;((findDisplay 30000) displayCtrl 40052) ctrlEnable true;};";
	};

	class Set3Button : Set1Button {
		idc = 40073;
		y = 0.3;
		action = "if !(target==player) then {wc_target3=target;((findDisplay 30000) displayCtrl 40053) ctrlEnable true;};";
	};

	class Set4Button : Set1Button {
		idc = 40074;
		y = 0.35;
		action = "if !(target==player) then {wc_target4=target;((findDisplay 30000) displayCtrl 40054) ctrlEnable true;};";
	};

	class Set5Button : Set1Button {
		idc = 40075;
		y = 0.4;
		action = "if !(target==player) then {wc_target5=target;((findDisplay 30000) displayCtrl 40055) ctrlEnable true;};";
	};

	class Set6Button : Set1Button {
		idc = 40076;
		y = 0.45;
		action = "if !(target==player) then {wc_target6=target;((findDisplay 30000) displayCtrl 40056) ctrlEnable true;};";
	};

	class Set7Button : Set1Button {
		idc = 40077;
		y = 0.5;
		action = "if !(target==player) then {wc_target7=target;((findDisplay 30000) displayCtrl 40057) ctrlEnable true;};";
	};

	class Set8Button : Set1Button {
		idc = 40078;
		y = 0.55;
		action = "if !(target==player) then {wc_target8=target;((findDisplay 30000) displayCtrl 40058) ctrlEnable true;};";
	};

	class Set9Button : Set1Button {
		idc = 40079;
		y = 0.6;
		action = "if !(target==player) then {wc_target9=target;((findDisplay 30000) displayCtrl 40059) ctrlEnable true;};";
	};

	class Set10Button : Set1Button {
		idc = 40080;
		y = 0.65;
		action = "if !(target==player) then {wc_target10=target;((findDisplay 30000) displayCtrl 40060) ctrlEnable true;};";
	};

	class NoneButton : CloseButton {
		idc = 40020;
		x = 0.05-0.02;
		y = 0.4;
		w = 0.1;
		h = 0.04;
		text = NONE;
		action = "target=player;";
	};
};

class CfgPatches {
	class b1b {
		units[] =
		{
			"b1b"
		};
		weapons[] =
		{
			"BombLauncher_GBU31", "BombLauncher_GBU38", "BombLauncher_MK82", "JSOWLauncher"
		};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};

class CfgVehicles {
	access = ReadAndCreate;

	class All {};

	class AllVehicles : All {};

	class Air : AllVehicles {
		class ViewPilot;	// External class reference
	};
	class LaserTargetW;	// External class reference

	class GPSTarget : LaserTargetW {
		accuracy = 1000;	// accuracy needed to recognize type of this target
		displayName = "Locked Target";
		displayNameShort = "Locked Target";
		weapons[] = {};
		magazines[] = {};
	};

	class Plane : Air
	{
		class NewTurret;
		class ViewPilot;
		class AnimationSources;
	};

	class Su34 : Plane
	{
		class viewpilot;	// External class reference
		class viewgunner;	// External class reference
		class Turrets;	// External class reference
		class NewTurret;	// External class reference
		class AnimationSources;	// External class reference
	};

	class lancer_right : Su34
	{
		scope=1;
		model="\b1b\lancer_right";
		displayname="";
		side=TEast;
		faction = "BLU_F";
		vehicleclass = "Air";
		crew = "B_Helipilot_F";
		class Reflectors{};
		class MarkerLights
		{
			class GreenStill {
				color[] = {0.02, 0.8, 0.4, 1};
				ambient[] = {0.02, 0.8, 0.4, 1};
				name = "zeleny pozicni";
				brightness = 0.01;
				blinking = false;
			};
		};
	};

	class lancer_left : Su34
	{
		scope=1;
		model="\b1b\lancer_left";
		displayname="";
		side=TEast;
		faction = "BLU_F";
		vehicleclass = "Air";
		crew = "B_Helipilot_F";
		class Reflectors{};
		class MarkerLights
		{
			class RedStill {
				color[] = {0.8, 0.02, 0.02, 1};
				ambient[] = {0.5, 0.03, 0.03, 1};
				name = "cerveny pozicni";
				brightness = 0.01;
				blinking = false;
			};
		};
	};

	class b1b : Plane
	{
		scope = private;
		side = TWest;
		faction = "BLU_F";
		vehicleClass="Air";
		/*driverCanSee = 1+2+4+8+16+32;
		gunnerCanSee = 1+2+4+8+16+32;*/
		brakeDistance = 200;	// vehicle movement precision
		crew = "B_Helipilot_F"
		displayName = "B-1B Lancer";
		displayNameShort = B1B;
    landingSpeed = 270;
		model = "\b1b\b1b.p3d";
		icon = "\b1b\icons\icon.paa";
		picture = "\b1b\icons\picture.paa";
		maxSpeed = 850;	// max speed on level road, km/h
		acceleration = 80600;
		armor = 5550;
		fuelCapacity = 5000;
		extCameraPosition[] = {0, 10, -45};
		mapSize = 46;
		camouflage = 10;	// how dificult to spot - bigger - better spotable
		audible = 6;	// audible - bigger - better heard
		accuracy = 0.05;	// accuracy needed to recognize type of this target
		supplyRadius = 8;
		driverAction = "A10_Pilot";
		gunnerAction = "A10_Pilot";
		typicalCargo[] = {"B_Helipilot_F", "B_Helipilot_F"};
		weapons[] = {};
		simulation="airplane";
		_generalMacro="Plane";
		magazines[] = {};
		hasGunner = true;
		driverIsCommander = true;
		laserScanner = true;
		gearRetracting = true;
		gearUpTime = 4.5;
		gearDownTime = 3;
		wheelSteeringSensitivity = 3.0;
		secondaryExplosion = 1;
		flapsFrictionCoef = 1;
		aileronSensitivity = 1;	// relative aileron sensitivity
		elevatorSensitivity = 2.8;	// relative elevator sensitivity
		transportSoldier = 0;
		landingAoa = "rad 5"//7*3.1415/180//"rad 55";
		envelope[] = {0.0, 1.0, 2.0, 3.0, 4.0, 5.0, 5.0, 6.0, 8.0, 4.0, 1.0, 0.2, 0.0};
		class ViewPilot : ViewPilot
		{
			initFov = 0.8; minFov = 0.3; maxFov = 1.2;
			initAngleX = 0; minAngleX = -40; maxAngleX = +100;
			initAngleY = 0; minAngleY = -180; maxAngleY = 180;
		};
		//envelope[] = {0.000000, 0.100000, 0.800000, 2.000000, 2.200000, 2.800000, 3.550000, 3.550000, 3.550000, 3.550000, 2.600000, 1.300000, 1.100000};
		/*soundGetIn[] = {"ca\sounds\Air\AV8\ext\ext-jetair-cabine-close1", db-25, 1};
		soundGetOut[] = {"ca\sounds\Air\AV8\ext\ext-jetair-cabine-open1", db-25, 1, 40};
		soundDammage[] = {"ca\sounds\Air\AV8\int\alarm_loop1", 0.562341, 1};
		soundEngineOnInt[] = {"ca\sounds\Air\AV8\int\int-av8b-start-1", 0.562341, 1.0};
		soundEngineOnExt[] = {"ca\sounds\Air\AV8\ext\ext-jetair-start1", 0.794328, 1.0, 800};
		soundEngineOffInt[] = {"ca\sounds\Air\AV8\int\int-av8b-stop-1", 0.562341, 1.0};
		soundEngineOffExt[] = {"ca\sounds\Air\AV8\ext\ext-jetair-stop1", 0.794328, 1.0, 800};*/

		soundEngine[] = {"\b1b\sound\X_A_f14_3.wav", db-10, 1};
		soundEnviron[]={"Objects\noise",db-60,1.0};			// Cessna
		soundServo[]={"\b1b\sound\FLAPS.wav",db-10,1};			// Cessna
		soundLandCrash[]={"\b1b\sound\touchl.wav",db-10,1};
		soundGear[] = {"\b1b\sound\gearup.wav",4,1.2}; //no default'
		soundEngineOnInt[] = {"\b1b\sound\X_T_COMB_START.wav", 0.562341, 1.000000};
		soundEngineOnExt[] = {"\b1b\sound\X_T_COMB_START.wav", 0.562341, 1.000000, 900};
		soundEngineOffInt[] = {"\b1b\sound\X_T_f14_SHUT.wav", 0.562341, 1.000000};
		soundEngineOffExt[] = {"\b1b\sound\X_T_f14_SHUT.wav", 0.562341, 1.000000, 900};
		soundFlapsUp[]=
		{
			"A3\Sounds_F_EPC\CAS_02\Flaps_Up",
			0.63095701,
			1,
			100
		};
		soundFlapsDown[]=
		{
			"A3\Sounds_F_EPC\CAS_02\Flaps_Down",
			0.63095701,
			1,
			100
		};
		soundGearUp[]=
		{
			"A3\Sounds_F_EPC\CAS_02\gear_up",
			0.79432797,
			1,
			150
		};
		soundGearDown[]=
		{
			"A3\Sounds_F_EPC\CAS_02\gear_down",
			0.79432797,
			1,
			150
		};
		driverCompartments = "Compartment1";
		cargoCompartments[] = {"Compartment1"};

		class Exhausts
		{
		   class Exhaust1
		   {
			   position = "exhaust1";
			   direction = "exhaust1_dir";
			   effect = "ExhaustsEffectPlane";
		   };

		   class Exhaust2
		   {
			   position = "exhaust2";
			   direction = "exhaust2_dir";
			   effect = "ExhaustsEffectPlane";
		   };

		   class Exhaust3
		   {
			   position = "exhaust3";
			   direction = "exhaust3_dir";
			   effect = "ExhaustsEffectPlane";
		   };

		   class Exhaust4
		   {
			   position = "exhaust4";
			   direction = "exhaust4_dir";
			   effect = "ExhaustsEffectPlane";
		   };
	   };

		class Library {
			libTextDesc = "$STR_B52H_DESCR";
		};

		class Sounds {
			class EngineLowOut {
				sound[] = {"\il76td\sounds\engine_in", 2.51189, 1.0, 1200};
				frequency = "1.0 min (rpm + 0.5)";
				volume = "engineOn*camPos*(rpm factor[0.85, 0])";
			};

			class EngineHighOut {
				sound[] = {"\il76td\sounds\engine_in", 2.51189, 1.3, 1500};
				frequency = "1";
				volume = "engineOn*camPos*(rpm factor[0.55, 1.0])";
			};

			class ForsageOut {
				sound[] = {"\il76td\sounds\ext-jetair-forsage1", 2.51189, 1.1, 2000};
				frequency = "1";
				volume = "engineOn*camPos*(thrust factor[0.5, 1.0])";
				cone[] = {3.14, 3.92, 2.0, 0.4};
			};

			class WindNoiseOut {
				sound[] = {"\il76td\sounds\ext-jetair-wind", db0, 1.0, 100};
				frequency = "(0.1+(1.2*(speed factor[1, 150])))";
				volume = "camPos*(speed factor[1, 150])";
			};

			class EngineLowIn {
				sound[] = {"\il76td\sounds\engine_in", db-2, 1.0};
				frequency = "1.0 min (rpm + 0.5)";
				volume = "(1-camPos)*(engineOn*(rpm factor[0.85, 0]))";
			};

			class EngineHighIn {
				sound[] = {"\il76td\sounds\engine_in", db-2, 1.0};
				frequency = "1";
				volume = "(1-camPos)*(engineOn*(rpm factor[0.55, 1.0]))";
			};

			class ForsageIn {
				sound[] = {"\il76td\sounds\engine_in", db-2, 1.1};
				frequency = "1";
				volume = "(1-camPos)*(engineOn*(thrust factor[0.8, 1.0]))";
			};

			class WindNoiseIn {
				sound[] = {"\il76td\sounds\int-jetair-wind1", db-3, 1.0};
				frequency = "(0.1+(1.2*(speed factor[1, 150])))";
				volume = "(1-camPos)*(speed factor[1, 150])";
			};
		};

		class Eventhandlers
		{
			Init = "[_this select 0] exec ""\b1b\scr\common_init.sqs""; _this execVM ""\b1b\scr\flaps_trigger.sqf"";";
			fired = "_this execVM ""\b1b\scr\b1b_fired.sqf"";";
			engine = "if (_this Select 1) then {[_this select 0] exec ""\b1b\scr\CheckEngine.sqs""}";
		};

		class Reflectors
		{
			class Left {
				color[]={7000,7500,10000,1};
				ambient[]={100,100,100,0};
				position="L svetlo";
				direction="konec L svetla";
				hitpoint="L svetlo";
				selection="L svetlo";
				size=1;
				innerAngle=20;
				outerAngle=60;
				coneFadeCoef=10;
				intensity=50;
				useFlare=1;
				dayLight=0;
				FlareSize=4;
				brightness=1;
				class Attenuation
				{
					constant=0;
					hardlimitend=250;
					hardlimitstart=200;
					linear=1;
					quadratic=0;
					start=0;
				};
			};

			class Right {
				color[]={7000,7500,10000,1};
				ambient[]={100,100,100,0};
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
				size = 1;
				innerAngle=20;
				outerAngle=60;
				coneFadeCoef=10;
				intensity=25;
				useFlare=1;
				dayLight=0;
				FlareSize=4;
				class Attenuation
				{
					start=1;
					constant=0;
					linear=0;
					quadratic=4;
				};
			};
		};

		class MarkerLights
		{
			class WhiteBlinking {
				color[] = {1, 1, 1, 1};
				ambient[] = {0.2, 0.2, 0.2, 1};
				name = "bily pozicni blik";
				brightness = 0.15;
				blinking = true;
			};

			class RedStill {
				color[] = {0.8, 0.02, 0.02, 1};
				ambient[] = {0.5, 0.03, 0.03, 1};
				name = "cerveny pozicni";
				brightness = 0.15;
				blinking = false;
				size = 1;
			};

			class GreenStill {
				color[] = {0.02, 0.8, 0.02, 1};
				ambient[] = {0.03, 0.5, 0.03, 1};
				name = "zeleny pozicni";
				brightness = 0.15;
				blinking = false;
				size = 1;
			};

			class BlueStill {
				color[] = {0.02, 0.2, 0.4, 1};
				ambient[] = {0.03, 0.03, 0.1, 1};
				name = "blue";
				brightness = 0.15;
				blinking = false;
			};
		};

		/*class Turrets {
			class MainTurret : NewTurret {
				outGunnerMayFire = true;
				commanding = -1;
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				memoryPointGun = "machinegun";
				memoryPointGunnerOptics = "gunnerview";
				selectionFireAnim = "zasleh";
				castGunnerShadow = true;
				viewGunnerShadow = true;
				primary = true;
				gunnerAction = "AH1Z_Gunner";
				gunnerInAction = "AH1Z_Gunner";
				gunnerOpticsModel = "\b1b\optics\optika_b1b.p3d";
				gunnerForceOptics = true;

				class HitTurret {
					armor = 0.2;
					material = 51;
					name = "vez";
					visual = "vez";
					passThrough = false;
				};

				class HitGun {
					armor = 0.2;
					material = 51;
					name = "zbran";
					visual = "zbran";
					passThrough = false;
				};
				minElev = -70;
				maxElev = 0;
				initElev = 0;
				minTurn = -60;
				maxTurn = 60;
				initTurn = 0;
				maxHorizontalRotSpeed = 0.8;
				maxVerticalRotSpeed = 0.8;
				gunnerCompartments= "Compartment1";
				proxyIndex = 1;
			};
		};*/
		class Turrets
		{
			class MainTurret : NewTurret
			{
				body = "";
				gun = "";
				commanding = -1;
				proxyIndex = 1;
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				castGunnerShadow = true;
				viewGunnerShadow = true;
				gunnerAction = "pilot";
				gunnerInAction = "pilot";
				//gunnerOpticsModel = "\b1b\optics\optika_b1b.p3d";
				//gunnerForceOptics = true;
				gunnerCompartments= "Compartment1";
				primaryGunner = 1;
				weapons[]={};
				magazines[]={};
			};
		};
		//class ViewOptics;	// External class reference

		class AnimationSources : AnimationSources
		{
			class bombbay
			{
				source = "user";
				initPhase = 0;
				animPeriod =8;
			};
			class wings
			{
				source = "user";
				initPhase = 0;
				animPeriod =25;
			};
			class odzv
			{
				source = "user";
				initPhase = 0;
				animPeriod =5;
			};
			class WingsSwitch
			{
				source = "user";
				initPhase = 0;
				animPeriod =1;
			};
			class FlapsSwitch
			{
				source = "user";
				initPhase = 0;
				animPeriod =0.1;
			};
			class LightsSwitch
			{
				source = "user";
				initPhase = 0;
				animPeriod =0.1;
			};
			class UserFlaps
			{
				source = "user";
				initPhase = 0;
				animPeriod =6;
			};

			class ab
			{
				source = "user";
				initPhase = 0;
				animPeriod =1;
			};

			class AnimAfterburner
			{
				source = "user";
				animPeriod = 2.2;
				initPhase = 0;
			};

			class AnimVibration
			{
				source = "user";
				animPeriod = 0.8;
				initPhase = 0;
			};
		};

		class MFD
		{
			class HUD
			{
				class Pos10Vector
				{
					type = "vector";
					pos0[] = {0.5, 0.5};
					pos10[] = {1.225, 1.1};
				};
				topLeft = "HUD LH";
				topRight = "HUD PH";
				bottomLeft = "HUD LD";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = {0, 1, 0, 0.1};

				class Bones {
					class PlaneW {
						type = "fixed";
						pos[] = {0.5, 0.5};
					};

					class WeaponAim : Pos10Vector {
						source = "weapon";
					};

					class Target : Pos10Vector {
						source = "target";
					};

					class Velocity : Pos10Vector {
						type = "vector";
						source = "velocity";
						pos0[] = {0.5, 0.4};
						pos10[] = {1.24, 1.1};
					};

					class ILS_H {
						type = "ils";
						pos0[] = {0.5, 0.4};
						pos3[] = {0.722, 0.4};
					};

					class ILS_W : ILS_H {
						pos3[] = {0.5, 0.61};
					};

					class Level0 : Pos10Vector {
						pos0[] = {0.5, 0.4};
						pos10[] = {1.24, 1.1};
						type = "horizon";
						angle = 0;
					};

					class LevelP5 : Level0 {
						angle = 5;
					};

					class LevelM5 : Level0 {
						angle = -5;
					};

					class LevelP10 : Level0 {
						angle = 10;
					};

					class LevelM10 : Level0 {
						angle = -10;
					};

					class LevelP15 : Level0 {
						angle = 15;
					};

					class LevelM15 : Level0 {
						angle = -15;
					};

					class LevelP20 : Level0 {
						angle = 20;
					};

					class LevelM20 : Level0 {
						angle = -20;
					};

					class LevelP25 : Level0 {
						angle = 25;
					};

					class LevelM25 : Level0 {
						angle = -25;
					};

					class LevelP30 : Level0 {
						angle = 30;
					};

					class LevelM30 : Level0 {
						angle = -30;
					};

					class LevelP35 : Level0 {
						angle = 35;
					};

					class LevelM35 : Level0 {
						angle = -35;
					};

					class LevelP40 : Level0 {
						angle = 40;
					};

					class LevelM40 : Level0 {
						angle = -40;
					};

					class LevelP45 : Level0 {
						angle = 45;
					};

					class LevelM45 : Level0 {
						angle = -45;
					};

					class LevelP50 : Level0 {
						angle = 50;
					};

					class LevelM50 : Level0 {
						angle = -50;
					};
				};

				class Draw {
					alpha = 1.0;
					color[] = {0.0, 0.3, 0.05};
					condition = "on";

					class PlaneW {
						clipTL[] = {0.0, 1.0};
						clipBR[] = {1.0, 0.0};
						type = "line";
						points[] = {{"PlaneW", {-0.08, 0}, 1}, {"PlaneW", {-0.03, 0}, 1}, {"PlaneW", {-0.015, 0.0283784}, 1}, {"PlaneW", {0.0, 0}, 1}, {"PlaneW", {0.015, 0.0283784}, 1}, {"PlaneW", {0.03, 0}, 1}, {"PlaneW", {0.08, 0}, 1}};
					};

					class PlaneHeading {
						clipTL[] = {0.0, 1.0};
						clipBR[] = {1.0, 0.0};
						type = "line";
						points[] = {{"Velocity", {0, -0.0189189}, 1}, {"Velocity", {0.014, -0.0132432}, 1}, {"Velocity", {0.02, 0}, 1}, {"Velocity", {0.014, 0.0132432}, 1}, {"Velocity", {0, 0.0189189}, 1}, {"Velocity", {-0.014, 0.0132432}, 1}, {"Velocity", {-0.02, 0}, 1}, {"Velocity", {-0.014, -0.0132432}, 1}, {"Velocity", {0, -0.0189189}, 1}, {}, {"Velocity", {0.04, 0}, 1}, {"Velocity", {0.02, 0}, 1}, {}, {"Velocity", {-0.04, 0}, 1}, {"Velocity", {-0.02, 0}, 1}, {}, {"Velocity", {0, -0.0378378}, 1}, {"Velocity", {0, -0.0189189}, 1}, {}};
					};

					class Static {
						clipTL[] = {0.0, 0.1};
						clipBR[] = {1.0, 0.0};
						type = "line";
						points[] = {{{0.21, 0.52}, 1}, {{0.19, 0.5}, 1}, {{0.21, 0.48}, 1}, {}, {{0.18, 0.2}, 1}, {{0.18, 0.85}, 1}, {}, {{0.79, 0.52}, 1}, {{0.81, 0.5}, 1}, {{0.79, 0.48}, 1}, {}, {{0.82, 0.2}, 1}, {{0.82, 0.85}, 1}, {}, {{0.52, 0.08+0.01}, 1}, {{0.5, 0.06+0.01}, 1}, {{0.48, 0.08+0.01}, 1}, {}, {{0.2, 0.055+0.01}, 1}, {{0.8, 0.055+0.01}, 1}, {}};
					};

					class Horizont {
						clipTL[] = {0.0, 0.0};
						clipBR[] = {1.0, 1.0};

						class Dimmed {
							class Level0 {
								type = "line";
								points[] = {{"Level0", {-0.2, 0}, 1}, {"Level0", {-0.05, 0}, 1}, {}, {"Level0", {0.05, 0}, 1}, {"Level0", {0.2, 0}, 1}};
							};

							class VALM_1_0 {
								type = "text";
								source = "static";
								text = 0;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"Level0", {-0.23, -0.025}, 1};
								right[] = {"Level0", {-0.13, -0.025}, 1};
								down[] = {"Level0", {-0.23, 0.025}, 1};
							};

							class VALM_2_0 : VALM_1_0 {
								align = "right";
								pos[] = {"Level0", {0.22, -0.025}, 1};
								right[] = {"Level0", {0.32, -0.025}, 1};
								down[] = {"Level0", {0.22, 0.025}, 1};
							};

							class LevelM5 : Level0 {
								type = "line";
								points[] = {{"LevelM5", {-0.2, -0.03}, 1}, {"LevelM5", {-0.2, 0}, 1}, {"LevelM5", {-0.15, 0}, 1}, {}, {"LevelM5", {-0.1, 0}, 1}, {"LevelM5", {-0.05, 0}, 1}, {}, {"LevelM5", {0.05, 0}, 1}, {"LevelM5", {0.1, 0}, 1}, {}, {"LevelM5", {0.15, 0}, 1}, {"LevelM5", {0.2, 0}, 1}, {"LevelM5", {0.2, -0.03}, 1}};
							};

							class VALM_1_5 {
								type = "text";
								source = "static";
								text = -5;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM5", {-0.23, -0.085}, 1};
								right[] = {"LevelM5", {-0.13, -0.085}, 1};
								down[] = {"LevelM5", {-0.23, -0.035}, 1};
							};

							class VALM_2_5 : VALM_1_5 {
								align = "right";
								pos[] = {"LevelM5", {0.22, -0.085}, 1};
								right[] = {"LevelM5", {0.32, -0.085}, 1};
								down[] = {"LevelM5", {0.22, -0.035}, 1};
							};

							class LevelP5 : Level0 {
								type = "line";
								points[] = {{"LevelP5", {-0.2, 0.03}, 1}, {"LevelP5", {-0.2, 0}, 1}, {"LevelP5", {-0.05, 0}, 1}, {}, {"LevelP5", {0.05, 0}, 1}, {"LevelP5", {0.2, 0}, 1}, {"LevelP5", {0.2, 0.03}, 1}};
							};

							class VALP_1_5 {
								type = "text";
								source = "static";
								text = "5";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP5", {-0.23, 0.035}, 1};
								right[] = {"LevelP5", {-0.13, 0.035}, 1};
								down[] = {"LevelP5", {-0.23, 0.085}, 1};
							};

							class VALP_2_5 : VALP_1_5 {
								align = "right";
								pos[] = {"LevelP5", {0.22, 0.035}, 1};
								right[] = {"LevelP5", {0.32, 0.035}, 1};
								down[] = {"LevelP5", {0.22, 0.085}, 1};
							};

							class LevelM10 : Level0 {
								type = "line";
								points[] = {{"LevelM10", {-0.2, -0.03}, 1}, {"LevelM10", {-0.2, 0}, 1}, {"LevelM10", {-0.15, 0}, 1}, {}, {"LevelM10", {-0.1, 0}, 1}, {"LevelM10", {-0.05, 0}, 1}, {}, {"LevelM10", {0.05, 0}, 1}, {"LevelM10", {0.1, 0}, 1}, {}, {"LevelM10", {0.15, 0}, 1}, {"LevelM10", {0.2, 0}, 1}, {"LevelM10", {0.2, -0.03}, 1}};
							};

							class VALM_1_10 {
								type = "text";
								source = "static";
								text = -10;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM10", {-0.23, -0.085}, 1};
								right[] = {"LevelM10", {-0.13, -0.085}, 1};
								down[] = {"LevelM10", {-0.23, -0.035}, 1};
							};

							class VALM_2_10 : VALM_1_10 {
								align = "right";
								pos[] = {"LevelM10", {0.22, -0.085}, 1};
								right[] = {"LevelM10", {0.32, -0.085}, 1};
								down[] = {"LevelM10", {0.22, -0.035}, 1};
							};

							class LevelP10 : Level0 {
								type = "line";
								points[] = {{"LevelP10", {-0.2, 0.03}, 1}, {"LevelP10", {-0.2, 0}, 1}, {"LevelP10", {-0.05, 0}, 1}, {}, {"LevelP10", {0.05, 0}, 1}, {"LevelP10", {0.2, 0}, 1}, {"LevelP10", {0.2, 0.03}, 1}};
							};

							class VALP_1_10 {
								type = "text";
								source = "static";
								text = "10";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP10", {-0.23, 0.035}, 1};
								right[] = {"LevelP10", {-0.13, 0.035}, 1};
								down[] = {"LevelP10", {-0.23, 0.085}, 1};
							};

							class VALP_2_10 : VALP_1_10 {
								align = "right";
								pos[] = {"LevelP10", {0.22, 0.035}, 1};
								right[] = {"LevelP10", {0.32, 0.035}, 1};
								down[] = {"LevelP10", {0.22, 0.085}, 1};
							};

							class LevelM15 : Level0 {
								type = "line";
								points[] = {{"LevelM15", {-0.2, -0.03}, 1}, {"LevelM15", {-0.2, 0}, 1}, {"LevelM15", {-0.15, 0}, 1}, {}, {"LevelM15", {-0.1, 0}, 1}, {"LevelM15", {-0.05, 0}, 1}, {}, {"LevelM15", {0.05, 0}, 1}, {"LevelM15", {0.1, 0}, 1}, {}, {"LevelM15", {0.15, 0}, 1}, {"LevelM15", {0.2, 0}, 1}, {"LevelM15", {0.2, -0.03}, 1}};
							};

							class VALM_1_15 {
								type = "text";
								source = "static";
								text = -15;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM15", {-0.23, -0.085}, 1};
								right[] = {"LevelM15", {-0.13, -0.085}, 1};
								down[] = {"LevelM15", {-0.23, -0.035}, 1};
							};

							class VALM_2_15 : VALM_1_15 {
								align = "right";
								pos[] = {"LevelM15", {0.22, -0.085}, 1};
								right[] = {"LevelM15", {0.32, -0.085}, 1};
								down[] = {"LevelM15", {0.22, -0.035}, 1};
							};

							class LevelP15 : Level0 {
								type = "line";
								points[] = {{"LevelP15", {-0.2, 0.03}, 1}, {"LevelP15", {-0.2, 0}, 1}, {"LevelP15", {-0.05, 0}, 1}, {}, {"LevelP15", {0.05, 0}, 1}, {"LevelP15", {0.2, 0}, 1}, {"LevelP15", {0.2, 0.03}, 1}};
							};

							class VALP_1_15 {
								type = "text";
								source = "static";
								text = "15";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP15", {-0.23, 0.035}, 1};
								right[] = {"LevelP15", {-0.13, 0.035}, 1};
								down[] = {"LevelP15", {-0.23, 0.085}, 1};
							};

							class VALP_2_15 : VALP_1_15 {
								align = "right";
								pos[] = {"LevelP15", {0.22, 0.035}, 1};
								right[] = {"LevelP15", {0.32, 0.035}, 1};
								down[] = {"LevelP15", {0.22, 0.085}, 1};
							};

							class LevelM20 : Level0 {
								type = "line";
								points[] = {{"LevelM20", {-0.2, -0.03}, 1}, {"LevelM20", {-0.2, 0}, 1}, {"LevelM20", {-0.15, 0}, 1}, {}, {"LevelM20", {-0.1, 0}, 1}, {"LevelM20", {-0.05, 0}, 1}, {}, {"LevelM20", {0.05, 0}, 1}, {"LevelM20", {0.1, 0}, 1}, {}, {"LevelM20", {0.15, 0}, 1}, {"LevelM20", {0.2, 0}, 1}, {"LevelM20", {0.2, -0.03}, 1}};
							};

							class VALM_1_20 {
								type = "text";
								source = "static";
								text = -20;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM20", {-0.23, -0.085}, 1};
								right[] = {"LevelM20", {-0.13, -0.085}, 1};
								down[] = {"LevelM20", {-0.23, -0.035}, 1};
							};

							class VALM_2_20 : VALM_1_20 {
								align = "right";
								pos[] = {"LevelM20", {0.22, -0.085}, 1};
								right[] = {"LevelM20", {0.32, -0.085}, 1};
								down[] = {"LevelM20", {0.22, -0.035}, 1};
							};

							class LevelP20 : Level0 {
								type = "line";
								points[] = {{"LevelP20", {-0.2, 0.03}, 1}, {"LevelP20", {-0.2, 0}, 1}, {"LevelP20", {-0.05, 0}, 1}, {}, {"LevelP20", {0.05, 0}, 1}, {"LevelP20", {0.2, 0}, 1}, {"LevelP20", {0.2, 0.03}, 1}};
							};

							class VALP_1_20 {
								type = "text";
								source = "static";
								text = "20";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP20", {-0.23, 0.035}, 1};
								right[] = {"LevelP20", {-0.13, 0.035}, 1};
								down[] = {"LevelP20", {-0.23, 0.085}, 1};
							};

							class VALP_2_20 : VALP_1_20 {
								align = "right";
								pos[] = {"LevelP20", {0.22, 0.035}, 1};
								right[] = {"LevelP20", {0.32, 0.035}, 1};
								down[] = {"LevelP20", {0.22, 0.085}, 1};
							};

							class LevelM25 : Level0 {
								type = "line";
								points[] = {{"LevelM25", {-0.2, -0.03}, 1}, {"LevelM25", {-0.2, 0}, 1}, {"LevelM25", {-0.15, 0}, 1}, {}, {"LevelM25", {-0.1, 0}, 1}, {"LevelM25", {-0.05, 0}, 1}, {}, {"LevelM25", {0.05, 0}, 1}, {"LevelM25", {0.1, 0}, 1}, {}, {"LevelM25", {0.15, 0}, 1}, {"LevelM25", {0.2, 0}, 1}, {"LevelM25", {0.2, -0.03}, 1}};
							};

							class VALM_1_25 {
								type = "text";
								source = "static";
								text = -25;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM25", {-0.23, -0.085}, 1};
								right[] = {"LevelM25", {-0.13, -0.085}, 1};
								down[] = {"LevelM25", {-0.23, -0.035}, 1};
							};

							class VALM_2_25 : VALM_1_25 {
								align = "right";
								pos[] = {"LevelM25", {0.22, -0.085}, 1};
								right[] = {"LevelM25", {0.32, -0.085}, 1};
								down[] = {"LevelM25", {0.22, -0.035}, 1};
							};

							class LevelP25 : Level0 {
								type = "line";
								points[] = {{"LevelP25", {-0.2, 0.03}, 1}, {"LevelP25", {-0.2, 0}, 1}, {"LevelP25", {-0.05, 0}, 1}, {}, {"LevelP25", {0.05, 0}, 1}, {"LevelP25", {0.2, 0}, 1}, {"LevelP25", {0.2, 0.03}, 1}};
							};

							class VALP_1_25 {
								type = "text";
								source = "static";
								text = "25";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP25", {-0.23, 0.035}, 1};
								right[] = {"LevelP25", {-0.13, 0.035}, 1};
								down[] = {"LevelP25", {-0.23, 0.085}, 1};
							};

							class VALP_2_25 : VALP_1_25 {
								align = "right";
								pos[] = {"LevelP25", {0.22, 0.035}, 1};
								right[] = {"LevelP25", {0.32, 0.035}, 1};
								down[] = {"LevelP25", {0.22, 0.085}, 1};
							};

							class LevelM30 : Level0 {
								type = "line";
								points[] = {{"LevelM30", {-0.2, -0.03}, 1}, {"LevelM30", {-0.2, 0}, 1}, {"LevelM30", {-0.15, 0}, 1}, {}, {"LevelM30", {-0.1, 0}, 1}, {"LevelM30", {-0.05, 0}, 1}, {}, {"LevelM30", {0.05, 0}, 1}, {"LevelM30", {0.1, 0}, 1}, {}, {"LevelM30", {0.15, 0}, 1}, {"LevelM30", {0.2, 0}, 1}, {"LevelM30", {0.2, -0.03}, 1}};
							};

							class VALM_1_30 {
								type = "text";
								source = "static";
								text = -30;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM30", {-0.23, -0.085}, 1};
								right[] = {"LevelM30", {-0.13, -0.085}, 1};
								down[] = {"LevelM30", {-0.23, -0.035}, 1};
							};

							class VALM_2_30 : VALM_1_30 {
								align = "right";
								pos[] = {"LevelM30", {0.22, -0.085}, 1};
								right[] = {"LevelM30", {0.32, -0.085}, 1};
								down[] = {"LevelM30", {0.22, -0.035}, 1};
							};

							class LevelP30 : Level0 {
								type = "line";
								points[] = {{"LevelP30", {-0.2, 0.03}, 1}, {"LevelP30", {-0.2, 0}, 1}, {"LevelP30", {-0.05, 0}, 1}, {}, {"LevelP30", {0.05, 0}, 1}, {"LevelP30", {0.2, 0}, 1}, {"LevelP30", {0.2, 0.03}, 1}};
							};

							class VALP_1_30 {
								type = "text";
								source = "static";
								text = "30";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP30", {-0.23, 0.035}, 1};
								right[] = {"LevelP30", {-0.13, 0.035}, 1};
								down[] = {"LevelP30", {-0.23, 0.085}, 1};
							};

							class VALP_2_30 : VALP_1_30 {
								align = "right";
								pos[] = {"LevelP30", {0.22, 0.035}, 1};
								right[] = {"LevelP30", {0.32, 0.035}, 1};
								down[] = {"LevelP30", {0.22, 0.085}, 1};
							};

							class LevelM35 : Level0 {
								type = "line";
								points[] = {{"LevelM35", {-0.2, -0.03}, 1}, {"LevelM35", {-0.2, 0}, 1}, {"LevelM35", {-0.15, 0}, 1}, {}, {"LevelM35", {-0.1, 0}, 1}, {"LevelM35", {-0.05, 0}, 1}, {}, {"LevelM35", {0.05, 0}, 1}, {"LevelM35", {0.1, 0}, 1}, {}, {"LevelM35", {0.15, 0}, 1}, {"LevelM35", {0.2, 0}, 1}, {"LevelM35", {0.2, -0.03}, 1}};
							};

							class VALM_1_35 {
								type = "text";
								source = "static";
								text = -35;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM35", {-0.23, -0.085}, 1};
								right[] = {"LevelM35", {-0.13, -0.085}, 1};
								down[] = {"LevelM35", {-0.23, -0.035}, 1};
							};

							class VALM_2_35 : VALM_1_35 {
								align = "right";
								pos[] = {"LevelM35", {0.22, -0.085}, 1};
								right[] = {"LevelM35", {0.32, -0.085}, 1};
								down[] = {"LevelM35", {0.22, -0.035}, 1};
							};

							class LevelP35 : Level0 {
								type = "line";
								points[] = {{"LevelP35", {-0.2, 0.03}, 1}, {"LevelP35", {-0.2, 0}, 1}, {"LevelP35", {-0.05, 0}, 1}, {}, {"LevelP35", {0.05, 0}, 1}, {"LevelP35", {0.2, 0}, 1}, {"LevelP35", {0.2, 0.03}, 1}};
							};

							class VALP_1_35 {
								type = "text";
								source = "static";
								text = "35";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP35", {-0.23, 0.035}, 1};
								right[] = {"LevelP35", {-0.13, 0.035}, 1};
								down[] = {"LevelP35", {-0.23, 0.085}, 1};
							};

							class VALP_2_35 : VALP_1_35 {
								align = "right";
								pos[] = {"LevelP35", {0.22, 0.035}, 1};
								right[] = {"LevelP35", {0.32, 0.035}, 1};
								down[] = {"LevelP35", {0.22, 0.085}, 1};
							};

							class LevelM40 : Level0 {
								type = "line";
								points[] = {{"LevelM40", {-0.2, -0.03}, 1}, {"LevelM40", {-0.2, 0}, 1}, {"LevelM40", {-0.15, 0}, 1}, {}, {"LevelM40", {-0.1, 0}, 1}, {"LevelM40", {-0.05, 0}, 1}, {}, {"LevelM40", {0.05, 0}, 1}, {"LevelM40", {0.1, 0}, 1}, {}, {"LevelM40", {0.15, 0}, 1}, {"LevelM40", {0.2, 0}, 1}, {"LevelM40", {0.2, -0.03}, 1}};
							};

							class VALM_1_40 {
								type = "text";
								source = "static";
								text = -40;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM40", {-0.23, -0.085}, 1};
								right[] = {"LevelM40", {-0.13, -0.085}, 1};
								down[] = {"LevelM40", {-0.23, -0.035}, 1};
							};

							class VALM_2_40 : VALM_1_40 {
								align = "right";
								pos[] = {"LevelM40", {0.22, -0.085}, 1};
								right[] = {"LevelM40", {0.32, -0.085}, 1};
								down[] = {"LevelM40", {0.22, -0.035}, 1};
							};

							class LevelP40 : Level0 {
								type = "line";
								points[] = {{"LevelP40", {-0.2, 0.03}, 1}, {"LevelP40", {-0.2, 0}, 1}, {"LevelP40", {-0.05, 0}, 1}, {}, {"LevelP40", {0.05, 0}, 1}, {"LevelP40", {0.2, 0}, 1}, {"LevelP40", {0.2, 0.03}, 1}};
							};

							class VALP_1_40 {
								type = "text";
								source = "static";
								text = "40";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP40", {-0.23, 0.035}, 1};
								right[] = {"LevelP40", {-0.13, 0.035}, 1};
								down[] = {"LevelP40", {-0.23, 0.085}, 1};
							};

							class VALP_2_40 : VALP_1_40 {
								align = "right";
								pos[] = {"LevelP40", {0.22, 0.035}, 1};
								right[] = {"LevelP40", {0.32, 0.035}, 1};
								down[] = {"LevelP40", {0.22, 0.085}, 1};
							};

							class LevelM45 : Level0 {
								type = "line";
								points[] = {{"LevelM45", {-0.2, -0.03}, 1}, {"LevelM45", {-0.2, 0}, 1}, {"LevelM45", {-0.15, 0}, 1}, {}, {"LevelM45", {-0.1, 0}, 1}, {"LevelM45", {-0.05, 0}, 1}, {}, {"LevelM45", {0.05, 0}, 1}, {"LevelM45", {0.1, 0}, 1}, {}, {"LevelM45", {0.15, 0}, 1}, {"LevelM45", {0.2, 0}, 1}, {"LevelM45", {0.2, -0.03}, 1}};
							};

							class VALM_1_45 {
								type = "text";
								source = "static";
								text = -45;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM45", {-0.23, -0.085}, 1};
								right[] = {"LevelM45", {-0.13, -0.085}, 1};
								down[] = {"LevelM45", {-0.23, -0.035}, 1};
							};

							class VALM_2_45 : VALM_1_45 {
								align = "right";
								pos[] = {"LevelM45", {0.22, -0.085}, 1};
								right[] = {"LevelM45", {0.32, -0.085}, 1};
								down[] = {"LevelM45", {0.22, -0.035}, 1};
							};

							class LevelP45 : Level0 {
								type = "line";
								points[] = {{"LevelP45", {-0.2, 0.03}, 1}, {"LevelP45", {-0.2, 0}, 1}, {"LevelP45", {-0.05, 0}, 1}, {}, {"LevelP45", {0.05, 0}, 1}, {"LevelP45", {0.2, 0}, 1}, {"LevelP45", {0.2, 0.03}, 1}};
							};

							class VALP_1_45 {
								type = "text";
								source = "static";
								text = "45";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP45", {-0.23, 0.035}, 1};
								right[] = {"LevelP45", {-0.13, 0.035}, 1};
								down[] = {"LevelP45", {-0.23, 0.085}, 1};
							};

							class VALP_2_45 : VALP_1_45 {
								align = "right";
								pos[] = {"LevelP45", {0.22, 0.035}, 1};
								right[] = {"LevelP45", {0.32, 0.035}, 1};
								down[] = {"LevelP45", {0.22, 0.085}, 1};
							};

							class LevelM50 : Level0 {
								type = "line";
								points[] = {{"LevelM50", {-0.2, -0.03}, 1}, {"LevelM50", {-0.2, 0}, 1}, {"LevelM50", {-0.15, 0}, 1}, {}, {"LevelM50", {-0.1, 0}, 1}, {"LevelM50", {-0.05, 0}, 1}, {}, {"LevelM50", {0.05, 0}, 1}, {"LevelM50", {0.1, 0}, 1}, {}, {"LevelM50", {0.15, 0}, 1}, {"LevelM50", {0.2, 0}, 1}, {"LevelM50", {0.2, -0.03}, 1}};
							};

							class VALM_1_50 {
								type = "text";
								source = "static";
								text = -50;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM50", {-0.23, -0.085}, 1};
								right[] = {"LevelM50", {-0.13, -0.085}, 1};
								down[] = {"LevelM50", {-0.23, -0.035}, 1};
							};

							class VALM_2_50 : VALM_1_50 {
								align = "right";
								pos[] = {"LevelM50", {0.22, -0.085}, 1};
								right[] = {"LevelM50", {0.32, -0.085}, 1};
								down[] = {"LevelM50", {0.22, -0.035}, 1};
							};

							class LevelP50 : Level0 {
								type = "line";
								points[] = {{"LevelP50", {-0.2, 0.03}, 1}, {"LevelP50", {-0.2, 0}, 1}, {"LevelP50", {-0.05, 0}, 1}, {}, {"LevelP50", {0.05, 0}, 1}, {"LevelP50", {0.2, 0}, 1}, {"LevelP50", {0.2, 0.03}, 1}};
							};

							class VALP_1_50 {
								type = "text";
								source = "static";
								text = "50";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP50", {-0.23, 0.035}, 1};
								right[] = {"LevelP50", {-0.13, 0.035}, 1};
								down[] = {"LevelP50", {-0.23, 0.085}, 1};
							};

							class VALP_2_50 : VALP_1_50 {
								align = "right";
								pos[] = {"LevelP50", {0.22, 0.035}, 1};
								right[] = {"LevelP50", {0.32, 0.035}, 1};
								down[] = {"LevelP50", {0.22, 0.085}, 1};
							};
						};
					};

					class RadarTargets {
						type = "radar";
						pos0[] = {0.485, 0.4};
						pos10[] = {1.225, 1.1};
						points[] = {{{-0.05, -0.0472973}, 1}, {{0.05, -0.0472973}, 1}, {{0.05, 0.0472973}, 1}, {{-0.05, 0.0472973}, 1}, {{-0.05, -0.0472973}, 1}};
					};

					class MGun {
						condition = "mgun";

						class Circle {
							type = "line";
							points[] = {{"WeaponAim", {0.01, 0}, 1}, {"WeaponAim", {-0.01, 0}, 1}, {}, {"WeaponAim", {0, 0.00945946}, 1}, {"WeaponAim", {0, -0.00945946}, 1}, {}, {"WeaponAim", {0, -0.0662162}, 1}, {"WeaponAim", {0.049, -0.0463514}, 1}, {"WeaponAim", {0.07, 0}, 1}, {"WeaponAim", {0.049, 0.0463514}, 1}, {"WeaponAim", {0, 0.0662162}, 1}, {"WeaponAim", {-0.049, 0.0463514}, 1}, {"WeaponAim", {-0.07, 0}, 1}, {"WeaponAim", {-0.049, -0.0463514}, 1}, {"WeaponAim", {0, -0.0662162}, 1}, {}, {"WeaponAim", {0, -0.132432}, 1}, {"WeaponAim", {0.07, -0.115216}, 1}, {"WeaponAim", {0.1218, -0.0662162}, 1}, {"WeaponAim", {0.14, 0}, 1}, {"WeaponAim", {0.1218, 0.0662162}, 1}, {"WeaponAim", {0.07, 0.115216}, 1}, {"WeaponAim", {0, 0.132432}, 1}, {"WeaponAim", {-0.07, 0.115216}, 1}, {"WeaponAim", {-0.1218, 0.0662162}, 1}, {"WeaponAim", {-0.14, 0}, 1}, {"WeaponAim", {-0.1218, -0.0662162}, 1}, {"WeaponAim", {-0.07, -0.115216}, 1}, {"WeaponAim", {0, -0.132432}, 1}, {}, {"WeaponAim", {0, -0.132432}, 1}, {"WeaponAim", {0, -0.151351}, 1}, {}, {"WeaponAim", {-0.07, -0.11469}, 1}, {"WeaponAim", {-0.08, -0.131074}, 1}, {}, {"WeaponAim", {-0.121244, -0.0662162}, 1}, {"WeaponAim", {-0.138564, -0.0756757}, 1}, {}, {"WeaponAim", {-0.14, 5.78881e-009}, 1}, {"WeaponAim", {-0.16, 6.61578e-009}, 1}, {}, {"WeaponAim", {-0.121244, 0.0662162}, 1}, {"WeaponAim", {-0.138564, 0.0756757}, 1}, {}, {"WeaponAim", {-0.07, 0.11469}, 1}, {"WeaponAim", {-0.08, 0.131074}, 1}, {}, {"WeaponAim", {1.22392e-008, 0.132432}, 1}, {"WeaponAim", {1.39876e-008, 0.151351}, 1}, {}, {"WeaponAim", {0.07, 0.11469}, 1}, {"WeaponAim", {0.08, 0.131074}, 1}, {}, {"WeaponAim", {0.121244, 0.0662162}, 1}, {"WeaponAim", {0.138564, 0.0756757}, 1}, {}, {"WeaponAim", {0.14, -1.57924e-009}, 1}, {"WeaponAim", {0.16, -1.80485e-009}, 1}, {}, {"WeaponAim", {0.121244, -0.0662162}, 1}, {"WeaponAim", {0.138564, -0.0756757}, 1}, {}, {"WeaponAim", {0.07, -0.11469}, 1}, {"WeaponAim", {0.08, -0.131074}, 1}, {}};
						};
					};

					class Bomb {
						condition = "bomb";

						class Circle {
							type = "line";
							points[] = {{"WeaponAim", {0, -0.0945946}, 1}, {"WeaponAim", {0.05, -0.0822973}, 1}, {"WeaponAim", {0.087, -0.0472973}, 1}, {"WeaponAim", {0.1, 0}, 1}, {"WeaponAim", {0.087, 0.0472973}, 1}, {"WeaponAim", {0.05, 0.0822973}, 1}, {"WeaponAim", {0, 0.0945946}, 1}, {"WeaponAim", {-0.05, 0.0822973}, 1}, {"WeaponAim", {-0.087, 0.0472973}, 1}, {"WeaponAim", {-0.1, 0}, 1}, {"WeaponAim", {-0.087, -0.0472973}, 1}, {"WeaponAim", {-0.05, -0.0822973}, 1}, {"WeaponAim", {0, -0.0945946}, 1}, {}, {"Velocity", 0.001, "WeaponAim", {0.0, 0.0}, 1}, {"Velocity", {0.0, 0.0}, 1}, {}, {"Target", {0, -0.0662162}, 1}, {"Target", {0.07, 0}, 1}, {"Target", {0, 0.0662162}, 1}, {"Target", {-0.07, 0}, 1}, {"Target", {0, -0.0662162}, 1}};
						};
					};

					class AAMissile {
						condition = "AAmissile";

						class Circle {
							type = "line";
							points[] = {{"WeaponAim", {0, -0.236486}, 1}, {"WeaponAim", {0.125, -0.205743}, 1}, {"WeaponAim", {0.2175, -0.118243}, 1}, {"WeaponAim", {0.25, 0}, 1}, {"WeaponAim", {0.2175, 0.118243}, 1}, {"WeaponAim", {0.125, 0.205743}, 1}, {"WeaponAim", {0, 0.236486}, 1}, {"WeaponAim", {-0.125, 0.205743}, 1}, {"WeaponAim", {-0.2175, 0.118243}, 1}, {"WeaponAim", {-0.25, 0}, 1}, {"WeaponAim", {-0.2175, -0.118243}, 1}, {"WeaponAim", {-0.125, -0.205743}, 1}, {"WeaponAim", {0, -0.236486}, 1}, {}, {"Target", {0, -0.0662162}, 1}, {"Target", {0.07, 0}, 1}, {"Target", {0, 0.0662162}, 1}, {"Target", {-0.07, 0}, 1}, {"Target", {0, -0.0662162}, 1}};
						};
					};

					class ATMissile {
						condition = "ATmissile";

						class Circle {
							type = "line";
							points[] = {{"WeaponAim", {0, -0.17027}, 1}, {"WeaponAim", {0.09, -0.148135}, 1}, {"WeaponAim", {0.1566, -0.0851351}, 1}, {"WeaponAim", {0.18, 0}, 1}, {"WeaponAim", {0.1566, 0.0851351}, 1}, {"WeaponAim", {0.09, 0.148135}, 1}, {"WeaponAim", {0, 0.17027}, 1}, {"WeaponAim", {-0.09, 0.148135}, 1}, {"WeaponAim", {-0.1566, 0.0851351}, 1}, {"WeaponAim", {-0.18, 0}, 1}, {"WeaponAim", {-0.1566, -0.0851351}, 1}, {"WeaponAim", {-0.09, -0.148135}, 1}, {"WeaponAim", {0, -0.17027}, 1}, {}, {"Target", {0, -0.0662162}, 1}, {"Target", {0.07, 0}, 1}, {"Target", {0, 0.0662162}, 1}, {"Target", {-0.07, 0}, 1}, {"Target", {0, -0.0662162}, 1}};
						};
					};

					class Rockets {
						condition = "Rocket";

						class Circle {
							type = "line";
							points[] = {{"WeaponAim", {0.01, 0}, 1}, {"WeaponAim", {-0.01, 0}, 1}, {}, {"WeaponAim", {0, 0.00945946}, 1}, {"WeaponAim", {0, -0.00945946}, 1}, {}, {"WeaponAim", {0, -0.113514}, 1}, {"WeaponAim", {0.06, -0.0987568}, 1}, {"WeaponAim", {0.1044, -0.0567568}, 1}, {"WeaponAim", {0.12, 0}, 1}, {"WeaponAim", {0.1044, 0.0567568}, 1}, {"WeaponAim", {0.06, 0.0987568}, 1}, {"WeaponAim", {0, 0.113514}, 1}, {"WeaponAim", {-0.06, 0.0987568}, 1}, {"WeaponAim", {-0.1044, 0.0567568}, 1}, {"WeaponAim", {-0.12, 0}, 1}, {"WeaponAim", {-0.1044, -0.0567568}, 1}, {"WeaponAim", {-0.06, -0.0987568}, 1}, {"WeaponAim", {0, -0.113514}, 1}, {}};
						};
					};

					class AltScale {
						type = "scale";
						scale = 1;
						source = "altitudeASL";
						sourceScale = 1;
						align = "right";
						pos[] = {0.86, 0.82};
						right[] = {0.94, 0.82};
						down[] = {0.86, 0.87};
						lineXleft = 0.825;
						lineYright = 0.835;
						lineXleftMajor = 0.825;
						lineYrightMajor = 0.845;
						bottom = 0.2;
						top = 0.85;
						center = 0.5;
						step = 20;
						StepSize = (0.85- 0.2)/20;
						horizontal = 0;
						min = "none";
						max = "none";
						numberEach = 5;
						majorLineEach = 5;
					};

					class SpeedScale {
						type = "scale";
						scale = 1;
						source = "speed";
						sourceScale = 3.6;
						align = "right";
						pos[] = {0.06, 0.82-0.85+0.2};
						right[] = {0.14, 0.82-0.85+0.2};
						down[] = {0.06, 0.87-0.85+0.2};
						lineXleft = 0.18 + 0.82 - 0.825;
						lineYright = 0.18 + 0.82 - 0.835;
						lineXleftMajor = 0.18 + 0.82 - 0.825;
						lineYrightMajor = 0.18 + 0.82 - 0.845;
						bottom = 0.85;
						center = 0.5;
						top = 0.2;
						step = 20;
						StepSize = (0.85- 0.2)/20;
						horizontal = 0;
						min = "none";
						max = "none";
						numberEach = 5;
						majorLineEach = 5;
					};

					class Gear {
						condition = "ils";

						class text {
							type = "text";
							source = "static";
							text = GEAR;
							align = "right";
							scale = 0.5;
							sourceScale = 1;
							pos[] = {{0.84, 0.88}, 1};
							right[] = {{0.9, 0.88}, 1};
							down[] = {{0.84, 0.92}, 1};
						};
					};

					class Flaps {
						condition = "flaps";

						class text {
							type = "text";
							source = "static";
							text = FLAPS;
							align = "right";
							scale = 0.5;
							sourceScale = 1;
							pos[] = {{0.84, 0.93}, 1};
							right[] = {{0.9, 0.93}, 1};
							down[] = {{0.84, 0.97}, 1};
						};
					};

					class weapons {
						type = "text";
						source = "weapon";
						align = "right";
						scale = 0.5;
						sourceScale = 1;
						pos[] = {{0.1, 0.88}, 1};
						right[] = {{0.16, 0.88}, 1};
						down[] = {{0.1, 0.92}, 1};
					};

					class ammo {
						type = "text";
						source = "ammo";
						align = "right";
						scale = 0.5;
						sourceScale = 1;
						pos[] = {{0.1, 0.93}, 1};
						right[] = {{0.16, 0.93}, 1};
						down[] = {{0.1, 0.97}, 1};
					};

					class VspeedNumber {
						type = "text";
						align = "right";
						scale = 1;
						source = "vspeed";
						sourceScale = 1;
						pos[] = {{0.86, 0.52-0.4}, 1};
						right[] = {{0.94, 0.52-0.4}, 1};
						down[] = {{0.86, 0.57-0.4}, 1};
					};

					class HeadingScale {
						type = "scale";
						scale = 1;
						source = "Heading";
						sourceScale = 1;
						align = "center";
						pos[] = {0.21-0.01, 0.0};
						right[] = {0.29-0.01, 0.0};
						down[] = {0.21-0.01, 0.05};
						lineXleft = 0.06;
						lineYright = 0.05;
						lineXleftMajor = 0.06;
						lineYrightMajor = 0.04;
						bottom = 0.8;
						center = 0.5;
						top = 0.2;
						step = 18/9;
						StepSize = (0.80- 0.2)/20;
						horizontal = 1;
						min = "none";
						max = "none";
						numberEach = 5;
						majorLineEach = 5;
					};

					class ILS {
						condition = "ils";

						class Glideslope {
							clipTL[] = {0.0, 0.0};
							clipBR[] = {1.0, 1.0};

							class ILS {
								type = "line";
								points[] = {{ILS_W, {-0.24, 0}, 1}, {ILS_W, {0.24, 0}, 1}, {}, {ILS_W, {0, 0.0227027}, 1}, {ILS_W, {0, -0.0227027}, 1}, {}, {ILS_W, {0.12, 0.0227027}, 1}, {ILS_W, {0.12, -0.0227027}, 1}, {}, {ILS_W, {0.24, 0.0227027}, 1}, {ILS_W, {0.24, -0.0227027}, 1}, {}, {ILS_W, {-0.12, 0.0227027}, 1}, {ILS_W, {-0.12, -0.0227027}, 1}, {}, {ILS_W, {-0.24, 0.0227027}, 1}, {ILS_W, {-0.24, -0.0227027}, 1}, {}, {ILS_H, {0, -0.227027}, 1}, {ILS_H, {0, 0.227027}, 1}, {}, {ILS_H, {0.024, 0}, 1}, {ILS_H, {-0.024, 0}, 1}, {}, {ILS_H, {0.024, 0.113514}, 1}, {ILS_H, {-0.024, 0.113514}, 1}, {}, {ILS_H, {0.024, 0.227027}, 1}, {ILS_H, {-0.024, 0.227027}, 1}, {}, {ILS_H, {0.024, -0.113514}, 1}, {ILS_H, {-0.024, -0.113514}, 1}, {}, {ILS_H, {0.024, -0.227027}, 1}, {ILS_H, {-0.024, -0.227027}, 1}};
							};
						};
					};
				};
			};
			class HUD2: HUD
			{
				topLeft = "HUD2 LH";
				topRight = "HUD2 PH";
				bottomLeft = "HUD2 LD";
			};
		};
	};

	class b1b_MK82 : b1b {
		scope = public;
		displayName = "$STR_B1B_NAME1";
		model = "\b1b\b1b.p3d";

		class Turrets
		{
			class MainTurret : NewTurret
			{
				body = "";
				gun = "";
				commanding = -1;
				proxyIndex = 1;
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				castGunnerShadow = true;
				viewGunnerShadow = true;
				gunnerAction = "A10_Pilot";
				gunnerInAction = "A10_Pilot";
				//gunnerOpticsModel = "\b1b\optics\optika_b1b.p3d";
				//gunnerForceOptics = true;
				gunnerCompartments= "Compartment1";
				primaryGunner = 1;
				weapons[] = {};
				magazines[] = {"56Rnd_MK82_b1b"};
			};
		};

		class UserActions
		{
			class OWSOConsole
			{
				displayName = "$STR_B1B_CON";
				position = "action_point";
				radius = 15;
				showwindow=0;
				condition = "(vehicle player == this)&&(gunner (vehicle player) == player);";
				statement = "[] execvm ""\b1b\scr\wso_console1.sqf"";";
				onlyforplayer = 1;
			};

			class WeaponDoorOpen
			{
				displayName = "$STR_B1B_BBN";
				position = "action_point";
				radius = 15;
				showwindow=0;
				condition = "this animationPhase ""fst_1"" == 0&&player in this;";
				statement = "this addweapon ""BombLauncher_MK82"";this addweapon ""JSOWLauncher"";this selectweapon ""BombLauncher_MK82"";this animate [""fst_1"",1];this animate [""fst_2"",1];";
				onlyforplayer = 1;
			};

			class WeaponDoorClose
			{
				displayName = "$STR_B1B_BBF";
				position = "action_point";
				radius = 15;
				showwindow=0;
				condition = "this animationPhase ""fst_1"" == 1&&player in this;";
				statement = "this removeweapon ""BombLauncher_MK82"";this removeweapon ""JSOWLauncher"";this animate [""fst_1"",0];this animate [""fst_2"",0];";
				onlyforplayer = 1;
			};

			class ABurner_on
			{
				displayName = "$STR_B1B_BON";
				position = "action_point";
				onlyforplayer = 0;
				radius = 15;
				showWindow = 0;
				condition = "(this animationPhase ""ABSwitch"" < 0.1)";
				statement = "this animate [""ABSwitch"",1]; this animate [""ab"",0];";
			};

			class ABurner_off
			{
				displayName = "$STR_B1B_BOFF";
				position = "action_point";
				onlyforplayer = 0;
				radius = 15;
				showWindow = 0;
				condition = "(this animationPhase ""ABSwitch"" > 0.9)";
				statement = "this animate [""ABSwitch"",0];  this animate [""ab"",1];";
			};

			class HAW
			{
				displayName = "$STR_B1B_HAW";
				position = "action_point";
				onlyforplayer = 0;
				radius = 15;
				showWindow = 0;
				condition = "(this animationPhase ""WingsSwitch"" < 0.1)";
				statement = "this animate [""WingsSwitch"",1]";
			};

			class FAW
			{
				displayName = "$STR_B1B_FAW";
				position = "action_point";
				onlyforplayer = 0;
				radius = 15;
				showWindow = 0;
				condition = "(this animationPhase ""WingsSwitch"" > 0.9)";
				statement = "this animate [""WingsSwitch"",0]";
			};

			class LON
			{
				displayName = "$STR_B1B_LON";
				position = "doorarea";
				onlyforplayer = 0;
				radius = 15;
				showWindow = 0;
				condition = "(this animationPhase ""LightsSwitch"" < 0.1)";
				statement = "this animate [""LightsSwitch"",1]; this action [""lightOn"", rlancer]; this action [""lightOn"", llancer];";
			};

			class LOFF
			{
				displayName = "$STR_B1B_LOFF";
				position = "doorarea";
				onlyforplayer = 0;
				radius = 15;
				showWindow = 0;
				condition = "(this animationPhase ""LightsSwitch"" > 0.9)";
				statement = "this animate [""LightsSwitch"",0]; this action [""lightOff"", rlancer]; this action [""lightOff"", llancer];";
			};
		};
	};

	class b1b_GBU38 : b1b {
		scope = public;
		displayName = "$STR_B1B_NAME2";
		model = "\b1b\b1b.p3d";

		class Turrets
		{
			class MainTurret : NewTurret
			{
				body = "";
				gun = "";
				commanding = -1;
				proxyIndex = 1;
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				castGunnerShadow = true;
				viewGunnerShadow = true;
				gunnerAction = "A10_Pilot";
				gunnerInAction = "A10_Pilot";
				//gunnerOpticsModel = "\b1b\optics\optika_b1b.p3d";
				//gunnerForceOptics = true;
				gunnerCompartments= "Compartment1";
				primaryGunner = 1;
				weapons[] = {};
				magazines[] = {"56Rnd_GBU38_b1b"};
			};
		};

		class UserActions {
			class OWSOConsole {
				displayName = "$STR_B1B_CON";
				position = "action_point";
				radius = 15;
				showWindow = 0;
				condition = "(vehicle player == this)&&(gunner (vehicle player) == player);";
				statement = "[] execvm ""\b1b\scr\wso_console1.sqf"";";
				onlyforplayer = 1;
			};

			class WeaponDoorOpen {
				displayName = "$STR_B1B_BBN";
				position = "action_point";
				radius = 15;
				showWindow = 0;
				condition = "this animationPhase ""fst_1"" == 0&&player in this;";
				statement = "this addweapon ""BombLauncher_GBU38"";this addweapon ""JSOWLauncher"";this selectweapon ""BombLauncher_GBU38"";this animate [""fst_1"",1];this animate [""fst_2"",1];";
				onlyforplayer = 1;
			};

			class WeaponDoorClose {
				displayName = "$STR_B1B_BBF";
				position = "action_point";
				radius = 15;
				showWindow = 0;
				condition = "this animationPhase ""fst_1"" == 1&&player in this;";
				statement = "this removeweapon ""BombLauncher_GBU38"";this removeweapon ""JSOWLauncher"";this animate [""fst_1"",0];this animate [""fst_2"",0];";
				onlyforplayer = 1;
			};

			class ABurner_on
			{
				displayName = "$STR_B1B_BON";
				position = "action_point";
				onlyforplayer = 0;
				radius = 15;
				showWindow = 0;
				condition = "(this animationPhase ""ABSwitch"" < 0.1)";
				statement = "this animate [""ABSwitch"",1]; this animate [""ab"",0];";
			};

			class ABurner_off
			{
				displayName = "$STR_B1B_BOFF";
				position = "action_point";
				onlyforplayer = 0;
				radius = 15;
				showWindow = 0;
				condition = "(this animationPhase ""ABSwitch"" > 0.9)";
				statement = "this animate [""ABSwitch"",0];  this animate [""ab"",1];";
			};

			class HAW
			{
				displayName = "$STR_B1B_HAW";
				position = "action_point";
				onlyforplayer = 0;
				radius = 15;
				showWindow = 0;
				condition = "(this animationPhase ""WingsSwitch"" < 0.1)";
				statement = "this animate [""WingsSwitch"",1]";
			};

			class FAW
			{
				displayName = "$STR_B1B_FAW";
				position = "action_point";
				onlyforplayer = 0;
				radius = 15;
				showWindow = 0;
				condition = "(this animationPhase ""WingsSwitch"" > 0.9)";
				statement = "this animate [""WingsSwitch"",0]";
			};

			class LON
			{
				displayName = "$STR_B1B_LON";
				position = "doorarea";
				onlyforplayer = 0;
				radius = 15;
				showWindow = 0;
				condition = "(this animationPhase ""LightsSwitch"" < 0.1)";
				statement = "this animate [""LightsSwitch"",1]; this action [""lightOn"", rlancer]; this action [""lightOn"", llancer];";
			};

			class LOFF
			{
				displayName = "$STR_B1B_LOFF";
				position = "doorarea";
				onlyforplayer = 0;
				radius = 15;
				showWindow = 0;
				condition = "(this animationPhase ""LightsSwitch"" > 0.9)";
				statement = "this animate [""LightsSwitch"",0]; this action [""lightOff"", rlancer]; this action [""lightOff"", llancer];";
			};
		};
	};

	class b1b_GBU31 : b1b {
		scope = public;
		displayName = "$STR_B1B_NAME3";
		model = "\b1b\b1b.p3d";

		class Turrets
		{
			class MainTurret : NewTurret
			{
				body = "";
				gun = "";
				commanding = -1;
				proxyIndex = 1;
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				castGunnerShadow = true;
				viewGunnerShadow = true;
				gunnerAction = "A10_Pilot";
				gunnerInAction = "A10_Pilot";
				//gunnerOpticsModel = "\b1b\optics\optika_b1b.p3d";
				//gunnerForceOptics = true;
				gunnerCompartments= "Compartment1";
				primaryGunner = 1;
				weapons[] = {};
				magazines[] = {"16Rnd_GBU31_b1b"};
			};
		};

		class UserActions {
			class OWSOConsole {
				displayName = "$STR_B1B_CON";
				position = "action_point";
				radius = 15;
				showWindow = 0;
				condition = "(vehicle player == this)&&(gunner (vehicle player) == player);";
				statement = "[] execvm ""\b1b\scr\wso_console1.sqf"";";
				onlyforplayer = 1;
			};

			class WeaponDoorOpen {
				displayName = "$STR_B1B_BBN";
				position = "action_point";
				radius = 15;
				showWindow = 0;
				condition = "this animationPhase ""fst_1"" == 0&&player in this;";
				statement = "this addweapon ""BombLauncher_GBU31"";this addweapon ""JSOWLauncher"";this selectweapon ""BombLauncher_GBU31"";this animate [""fst_1"",1];this animate [""fst_2"",1];";
				onlyforplayer = 1;
			};

			class WeaponDoorClose {
				displayName = "$STR_B1B_BBF";
				position = "action_point";
				radius = 15;
				showWindow = 0;
				condition = "this animationPhase ""fst_1"" == 1&&player in this;";
				statement = "this removeweapon ""BombLauncher_GBU31"";this removeweapon ""JSOWLauncher"";this animate [""fst_1"",0];this animate [""fst_2"",0];";
				onlyforplayer = 1;
			};

			class ABurner_on
			{
				displayName = "$STR_B1B_BON";
				position = "action_point";
				onlyforplayer = 0;
				radius = 15;
				showWindow = 0;
				condition = "(this animationPhase ""ABSwitch"" < 0.1)";
				statement = "this animate [""ABSwitch"",1]; this animate [""ab"",0];";
			};

			class ABurner_off
			{
				displayName = "$STR_B1B_BOFF";
				position = "action_point";
				onlyforplayer = 0;
				radius = 15;
				showWindow = 0;
				condition = "(this animationPhase ""ABSwitch"" > 0.9)";
				statement = "this animate [""ABSwitch"",0];  this animate [""ab"",1];";
			};

			class HAW
			{
				displayName = "$STR_B1B_HAW";
				position = "action_point";
				onlyforplayer = 0;
				radius = 15;
				showWindow = 0;
				condition = "(this animationPhase ""WingsSwitch"" < 0.1)";
				statement = "this animate [""WingsSwitch"",1]";
			};

			class FAW
			{
				displayName = "$STR_B1B_FAW";
				position = "action_point";
				onlyforplayer = 0;
				radius = 15;
				showWindow = 0;
				condition = "(this animationPhase ""WingsSwitch"" > 0.9)";
				statement = "this animate [""WingsSwitch"",0]";
			};

			class LON
			{
				displayName = "$STR_B1B_LON";
				position = "doorarea";
				onlyforplayer = 0;
				radius = 15;
				showWindow = 0;
				condition = "(this animationPhase ""LightsSwitch"" < 0.1)";
				statement = "this animate [""LightsSwitch"",1]; this action [""lightOn"", rlancer]; this action [""lightOn"", llancer];";
			};

			class LOFF
			{
				displayName = "$STR_B1B_LOFF";
				position = "doorarea";
				onlyforplayer = 0;
				radius = 15;
				showWindow = 0;
				condition = "(this animationPhase ""LightsSwitch"" > 0.9)";
				statement = "this animate [""LightsSwitch"",0]; this action [""lightOff"", rlancer]; this action [""lightOff"", llancer];";
			};
		};
	};

	class b1b_MK82_85060 : b1b_MK82
	{
		displayName = "$STR_B1B_NAME4";
		hiddenSelections[]={
								"Aerials",
								"EngIntakes",
								"Lancer_1",
								"Lancer_2",
								"Lancer_3",
								"Lancer_4",
								"Lancer_5",
								"Lancer_6",
								"Lancer_7",
								"v_gens"
							};
		hiddenSelectionsTextures[] = 	{
											"\b1b\liveries\85060\Aerials.pac",
											"\b1b\liveries\85060\EngIntakes.pac",
											"\b1b\liveries\85060\Lancer_1.pac",
											"\b1b\liveries\85060\Lancer_2.pac",
											"\b1b\liveries\85060\Lancer_3.pac",
											"\b1b\liveries\85060\Lancer_4.pac",
											"\b1b\liveries\85060\Lancer_5.pac",
											"\b1b\liveries\85060\Lancer_6.pac",
											"\b1b\liveries\85060\Lancer_7.pac",
											"\b1b\liveries\85060\v_gens.pac"
										};
	};

	class b1b_MK82_85064 : b1b_MK82
	{
		displayName = "$STR_B1B_NAME5";
		hiddenSelections[]={
								"Aerials",
								"EngIntakes",
								"Lancer_1",
								"Lancer_2",
								"Lancer_3",
								"Lancer_4",
								"Lancer_5",
								"Lancer_6",
								"Lancer_7",
								"v_gens"
							};
		hiddenSelectionsTextures[] = 	{
											"\b1b\liveries\85064\Aerials.pac",
											"\b1b\liveries\85064\EngIntakes.pac",
											"\b1b\liveries\85064\Lancer_1.pac",
											"\b1b\liveries\85064\Lancer_2.pac",
											"\b1b\liveries\85064\Lancer_3.pac",
											"\b1b\liveries\85064\Lancer_4.pac",
											"\b1b\liveries\85064\Lancer_5.pac",
											"\b1b\liveries\85064\Lancer_6.pac",
											"\b1b\liveries\85064\Lancer_7.pac",
											"\b1b\liveries\85064\v_gens.pac"
										};
	};

	class b1b_MK82_85069 : b1b_MK82
	{
		displayName = "$STR_B1B_NAME6";
		hiddenSelections[]={
								"Aerials",
								"EngIntakes",
								"Lancer_1",
								"Lancer_2",
								"Lancer_3",
								"Lancer_4",
								"Lancer_5",
								"Lancer_6",
								"Lancer_7",
								"v_gens"
							};
		hiddenSelectionsTextures[] = 	{
											"\b1b\liveries\85069\Aerials.pac",
											"\b1b\liveries\85069\EngIntakes.pac",
											"\b1b\liveries\85069\Lancer_1.pac",
											"\b1b\liveries\85069\Lancer_2.pac",
											"\b1b\liveries\85069\Lancer_3.pac",
											"\b1b\liveries\85069\Lancer_4.pac",
											"\b1b\liveries\85069\Lancer_5.pac",
											"\b1b\liveries\85069\Lancer_6.pac",
											"\b1b\liveries\85069\Lancer_7.pac",
											"\b1b\liveries\85069\v_gens.pac"
										};
	};

	class b1b_MK82_85070 : b1b_MK82
	{
		displayName = "$STR_B1B_NAME7";
		hiddenSelections[]={
								"Aerials",
								"EngIntakes",
								"Lancer_1",
								"Lancer_2",
								"Lancer_3",
								"Lancer_4",
								"Lancer_5",
								"Lancer_6",
								"Lancer_7",
								"v_gens"
							};
		hiddenSelectionsTextures[] = 	{
											"\b1b\liveries\85070\Aerials.pac",
											"\b1b\liveries\85070\EngIntakes.pac",
											"\b1b\liveries\85070\Lancer_1.pac",
											"\b1b\liveries\85070\Lancer_2.pac",
											"\b1b\liveries\85070\Lancer_3.pac",
											"\b1b\liveries\85070\Lancer_4.pac",
											"\b1b\liveries\85070\Lancer_5.pac",
											"\b1b\liveries\85070\Lancer_6.pac",
											"\b1b\liveries\85070\Lancer_7.pac",
											"\b1b\liveries\85070\v_gens.pac"
										};
	};

	class b1b_MK82_85075 : b1b_MK82
	{
		displayName = "$STR_B1B_NAME8";
		hiddenSelections[]={
								"Aerials",
								"EngIntakes",
								"Lancer_1",
								"Lancer_2",
								"Lancer_3",
								"Lancer_4",
								"Lancer_5",
								"Lancer_6",
								"Lancer_7",
								"v_gens"
							};
		hiddenSelectionsTextures[] = 	{
											"\b1b\liveries\85075\Aerials.pac",
											"\b1b\liveries\85075\EngIntakes.pac",
											"\b1b\liveries\85075\Lancer_1.pac",
											"\b1b\liveries\85075\Lancer_2.pac",
											"\b1b\liveries\85075\Lancer_3.pac",
											"\b1b\liveries\85075\Lancer_4.pac",
											"\b1b\liveries\85075\Lancer_5.pac",
											"\b1b\liveries\85075\Lancer_6.pac",
											"\b1b\liveries\85075\Lancer_7.pac",
											"\b1b\liveries\85075\v_gens.pac"
										};
	};

	class b1b_MK82_85080 : b1b_MK82
	{
		displayName = "$STR_B1B_NAME9";
		hiddenSelections[]={
								"Aerials",
								"EngIntakes",
								"Lancer_1",
								"Lancer_2",
								"Lancer_3",
								"Lancer_4",
								"Lancer_5",
								"Lancer_6",
								"Lancer_7",
								"v_gens"
							};
		hiddenSelectionsTextures[] = 	{
											"\b1b\liveries\85080\Aerials.pac",
											"\b1b\liveries\85080\EngIntakes.pac",
											"\b1b\liveries\85080\Lancer_1.pac",
											"\b1b\liveries\85080\Lancer_2.pac",
											"\b1b\liveries\85080\Lancer_3.pac",
											"\b1b\liveries\85080\Lancer_4.pac",
											"\b1b\liveries\85080\Lancer_5.pac",
											"\b1b\liveries\85080\Lancer_6.pac",
											"\b1b\liveries\85080\Lancer_7.pac",
											"\b1b\liveries\85080\v_gens.pac"
										};
	};

	class b1b_MK82_85081 : b1b_MK82
	{
		displayName = "$STR_B1B_NAME10";
		hiddenSelections[]={
								"Aerials",
								"EngIntakes",
								"Lancer_1",
								"Lancer_2",
								"Lancer_3",
								"Lancer_4",
								"Lancer_5",
								"Lancer_6",
								"Lancer_7",
								"v_gens"
							};
		hiddenSelectionsTextures[] = 	{
											"\b1b\liveries\85081\Aerials.pac",
											"\b1b\liveries\85081\EngIntakes.pac",
											"\b1b\liveries\85081\Lancer_1.pac",
											"\b1b\liveries\85081\Lancer_2.pac",
											"\b1b\liveries\85081\Lancer_3.pac",
											"\b1b\liveries\85081\Lancer_4.pac",
											"\b1b\liveries\85081\Lancer_5.pac",
											"\b1b\liveries\85081\Lancer_6.pac",
											"\b1b\liveries\85081\Lancer_7.pac",
											"\b1b\liveries\85081\v_gens.pac"
										};
	};

	class b1b_MK82_85088 : b1b_MK82
	{
		displayName = "$STR_B1B_NAME11";
		hiddenSelections[]={
								"Aerials",
								"EngIntakes",
								"Lancer_1",
								"Lancer_2",
								"Lancer_3",
								"Lancer_4",
								"Lancer_5",
								"Lancer_6",
								"Lancer_7",
								"v_gens"
							};
		hiddenSelectionsTextures[] = 	{
											"\b1b\liveries\85088\Aerials.pac",
											"\b1b\liveries\85088\EngIntakes.pac",
											"\b1b\liveries\85088\Lancer_1.pac",
											"\b1b\liveries\85088\Lancer_2.pac",
											"\b1b\liveries\85088\Lancer_3.pac",
											"\b1b\liveries\85088\Lancer_4.pac",
											"\b1b\liveries\85088\Lancer_5.pac",
											"\b1b\liveries\85088\Lancer_6.pac",
											"\b1b\liveries\85088\Lancer_7.pac",
											"\b1b\liveries\85088\v_gens.pac"
										};
	};

	class b1b_MK82_85095 : b1b_MK82
	{
		displayName = "$STR_B1B_NAME12";
		hiddenSelections[]={
								"Aerials",
								"EngIntakes",
								"Lancer_1",
								"Lancer_2",
								"Lancer_3",
								"Lancer_4",
								"Lancer_5",
								"Lancer_6",
								"Lancer_7",
								"v_gens"
							};
		hiddenSelectionsTextures[] = 	{
											"\b1b\liveries\85095\Aerials.pac",
											"\b1b\liveries\85095\EngIntakes.pac",
											"\b1b\liveries\85095\Lancer_1.pac",
											"\b1b\liveries\85095\Lancer_2.pac",
											"\b1b\liveries\85095\Lancer_3.pac",
											"\b1b\liveries\85095\Lancer_4.pac",
											"\b1b\liveries\85095\Lancer_5.pac",
											"\b1b\liveries\85095\Lancer_6.pac",
											"\b1b\liveries\85095\Lancer_7.pac",
											"\b1b\liveries\85095\v_gens.pac"
										};
	};

	class b1b_MK82_85115 : b1b_MK82
	{
		displayName = "$STR_B1B_NAME13";
		hiddenSelections[]={
								"Aerials",
								"EngIntakes",
								"Lancer_1",
								"Lancer_2",
								"Lancer_3",
								"Lancer_4",
								"Lancer_5",
								"Lancer_6",
								"Lancer_7",
								"v_gens"
							};
		hiddenSelectionsTextures[] = 	{
											"\b1b\liveries\85115\Aerials.pac",
											"\b1b\liveries\85115\EngIntakes.pac",
											"\b1b\liveries\85115\Lancer_1.pac",
											"\b1b\liveries\85115\Lancer_2.pac",
											"\b1b\liveries\85115\Lancer_3.pac",
											"\b1b\liveries\85115\Lancer_4.pac",
											"\b1b\liveries\85115\Lancer_5.pac",
											"\b1b\liveries\85115\Lancer_6.pac",
											"\b1b\liveries\85115\Lancer_7.pac",
											"\b1b\liveries\85115\v_gens.pac"
										};
	};

	class b1b_MK82_85127 : b1b_MK82
	{
		displayName = "$STR_B1B_NAME14";
		hiddenSelections[]={
								"Aerials",
								"EngIntakes",
								"Lancer_1",
								"Lancer_2",
								"Lancer_3",
								"Lancer_4",
								"Lancer_5",
								"Lancer_6",
								"Lancer_7",
								"v_gens"
							};
		hiddenSelectionsTextures[] = 	{
											"\b1b\liveries\85127\Aerials.pac",
											"\b1b\liveries\85127\EngIntakes.pac",
											"\b1b\liveries\85127\Lancer_1.pac",
											"\b1b\liveries\85127\Lancer_2.pac",
											"\b1b\liveries\85127\Lancer_3.pac",
											"\b1b\liveries\85127\Lancer_4.pac",
											"\b1b\liveries\85127\Lancer_5.pac",
											"\b1b\liveries\85127\Lancer_6.pac",
											"\b1b\liveries\85127\Lancer_7.pac",
											"\b1b\liveries\85127\v_gens.pac"
										};
	};

	class b1b_MK82_85129 : b1b_MK82
	{
		displayName = "$STR_B1B_NAME15";
		hiddenSelections[]={
								"Aerials",
								"EngIntakes",
								"Lancer_1",
								"Lancer_2",
								"Lancer_3",
								"Lancer_4",
								"Lancer_5",
								"Lancer_6",
								"Lancer_7",
								"v_gens"
							};
		hiddenSelectionsTextures[] = 	{
											"\b1b\liveries\85129\Aerials.pac",
											"\b1b\liveries\85129\EngIntakes.pac",
											"\b1b\liveries\85129\Lancer_1.pac",
											"\b1b\liveries\85129\Lancer_2.pac",
											"\b1b\liveries\85129\Lancer_3.pac",
											"\b1b\liveries\85129\Lancer_4.pac",
											"\b1b\liveries\85129\Lancer_5.pac",
											"\b1b\liveries\85129\Lancer_6.pac",
											"\b1b\liveries\85129\Lancer_7.pac",
											"\b1b\liveries\85129\v_gens.pac"
										};
	};

	class b1b_MK82_85136 : b1b_MK82
	{
		displayName = "$STR_B1B_NAME16";
		hiddenSelections[]={
								"Aerials",
								"EngIntakes",
								"Lancer_1",
								"Lancer_2",
								"Lancer_3",
								"Lancer_4",
								"Lancer_5",
								"Lancer_6",
								"Lancer_7",
								"v_gens"
							};
		hiddenSelectionsTextures[] = 	{
											"\b1b\liveries\85136\Aerials.pac",
											"\b1b\liveries\85136\EngIntakes.pac",
											"\b1b\liveries\85136\Lancer_1.pac",
											"\b1b\liveries\85136\Lancer_2.pac",
											"\b1b\liveries\85136\Lancer_3.pac",
											"\b1b\liveries\85136\Lancer_4.pac",
											"\b1b\liveries\85136\Lancer_5.pac",
											"\b1b\liveries\85136\Lancer_6.pac",
											"\b1b\liveries\85136\Lancer_7.pac",
											"\b1b\liveries\85136\v_gens.pac"
										};
	};

	class b1b_MK82_830064 : b1b_MK82
	{
		displayName = "$STR_B1B_NAME17";
		hiddenSelections[]={
								"Aerials",
								"EngIntakes",
								"Lancer_1",
								"Lancer_2",
								"Lancer_3",
								"Lancer_4",
								"Lancer_5",
								"Lancer_6",
								"Lancer_7",
								"v_gens"
							};
		hiddenSelectionsTextures[] = 	{
											"\b1b\liveries\830064\Aerials.pac",
											"\b1b\liveries\830064\EngIntakes.pac",
											"\b1b\liveries\830064\Lancer_1.pac",
											"\b1b\liveries\830064\Lancer_2.pac",
											"\b1b\liveries\830064\Lancer_3.pac",
											"\b1b\liveries\830064\Lancer_4.pac",
											"\b1b\liveries\830064\Lancer_5.pac",
											"\b1b\liveries\830064\Lancer_6.pac",
											"\b1b\liveries\830064\Lancer_7.pac",
											"\b1b\liveries\830064\v_gens.pac"
										};
	};

	class b1b_MK82_apocalypse : b1b_MK82
	{
		displayName = "$STR_B1B_NAME18";
		hiddenSelections[]={
								"Aerials",
								"EngIntakes",
								"Lancer_1",
								"Lancer_2",
								"Lancer_3",
								"Lancer_4",
								"Lancer_5",
								"Lancer_6",
								"Lancer_7",
								"v_gens"
							};
		hiddenSelectionsTextures[] = 	{
											"\b1b\liveries\apocalypse\Aerials.pac",
											"\b1b\liveries\apocalypse\EngIntakes.pac",
											"\b1b\liveries\apocalypse\Lancer_1.pac",
											"\b1b\liveries\apocalypse\Lancer_2.pac",
											"\b1b\liveries\apocalypse\Lancer_3.pac",
											"\b1b\liveries\apocalypse\Lancer_4.pac",
											"\b1b\liveries\apocalypse\Lancer_5.pac",
											"\b1b\liveries\apocalypse\Lancer_6.pac",
											"\b1b\liveries\apocalypse\Lancer_7.pac",
											"\b1b\liveries\apocalypse\v_gens.pac"
										};
	};

	class b1b_MK82_belle : b1b_MK82
	{
		displayName = "$STR_B1B_NAME19";
		hiddenSelections[]={
								"Aerials",
								"EngIntakes",
								"Lancer_1",
								"Lancer_2",
								"Lancer_3",
								"Lancer_4",
								"Lancer_5",
								"Lancer_6",
								"Lancer_7",
								"v_gens"
							};
		hiddenSelectionsTextures[] = 	{
											"\b1b\liveries\belle\Aerials.pac",
											"\b1b\liveries\belle\EngIntakes.pac",
											"\b1b\liveries\belle\Lancer_1.pac",
											"\b1b\liveries\belle\Lancer_2.pac",
											"\b1b\liveries\belle\Lancer_3.pac",
											"\b1b\liveries\belle\Lancer_4.pac",
											"\b1b\liveries\belle\Lancer_5.pac",
											"\b1b\liveries\belle\Lancer_6.pac",
											"\b1b\liveries\belle\Lancer_7.pac",
											"\b1b\liveries\belle\v_gens.pac"
										};
	};

	class b1b_MK82_desert : b1b_MK82
	{
		displayName = "$STR_B1B_NAME20";
		hiddenSelections[]={
								"Aerials",
								"EngIntakes",
								"Lancer_1",
								"Lancer_2",
								"Lancer_3",
								"Lancer_4",
								"Lancer_5",
								"Lancer_6",
								"Lancer_7",
								"v_gens"
							};
		hiddenSelectionsTextures[] = 	{
											"\b1b\liveries\desert\Aerials.pac",
											"\b1b\liveries\desert\EngIntakes.pac",
											"\b1b\liveries\desert\Lancer_1.pac",
											"\b1b\liveries\desert\Lancer_2.pac",
											"\b1b\liveries\desert\Lancer_3.pac",
											"\b1b\liveries\desert\Lancer_4.pac",
											"\b1b\liveries\desert\Lancer_5.pac",
											"\b1b\liveries\desert\Lancer_6.pac",
											"\b1b\liveries\desert\Lancer_7.pac",
											"\b1b\liveries\desert\v_gens.pac"
										};
	};

	class b1b_MK82_dragon : b1b_MK82
	{
		displayName = "$STR_B1B_NAME21";
		hiddenSelections[]={
								"Aerials",
								"EngIntakes",
								"Lancer_1",
								"Lancer_2",
								"Lancer_3",
								"Lancer_4",
								"Lancer_5",
								"Lancer_6",
								"Lancer_7",
								"v_gens"
							};
		hiddenSelectionsTextures[] = 	{
											"\b1b\liveries\dragon\Aerials.pac",
											"\b1b\liveries\dragon\EngIntakes.pac",
											"\b1b\liveries\dragon\Lancer_1.pac",
											"\b1b\liveries\dragon\Lancer_2.pac",
											"\b1b\liveries\dragon\Lancer_3.pac",
											"\b1b\liveries\dragon\Lancer_4.pac",
											"\b1b\liveries\dragon\Lancer_5.pac",
											"\b1b\liveries\dragon\Lancer_6.pac",
											"\b1b\liveries\dragon\Lancer_7.pac",
											"\b1b\liveries\dragon\v_gens.pac"
										};
	};

	class b1b_MK82_dy231 : b1b_MK82
	{
		displayName = "$STR_B1B_NAME22";
		hiddenSelections[]={
								"Aerials",
								"EngIntakes",
								"Lancer_1",
								"Lancer_2",
								"Lancer_3",
								"Lancer_4",
								"Lancer_5",
								"Lancer_6",
								"Lancer_7",
								"v_gens"
							};
		hiddenSelectionsTextures[] = 	{
											"\b1b\liveries\dy231\Aerials.pac",
											"\b1b\liveries\dy231\EngIntakes.pac",
											"\b1b\liveries\dy231\Lancer_1.pac",
											"\b1b\liveries\dy231\Lancer_2.pac",
											"\b1b\liveries\dy231\Lancer_3.pac",
											"\b1b\liveries\dy231\Lancer_4.pac",
											"\b1b\liveries\dy231\Lancer_5.pac",
											"\b1b\liveries\dy231\Lancer_6.pac",
											"\b1b\liveries\dy231\Lancer_7.pac",
											"\b1b\liveries\dy231\v_gens.pac"
										};
	};

	class b1b_MK82_ed287 : b1b_MK82
	{
		displayName = "$STR_B1B_NAME23";
		hiddenSelections[]={
								"Aerials",
								"EngIntakes",
								"Lancer_1",
								"Lancer_2",
								"Lancer_3",
								"Lancer_4",
								"Lancer_5",
								"Lancer_6",
								"Lancer_7",
								"v_gens"
							};
		hiddenSelectionsTextures[] = 	{
											"\b1b\liveries\ed287\Aerials.pac",
											"\b1b\liveries\ed287\EngIntakes.pac",
											"\b1b\liveries\ed287\Lancer_1.pac",
											"\b1b\liveries\ed287\Lancer_2.pac",
											"\b1b\liveries\ed287\Lancer_3.pac",
											"\b1b\liveries\ed287\Lancer_4.pac",
											"\b1b\liveries\ed287\Lancer_5.pac",
											"\b1b\liveries\ed287\Lancer_6.pac",
											"\b1b\liveries\ed287\Lancer_7.pac",
											"\b1b\liveries\ed287\v_gens.pac"
										};
	};

	class b1b_MK82_guardian : b1b_MK82
	{
		displayName = "$STR_B1B_NAME24";
		hiddenSelections[]={
								"Aerials",
								"EngIntakes",
								"Lancer_1",
								"Lancer_2",
								"Lancer_3",
								"Lancer_4",
								"Lancer_5",
								"Lancer_6",
								"Lancer_7",
								"v_gens"
							};
		hiddenSelectionsTextures[] = 	{
											"\b1b\liveries\guardian\Aerials.pac",
											"\b1b\liveries\guardian\EngIntakes.pac",
											"\b1b\liveries\guardian\Lancer_1.pac",
											"\b1b\liveries\guardian\Lancer_2.pac",
											"\b1b\liveries\guardian\Lancer_3.pac",
											"\b1b\liveries\guardian\Lancer_4.pac",
											"\b1b\liveries\guardian\Lancer_5.pac",
											"\b1b\liveries\guardian\Lancer_6.pac",
											"\b1b\liveries\guardian\Lancer_7.pac",
											"\b1b\liveries\guardian\v_gens.pac"
										};
	};

	class b1b_MK82_guardian_final : b1b_MK82
	{
		displayName = "$STR_B1B_NAME25";
		hiddenSelections[]={
								"Aerials",
								"EngIntakes",
								"Lancer_1",
								"Lancer_2",
								"Lancer_3",
								"Lancer_4",
								"Lancer_5",
								"Lancer_6",
								"Lancer_7",
								"v_gens"
							};
		hiddenSelectionsTextures[] = 	{
											"\b1b\liveries\guardian_final\Aerials.pac",
											"\b1b\liveries\guardian_final\EngIntakes.pac",
											"\b1b\liveries\guardian_final\Lancer_1.pac",
											"\b1b\liveries\guardian_final\Lancer_2.pac",
											"\b1b\liveries\guardian_final\Lancer_3.pac",
											"\b1b\liveries\guardian_final\Lancer_4.pac",
											"\b1b\liveries\guardian_final\Lancer_5.pac",
											"\b1b\liveries\guardian_final\Lancer_6.pac",
											"\b1b\liveries\guardian_final\Lancer_7.pac",
											"\b1b\liveries\guardian_final\v_gens.pac"
										};
	};

	class b1b_MK82_lastlaugh : b1b_MK82
	{
		displayName = "$STR_B1B_NAME26";
		hiddenSelections[]={
								"Aerials",
								"EngIntakes",
								"Lancer_1",
								"Lancer_2",
								"Lancer_3",
								"Lancer_4",
								"Lancer_5",
								"Lancer_6",
								"Lancer_7",
								"v_gens"
							};
		hiddenSelectionsTextures[] = 	{
											"\b1b\liveries\lastlaugh\Aerials.pac",
											"\b1b\liveries\lastlaugh\EngIntakes.pac",
											"\b1b\liveries\lastlaugh\Lancer_1.pac",
											"\b1b\liveries\lastlaugh\Lancer_2.pac",
											"\b1b\liveries\lastlaugh\Lancer_3.pac",
											"\b1b\liveries\lastlaugh\Lancer_4.pac",
											"\b1b\liveries\lastlaugh\Lancer_5.pac",
											"\b1b\liveries\lastlaugh\Lancer_6.pac",
											"\b1b\liveries\lastlaugh\Lancer_7.pac",
											"\b1b\liveries\lastlaugh\v_gens.pac"
										};
	};

	class b1b_MK82_lastpatrol : b1b_MK82
	{
		displayName = "$STR_B1B_NAME27";
		hiddenSelections[]={
								"Aerials",
								"EngIntakes",
								"Lancer_1",
								"Lancer_2",
								"Lancer_3",
								"Lancer_4",
								"Lancer_5",
								"Lancer_6",
								"Lancer_7",
								"v_gens"
							};
		hiddenSelectionsTextures[] = 	{
											"\b1b\liveries\lastpatrol\Aerials.pac",
											"\b1b\liveries\lastpatrol\EngIntakes.pac",
											"\b1b\liveries\lastpatrol\Lancer_1.pac",
											"\b1b\liveries\lastpatrol\Lancer_2.pac",
											"\b1b\liveries\lastpatrol\Lancer_3.pac",
											"\b1b\liveries\lastpatrol\Lancer_4.pac",
											"\b1b\liveries\lastpatrol\Lancer_5.pac",
											"\b1b\liveries\lastpatrol\Lancer_6.pac",
											"\b1b\liveries\lastpatrol\Lancer_7.pac",
											"\b1b\liveries\lastpatrol\v_gens.pac"
										};
	};

	class b1b_MK82_mrbones : b1b_MK82
	{
		displayName = "$STR_B1B_NAME28";
		hiddenSelections[]={
								"Aerials",
								"EngIntakes",
								"Lancer_1",
								"Lancer_2",
								"Lancer_3",
								"Lancer_4",
								"Lancer_5",
								"Lancer_6",
								"Lancer_7",
								"v_gens"
							};
		hiddenSelectionsTextures[] = 	{
											"\b1b\liveries\mrbones\Aerials.pac",
											"\b1b\liveries\mrbones\EngIntakes.pac",
											"\b1b\liveries\mrbones\Lancer_1.pac",
											"\b1b\liveries\mrbones\Lancer_2.pac",
											"\b1b\liveries\mrbones\Lancer_3.pac",
											"\b1b\liveries\mrbones\Lancer_4.pac",
											"\b1b\liveries\mrbones\Lancer_5.pac",
											"\b1b\liveries\mrbones\Lancer_6.pac",
											"\b1b\liveries\mrbones\Lancer_7.pac",
											"\b1b\liveries\mrbones\v_gens.pac"
										};
	};

	class b1b_MK82_primer : b1b_MK82
	{
		displayName = "$STR_B1B_NAME29";
		hiddenSelections[]={
								"Aerials",
								"EngIntakes",
								"Lancer_1",
								"Lancer_2",
								"Lancer_3",
								"Lancer_4",
								"Lancer_5",
								"Lancer_6",
								"Lancer_7",
								"v_gens"
							};
		hiddenSelectionsTextures[] = 	{
											"\b1b\liveries\primer\Aerials.pac",
											"\b1b\liveries\primer\EngIntakes.pac",
											"\b1b\liveries\primer\Lancer_1.pac",
											"\b1b\liveries\primer\Lancer_2.pac",
											"\b1b\liveries\primer\Lancer_3.pac",
											"\b1b\liveries\primer\Lancer_4.pac",
											"\b1b\liveries\primer\Lancer_5.pac",
											"\b1b\liveries\primer\Lancer_6.pac",
											"\b1b\liveries\primer\Lancer_7.pac",
											"\b1b\liveries\primer\v_gens.pac"
										};
	};

	class b1b_MK82_proto : b1b_MK82
	{
		displayName = "$STR_B1B_NAME30";
		hiddenSelections[]={
								"Aerials",
								"EngIntakes",
								"Lancer_1",
								"Lancer_2",
								"Lancer_3",
								"Lancer_4",
								"Lancer_5",
								"Lancer_6",
								"Lancer_7",
								"v_gens"
							};
		hiddenSelectionsTextures[] = 	{
											"\b1b\liveries\proto\Aerials.pac",
											"\b1b\liveries\proto\EngIntakes.pac",
											"\b1b\liveries\proto\Lancer_1.pac",
											"\b1b\liveries\proto\Lancer_2.pac",
											"\b1b\liveries\proto\Lancer_3.pac",
											"\b1b\liveries\proto\Lancer_4.pac",
											"\b1b\liveries\proto\Lancer_5.pac",
											"\b1b\liveries\proto\Lancer_6.pac",
											"\b1b\liveries\proto\Lancer_7.pac",
											"\b1b\liveries\proto\v_gens.pac"
										};
	};

	class b1b_MK82_RAF_camo : b1b_MK82
	{
		displayName = "$STR_B1B_NAME31";
		hiddenSelections[]={
								"Aerials",
								"EngIntakes",
								"Lancer_1",
								"Lancer_2",
								"Lancer_3",
								"Lancer_4",
								"Lancer_5",
								"Lancer_6",
								"Lancer_7",
								"v_gens"
							};
		hiddenSelectionsTextures[] = 	{
											"\b1b\liveries\RAF_camo\Aerials.pac",
											"\b1b\liveries\RAF_camo\EngIntakes.pac",
											"\b1b\liveries\RAF_camo\Lancer_1.pac",
											"\b1b\liveries\RAF_camo\Lancer_2.pac",
											"\b1b\liveries\RAF_camo\Lancer_3.pac",
											"\b1b\liveries\RAF_camo\Lancer_4.pac",
											"\b1b\liveries\RAF_camo\Lancer_5.pac",
											"\b1b\liveries\RAF_camo\Lancer_6.pac",
											"\b1b\liveries\RAF_camo\Lancer_7.pac",
											"\b1b\liveries\RAF_camo\v_gens.pac"
										};
	};

	class b1b_MK82_Thunderbird : b1b_MK82
	{
		displayName = "$STR_B1B_NAME32";
		hiddenSelections[]={
								"Aerials",
								"EngIntakes",
								"Lancer_1",
								"Lancer_2",
								"Lancer_3",
								"Lancer_4",
								"Lancer_5",
								"Lancer_6",
								"Lancer_7",
								"v_gens"
							};
		hiddenSelectionsTextures[] = 	{
											"\b1b\liveries\Thunderbird\Aerials.pac",
											"\b1b\liveries\Thunderbird\EngIntakes.pac",
											"\b1b\liveries\Thunderbird\Lancer_1.pac",
											"\b1b\liveries\Thunderbird\Lancer_2.pac",
											"\b1b\liveries\Thunderbird\Lancer_3.pac",
											"\b1b\liveries\Thunderbird\Lancer_4.pac",
											"\b1b\liveries\Thunderbird\Lancer_5.pac",
											"\b1b\liveries\Thunderbird\Lancer_6.pac",
											"\b1b\liveries\Thunderbird\Lancer_7.pac",
											"\b1b\liveries\Thunderbird\v_gens.pac"
										};
	};

	class b1b_MK82_train : b1b_MK82
	{
		displayName = "$STR_B1B_NAME33";
		hiddenSelections[]={
								"Aerials",
								"EngIntakes",
								"Lancer_1",
								"Lancer_2",
								"Lancer_3",
								"Lancer_4",
								"Lancer_5",
								"Lancer_6",
								"Lancer_7",
								"v_gens"
							};
		hiddenSelectionsTextures[] = 	{
											"\b1b\liveries\train\Aerials.pac",
											"\b1b\liveries\train\EngIntakes.pac",
											"\b1b\liveries\train\Lancer_1.pac",
											"\b1b\liveries\train\Lancer_2.pac",
											"\b1b\liveries\train\Lancer_3.pac",
											"\b1b\liveries\train\Lancer_4.pac",
											"\b1b\liveries\train\Lancer_5.pac",
											"\b1b\liveries\train\Lancer_6.pac",
											"\b1b\liveries\train\Lancer_7.pac",
											"\b1b\liveries\train\v_gens.pac"
										};
	};

	class b1b_MK82_black : b1b_MK82
	{
		displayName = "$STR_B1B_NAME34";
		hiddenSelections[]={
								"Aerials",
								"EngIntakes",
								"Lancer_1",
								"Lancer_2",
								"Lancer_3",
								"Lancer_4",
								"Lancer_5",
								"Lancer_6",
								"Lancer_7",
								"v_gens"
							};
		hiddenSelectionsTextures[] = 	{
											"\b1b\liveries\black_velvet\Aerials.pac",
											"\b1b\liveries\black_velvet\EngIntakes.pac",
											"\b1b\liveries\black_velvet\Lancer_1.pac",
											"\b1b\liveries\black_velvet\Lancer_2.pac",
											"\b1b\liveries\black_velvet\Lancer_3.pac",
											"\b1b\liveries\black_velvet\Lancer_4.pac",
											"\b1b\liveries\black_velvet\Lancer_5.pac",
											"\b1b\liveries\black_velvet\Lancer_6.pac",
											"\b1b\liveries\black_velvet\Lancer_7.pac",
											"\b1b\liveries\black_velvet\v_gens.pac"
										};
	};
};
