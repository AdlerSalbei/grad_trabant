#include "script_component.hpp"
#define _ARMA_

class CfgPatches
{
	class cwr2_Trabant
	{
		ammo[] = {};
		author = "CWR² Modification";
		magazines[] = {};
		mail = "cwr2@mailbox.org";
		requiredAddons[] = {"cwr2","cawheeled","cawheeled_e"};
		requiredVersion = 1.62;
		units[] = {"cwr2_Trabant","cwr2_Trabant_White","cwr2_Trabant_Brown","cwr2_Trabant_Yellow","cwr2_Trabant_Green","cwr2_Trabant_Blue","cwr2_Trabant_Dirty","cwr2_Trabant_film"};
		url = "http://cwr2.arma2.fr";
		version = "1.5";
		weapons[] = {};
	};
};
class CfgMovesBasic
{
	class Actions;
	class DefaultDie;
	class ManActions
	{
		Trabant_Driver = "Trabant_Driver";
		Trabant_Cargo01 = "Trabant_Cargo01";
		Trabant_Cargo02 = "Trabant_Cargo02";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class Trabant_Driver: Crew
		{
			file = "\cwr2\cars\cwr2_trabant\anim\trabant_driver.rtm";
			interpolateTo[] = {"KIA_BRDM2_Gunner",1};
		};
		class Trabant_Cargo01: Crew
		{
			file = "\cwr2\cars\cwr2_trabant\anim\trabant_cargo01.rtm";
			interpolateTo[] = {"KIA_BRDM2_Gunner",1};
		};
		class Trabant_Cargo02: Crew
		{
			file = "\cwr2\cars\cwr2_trabant\anim\trabant_cargo02.rtm";
			interpolateTo[] = {"KIA_BRDM2_Gunner",1};
		};
	};
};
class CfgMovesWomen: CfgMovesBasic
{
	class ManActions
	{
		Trabant_Cargo01 = "crew";
		Trabant_Cargo02 = "crew";
	};
};
class CfgVehicles
{
	class All;
	class AllVehicles: All
	{
		class AnimationSources;
		class HeadLimits;
		class NewTurret
		{
			class ViewGunner;
			class ViewOptics;
		};
		class Sounds
		{
			class Engine;
			class Movement;
		};
		class ViewOptics;
		class ViewPilot;
	};
	class Land: AllVehicles{};
	class LandVehicle: Land
	{
		class NewTurret;
		class ViewPilot;
		class Sounds;
	};
	class Car: LandVehicle
	{
		class AnimationSources;
		class Eventhandlers;
		class HitPoints
		{
			class HitEngine;
			class HitRGlass;
			class HitLGlass;
			class HitBody;
			class HitFuel;
			class HitLFWheel;
			class HitRFWheel;
			class HitLF2Wheel;
			class HitRF2Wheel;
			class HitLMWheel;
			class HitRMWheel;
			class HitLBWheel;
			class HitRBWheel;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
		};
		class PlateInfos{};
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class HitPoints
				{
					class HitTurret;
					class HitGun;
				};
				class ViewOptics;
				class ViewGunner;
			};
		};
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
	};
	class cwr2_CarBase: Car
	{
		armorCrash0[] = {"ca\sounds\vehicles\crash\crash_vehicle_01",0.7,1.0,200};
		armorCrash1[] = {"ca\sounds\vehicles\crash\crash_vehicle_02",0.7,1.0,200};
		armorCrash2[] = {"ca\sounds\vehicles\crash\crash_vehicle_03",0.7,1.0,200};
		armorCrash3[] = {"ca\sounds\vehicles\crash\crash_vehicle_04",0.7,1.0,200};
		armorWheels = 0.12;
		brakeDistance = 7.0;
		buildCrash0[] = {"ca\sounds\vehicles\crash\crash_building_01",0.7,1.0,200};
		buildCrash1[] = {"ca\sounds\vehicles\crash\crash_building_02",0.7,1.0,200};
		buildCrash2[] = {"ca\sounds\vehicles\crash\crash_building_03",0.7,1.0,200};
		buildCrash3[] = {"ca\sounds\vehicles\crash\crash_building_04",0.7,1.0,200};
		insideSoundCoef = 0.9;
		irTarget = 0;
		nameSound = "veh_car";
		radartype = 0;
		secondaryExplosion = 0;
		soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
		soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
		soundGear[] = {"",5.6234134e-005,1};
		soundWoodCrash[] = {"woodCrash0",0.166,"woodCrash1",0.166,"woodCrash2",0.166,"woodCrash3",0.166,"woodCrash4",0.166,"woodCrash5",0.166};
		textPlural = "$STR_DN_cars";
		textSingular = "$STR_DN_car";
		transportAmmo = 0;
		transportFuel = 0;
		transportRepair = 0;
		type = "VArmor";
		unitInfoType = "UnitInfoCar";
		vehicleClass = "cwr2_group_cars";
		woodCrash0[] = {"ca\sounds\vehicles\crash\crash_mix_wood_01",0.7,1.0,200};
		woodCrash1[] = {"ca\sounds\vehicles\crash\crash_mix_wood_02",0.7,1.0,200};
		woodCrash2[] = {"ca\sounds\vehicles\crash\crash_mix_wood_03",0.7,1.0,200};
		woodCrash3[] = {"ca\sounds\vehicles\crash\crash_mix_wood_04",0.7,1.0,200};
		woodCrash4[] = {"ca\sounds\vehicles\crash\crash_mix_wood_05",0.7,1.0,200};
		woodCrash5[] = {"ca\sounds\vehicles\crash\crash_mix_wood_06",0.7,1.0,200};
		weapons[] = {"CarHorn"};
		magazines[] = {};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class cwr2_Trabant: cwr2_CarBase
	{
		accuracy = 1000;
		aggregateReflectors[] = {{"1","1"}};
		armor = 20;
		cargoIsCoDriver[] = {1,0};
		cargoAction[] = {"Trabant_Cargo02","Trabant_Cargo01","Trabant_Cargo02"};
		cost = 2000;
		crew = "cwr2_Civilian1";
		damageResistance = 0.01821;
		displayName = "Trabant";
		driverAction = "Trabant_Driver";
		extCameraPosition[] = {0.5,2,-10};
		hasGunner = 0;
		faction = "cwr2_civ";
		fuelCapacity = 50;
		hiddenSelections[] = {"hs_camo1"};
		hiddenSelectionsTextures[] = {"\cwr2\cars\cwr2_trabant\data\trabi_co.paa"};
		icon = "\cwr2\general\cwr2\ui\icon_car_trabant_ca.paa";
		mapSize = 4;
		maxSpeed = 100;
		model = "\cwr2\cars\cwr2_trabant\cwr2_trabant.p3d";
		picture = "\cwr2\general\cwr2\ui\picture_trabant_ca.paa";
		predictTurnPlan = 0.95;
		rarityUrban = 0.5;
		scope = 2;
		side = 3;
		soundEngineOffExt[] = {"ca\sounds\vehicles\wheeled\car\ext\ext-car-stop-1",0.31622776,1.0,200};
		soundEngineOffInt[] = {"ca\sounds\vehicles\wheeled\car\int\int-car-stop-1",0.31622776,1.0};
		soundEngineOnExt[] = {"ca\sounds\vehicles\wheeled\car\ext\ext-car-start-1",0.31622776,1.0,200};
		soundEngineOnInt[] = {"ca\sounds\vehicles\wheeled\car\int\int-car-start-1",0.31622776,1.0};
		soundGetIn[] = {"ca\sounds\vehicles\wheeled\car\ext\ext-car-getout-1",0.32,1,30};
		soundGetOut[] = {"ca\sounds\vehicles\wheeled\car\ext\ext-car-getout-1",0.32,1,30};
		steerAheadPlan = 0.24;
		terrainCoef = 4.0;
		transportMaxBackpacks = 4;
		transportMaxMagazines = 50;
		transportMaxWeapons = 5;
		transportSoldier = 3;
		turnCoef = 2;
		typicalCargo[] = {"C_man_1"};
		viewCargoShadow = 1;
		viewCargoShadowAmb = 0.5;
		viewCargoShadowDiff = 0.5;
		wheelCircumference = 1.988;
		class Damage
		{
			tex[] = {};
			mat[] = {QPATHOF(data\rvmat\trabant.rvmat), QPATHOF(data\rvmat\trabant_damage.rvmat), QPATHOF(data\rvmat\trabant_destruct.rvmat), QPATHOF(data\rvmat\trabant_glass.rvmat), QPATHOF(data\rvmat\trabant_glass_damage.rvmat), QPATHOF(data\rvmat\trabant_glass_destruct.rvmat)};
		};
		class Library
		{
			libTextDesc = "The Trabant is a car that was produced by former East German auto maker VEB Sachsenring Automobilwerke in Zwickau, Sachsen. It was the most common vehicle in East Germany, and was also exported to countries both inside and outside the communist bloc. The main selling points was that it had room for four adults and luggage in a compact, light and durable shell and that it was fast (when introduced) and durable. With its mediocre performance, inefficient two-stroke engine, noxious fumes and production shortages, the Trabant is often cited as an example of the disadvantages of centralized planning; on the other hand, it is regarded with derisive affection as a symbol of the failed former East Germany and of the fall of communism (in former West Germany, as many East Germans streamed into West Berlin and West Germany in their Trabants after the opening of the Berlin Wall in 1989). It was in production without any significant changes for nearly 30 years with 3,096,099 Trabants produced in total.";
		};
		class Hitpoints: Hitpoints
		{
			class HitBody
			{
				armor = 1;
				material = -1;
				name = "karoserie";
				passthrough = 1;
				visual = "";
			};
			class HitEngine
			{
				armor = 0.4;
				material = -1;
				name = "motor";
				passthrough = 0.2;
				visual = "";
			};
			class HitFuel
			{
				armor = 0.3;
				material = -1;
				name = "palivo";
				passthrough = 0.5;
				visual = "";
			};
			class HitGlass1
			{
				armor = 0.1;
				material = -1;
				name = "glass1";
				passthrough = 0;
				visual = "glass1";
			};
			class HitGlass2: HitGlass1
			{
				name = "glass2";
				visual = "glass2";
			};
			class HitGlass3: HitGlass1
			{
				name = "glass3";
				visual = "glass3";
			};
			class HitGlass4: HitGlass1
			{
				name = "glass4";
				visual = "glass4";
			};
			class HitGlass5: HitGlass1
			{
				name = "glass5";
				visual = "glass5";
			};
			class HitGlass6: HitGlass1
			{
				name = "glass6";
				visual = "glass6";
			};
			class HitLFWheel
			{
				armor = 0.15;
				material = -1;
				name = "wheel_1_1_steering";
				visual = "";
				passThrough = 0;
			};
			class HitLBWheel: HitLFWheel
			{
				name = "wheel_1_2_steering";
			};
			class HitRFWheel: HitLFWheel
			{
				name = "wheel_2_1_steering";
			};
			class HitRBWheel: HitLFWheel
			{
				name = "wheel_2_2_steering";
			};
		};
		class Reflectors
		{
			class Left
			{
				ambient[] = {0.1,0.1,0.1,1.0};
				brightness = 0.3;
				color[] = {0.9,0.8,0.8,0.5};
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				position = "L svetlo";
				selection = "L svetlo";
				size = 3.5;
			};
			class Right
			{
				ambient[] = {0.1,0.1,0.1,1.0};
				brightness = 0.4;
				color[] = {0.9,0.8,0.8,0.5};
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				position = "P svetlo";
				selection = "P svetlo";
				size = 3.5;
			};
		};
		class SoundEvents
		{
			class AccelerationIn
			{
				expression = "(engineOn*(1-camPos))*gmeterZ";
				limit = "0.5";
				sound[] = {"\ca\sounds\vehicles\wheeled\car\int\int-car-acce-2",0.31622776,1.0};
			};
			class AccelerationOut
			{
				expression = "(engineOn*camPos)*gmeterZ";
				limit = "0.5";
				sound[] = {"\ca\sounds\vehicles\wheeled\car\ext\ext-car-acce-2",0.31622776,1.0,200};
			};
		};
		class Sounds
		{
			class Engine
			{
				frequency = "(randomizer*0.05+0.95)*rpm";
				sound[] = {"ca\sounds\Vehicles\Wheeled\motorcycles\ext\ext-tt650-low-2",0.562341,1,250};
				volume = "engineOn*camPos*(rpm factor[0.7, 0.2])";
			};
			class EngineHighOut
			{
				frequency = "(randomizer*0.05+0.95)*rpm";
				sound[] = {"\ca\sounds\Vehicles\Wheeled\motorcycles\ext\ext-tt650-high-2",0.562341,1.1,350};
				volume = "engineOn*camPos*(rpm factor[0.5, 0.9])";
			};
			class IdleOut
			{
				frequency = 1;
				sound[] = {"\cwr2\Cars\cwr2_trabant\sounds\trabbi.wss",0.316228,1,150};
				volume = "engineOn*camPos*4*(rpm factor[0.3, 0])";
			};
			class EngineLowIn
			{
				frequency = "(randomizer*0.05+0.95)*rpm";
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Motorcycles\int\int-tt650-low-2",0.707946,0.8};
				volume = "((engineOn*thrust) factor[0.65, 0.2])*(1-camPos)";
			};
			class EngineHighIn
			{
				frequency = "(randomizer*0.05+0.95)*rpm";
				sound[] = {"\ca\sounds\Vehicles\Wheeled\Motorcycles\int\int-tt650-high-2",0.707946,0.8};
				volume = "((engineOn*thrust) factor[0.55, 0.95])*(1-camPos)";
			};
			class IdleIn
			{
				frequency = 1;
				sound[] = {"\cwr2\Cars\cwr2_trabant\sounds\trabbi.wss",0.398107,1};
				volume = "engineOn*2*(rpm factor[0.3, 0])*(1-camPos)";
			};
			class TiresRockOut
			{
				frequency = 1;
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2",0.1,1,30};
				volume = "camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				frequency = 1;
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2",0.1,1,30};
				volume = "camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				frequency = 1;
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass3",0.1,1,30};
				volume = "camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				frequency = 1;
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2",0.1,1,30};
				volume = "camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				frequency = 1;
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2",0.1,1,30};
				volume = "camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				frequency = 1;
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3",0.1,1,30};
				volume = "camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				frequency = 1;
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\ext\int-noise3",0.1,1,30};
				volume = "camPos*(damper0 max 0.04)*(speed factor[0, 8])";
			};
			class TiresRockIn
			{
				frequency = 1;
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-rock2",0.1,1};
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				frequency = 1;
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-sand2",0.1,1};
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				frequency = 1;
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-grass3",0.1,1};
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				frequency = 1;
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-mud2",0.1,1};
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				frequency = 1;
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-gravel2",0.1,1};
				volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				frequency = 1;
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-asphalt3",0.1,1};
				volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				frequency = 1;
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\int\noise4",0.1,1};
				volume = "(damper0 max 0.04)*(speed factor[0, 8])*(1-camPos)";
			};
			class Movement
			{
				frequency = 1;
				sound = "soundEnviron";
				volume = 0;
			};
		};
		class Turrets{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class cwr2_Trabant_White: cwr2_Trabant
	{
		crew = "cwr2_Civilian2";
		displayName = "Trabant (White)";
		hiddenSelectionsTextures[] = {QPATHOF(data\trabi_white_co.paa)};
	};
	class cwr2_Trabant_Brown: cwr2_Trabant
	{
		crew = "cwr2_Civilian3";
		displayName = "Trabant (Brown)";
		hiddenSelectionsTextures[] = {QPATHOF(data\trabi_brown_co.paa)};
	};
	class cwr2_Trabant_Yellow: cwr2_Trabant
	{
		crew = "cwr2_Civilian4";
		displayName = "Trabant (Yellow)";
		hiddenSelectionsTextures[] = {QPATHOF(data\trabi_yellow_co.paa)};
	};
	class cwr2_Trabant_Green: cwr2_Trabant
	{
		crew = "cwr2_Civilian5";
		displayName = "Trabant (Green)";
		hiddenSelectionsTextures[] = {QPATHOF(data\trabi_green_co.paa)};
	};
	class cwr2_Trabant_Blue: cwr2_Trabant
	{
		crew = "cwr2_Civilian6";
		displayName = "Trabant (Blue)";
		hiddenSelectionsTextures[] = {QPATHOF(data\trabi_blue_co.paa)};
	};
	class cwr2_Trabant_Dirty: cwr2_Trabant
	{
		crew = "cwr2_Civilian7";
		displayName = "Trabant (Dirty)";
		model = "\cwr2\cars\cwr2_trabant\cwr2_trabant_dirty.p3d";
		hiddenSelectionsTextures[] = {QPATHOF(data\trabi_dirty_co.paa)};
		class Damage
		{
			tex[] = {};
			mat[] = {QPATHOF(data\rvmat\trabant_dirty.rvmat), QPATHOF(data\rvmat\trabant_dirty_damage.rvmat), QPATHOF(data\rvmat\trabant_dirty_destruct.rvmat), QPATHOF(data\rvmat\trabant_dirty_glass.rvmat), QPATHOF(data\rvmat\trabant_dirty_glass_damage.rvmat), QPATHOF(data\rvmat\trabant_dirty_glass_destruct.rvmat)};
		};
	};
	class cwr2_Trabant_film: cwr2_Trabant_Dirty
	{
		displayName = "Trabant (Armoured)";
		armor = 1500;
		model = QPATHOF(cwr2_trabant_dirty_metal.p3d);
		scope = 1;
		class Damage
		{
			tex[] = {};
			mat[] = {QPATHOF(data\rvmat\trabant_dirty.rvmat), QPATHOF(data\rvmat\trabant_dirty_damage.rvmat), QPATHOF(data\rvmat\trabant_dirty_damage.rvmat), QPATHOF(data\rvmat\trabant_dirty_glass.rvmat), QPATHOF(data\rvmat\trabant_dirty_glass_damage.rvmat), QPATHOF(data\rvmat\trabant_dirty_glass_damage.rvmat)};
		};
		class Hitpoints: Hitpoints
		{
			class HitBody
			{
				armor = 1;
				material = -1;
				name = "karoserie";
				passthrough = 1;
				visual = "";
			};
			class HitEngine
			{
				armor = 0.4;
				material = -1;
				name = "motor";
				passthrough = 0.2;
				visual = "";
			};
			class HitFuel
			{
				armor = 0.3;
				material = -1;
				name = "palivo";
				passthrough = 0.5;
				visual = "";
			};
			class HitGlass1
			{
				armor = 0.001;
				material = -1;
				name = "glass1";
				passthrough = 0;
				visual = "glass1";
			};
			class HitGlass2: HitGlass1
			{
				name = "glass2";
				visual = "glass2";
			};
			class HitGlass3: HitGlass1
			{
				name = "glass3";
				visual = "glass3";
			};
			class HitGlass4: HitGlass1
			{
				name = "glass4";
				visual = "glass4";
			};
			class HitGlass5: HitGlass1
			{
				name = "glass5";
				visual = "glass5";
			};
			class HitGlass6: HitGlass1
			{
				name = "glass6";
				visual = "glass6";
			};
			class HitLFWheel
			{
				armor = 0.0015;
				material = -1;
				name = "wheel_1_1_steering";
				visual = "";
				passThrough = 0;
			};
			class HitLBWheel: HitLFWheel
			{
				name = "wheel_1_2_steering";
			};
			class HitRFWheel: HitLFWheel
			{
				name = "wheel_2_1_steering";
			};
			class HitRBWheel: HitLFWheel
			{
				name = "wheel_2_2_steering";
			};
		};
	};
};
