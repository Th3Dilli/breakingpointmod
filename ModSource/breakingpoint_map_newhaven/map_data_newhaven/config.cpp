#include "BIS_AddonInfo.hpp"
// config.bin - 10:26:46 12/17/14, generated in 0.03 seconds
// Generated by unRap v1.06 by Kegetys
// Separate rootclasses: Disabled, Automatic comments: Enabled

#define ReadAndWrite		0
#define ReadAndCreate		1
#define ReadOnly		2
#define ReadOnlyVerified		3

class CfgPatches {
	class map_data_newhaven {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F", "A3_Roads_F", "A3_Structures_F", "CABuildings", "CABuildings2", CAMISC};
	};
};

class CfgSurfaces {
	class Default {};
	
	class Water {};
	
	class bpgrass : Default {
		access = ReadOnly;
		files = "bp_dirt_*";
		character = "bp_grassClutter";
		soundEnviron = "grass";
		soundHit = "soft_ground";
		rough = 0.04;
		maxSpeedCoef = 0.9;
		dust = 0.5;
		lucidity = 2;
		grassCover = 0.05;
		impact = "Hit_Foliage_green";
		surfaceFriction = 1.3;
	};
	
	class bpbeach : Default {
		access = ReadOnly;
		files = "bp_beach_*";
		character = "Empty";
		soundEnviron = "sand";
		soundHit = "soft_ground";
		rough = 0.04;
		maxSpeedCoef = 0.9;
		dust = 0.1;
		grassCover = 0.0;
		impact = "hitGroundSoft";
		surfaceFriction = 1.3;
	};
	
	class bppineforest : Default {
		access = ReadOnly;
		files = "cr_les2_*";
		character = "bp_pineforestClutter";
		soundEnviron = "drygrass";
		soundHit = "soft_ground";
		rough = 0.08;
		maxSpeedCoef = 0.8;
		dust = 0.4;
		lucidity = 1.5;
		grassCover = 0.04;
		impact = "Hit_Foliage_Pine";
		surfaceFriction = 1.3;
	};
	
	class bp_wheatstubble : Default {
		access = ReadOnly;
		files = "cr_strniste_*";
		character = "bp_StubbleClutter";
		soundEnviron = "drygrass";
		soundHit = "soft_ground";
		rough = 0.08;
		maxSpeedCoef = 0.9;
		dust = 0.75;
		lucidity = 2;
		grassCover = 0.1;
		impact = "Hit_Foliage_Dead";
		surfaceFriction = 1.75;
	};
	
	class bp_ploughedground : Default {
		access = ReadOnly;
		files = "cr_oranice_*";
		character = "Empty";
		soundEnviron = "dirt";
		soundHit = "soft_ground";
		rough = 0.09;
		maxSpeedCoef = 0.9;
		dust = 0.5;
		lucidity = 1;
		grassCover = 0.03;
		impact = "hitGroundSoft";
		surfaceFriction = 1.8;
	};
	
	class bp_brownrockground : Default {
		access = ReadOnly;
		files = "bp_brownrock_*";
		character = EMPTY;
		soundEnviron = "gravel";
		soundHit = "hard_ground";
		rough = 0.12;
		maxSpeedCoef = 0.85;
		dust = 0.4;
		lucidity = 1.5;
		grassCover = 0.02;
		impact = "hitGroundHard";
		surfaceFriction = 1.9;
	};
	
	class bp_soilsurface : Default {
		access = ReadOnly;
		files = "bp_soil_*";
		character = "empty";
		soundEnviron = "dirt";
		soundHit = "soft_ground";
		rough = 0.08;
		maxSpeedCoef = 0.8;
		dust = 0.5;
		lucidity = 1.65;
		grassCover = 0.0;
		impact = "hitGroundSoft";
		surfaceFriction = 1.6;
	};
	
	class bp_flatgrasssurface : Default {
		access = ReadOnly;
		files = "bp_flatgrass_*";
		character = "bp_flatgrassClutter";
		soundEnviron = "grass";
		soundHit = "soft_ground";
		rough = 0.08;
		maxSpeedCoef = 0.9;
		dust = 0.5;
		lucidity = 2;
		grassCover = 0.05;
		impact = "Hit_Foliage_green";
		surfaceFriction = 1.7;
	};
};

class CfgSurfaceCharacters {
	class bp_grassClutter {
		probability[] = {0.3, 0.01, 0.5, 0.04, 0.03};
		names[] = {"bp_GrassCrookedForest", "bp_weed3", "bp_GrassGreenGroup", "bp_Flower_BrushMedium_Blue", "bp_wideleaf"};
	};
	
	class bp_pineforestClutter {
		probability[] = {0.03, 0.1, 0.09, 0.2, 0.1, 0.5};
		names[] = {"bp_smallpinetree", "bp_fernsmall", "bp_ferntall", "bp_wideleafplant", "bp_GrassCrookedForest", "bp_greengrass"};
	};
	
	class bp_StubbleClutter {
		probability[] = {0.3};
		names[] = {"bp_Stubble"};
	};
	
	class bp_desertgrassClutter {
		probability[] = {0.02, 0.03, 0.3, 0.04, 0.01, 0.01};
		names[] = {"bp_grasstalldead", "bp_flowertansy", "bp_grassautummbrown", "bp_deadgrassbunch", "bp_weed2", "bp_plantdoc"};
	};
	
	class bp_thistlestonyClutter {
		probability[] = {0.4, 0.5};
		names[] = {"bp_GrassTall", "bp_grassgreen"};
	};
	
	class bp_flatgrassClutter {
		probability[] = {0.5, 0.02, 0.01, 0.01};
		names[] = {"bp_grassgreen", "bp_wideleaf", "bp_fernsmall", "bp_Flower_BrushMedium_Blue"};
	};
};

class CfgMaterials {
	class Water {
		PixelShaderID = "Water";
		VertexShaderID = "Water";
		ambient[] = {0.0, 0.025, 0.05, 0.5};
		diffuse[] = {0.0, 0.05, 0.04, 1.0};
		forcedDiffuse[] = {0.0, 0.0, 0.0, 1};
		specular[] = {0.12, 0.12, 0.12, 1};
		specularPower = 100;
		emmisive[] = {0, 0, 0, 0};
		
		class Stage1 {
			texture = "A3\Map_data\water_nofhq.paa";
			uvSource = "texWaterAnim";
			
			class uvTransform {
				aside[] = {0, 1, 0};
				up[] = {1, 0, 0};
				dir[] = {0, 0, 1};
				pos[] = {0.3, 0.4, 0};
			};
		};
		
		class Stage2 {
			texture = "A3\data_f\sea_foam_lco.paa";
			uvSource = "none";
		};
		
		class Stage3 {
			texture = "A3\Map_data\water2_nohq.paa";
			uvSource = "none";
		};
	};
	
	class Shore {
		PixelShaderID = "Shore";
		VertexShaderID = "Shore";
		ambient[] = {0.0, 0.025, 0.05, 0.5};
		diffuse[] = {0.0, 0.05, 0.04, 1.0};
		forcedDiffuse[] = {0.0, 0.0, 0.0, 1};
		specular[] = {0.12, 0.12, 0.12, 1};
		specularPower = 100;
		emmisive[] = {0, 0, 0, 0};
		
		class Stage1 {
			texture = "A3\Map_data\water_nofhq.paa";
			uvSource = "texWaterAnim";
			
			class uvTransform {
				aside[] = {0, 1, 0};
				up[] = {0.1, 0, 0};
				dir[] = {0, 0, 1};
				pos[] = {0.3, 0.4, 0};
			};
		};
		
		class Stage2 {
			texture = "A3\data_f\sea_foam_lco.paa";
			uvSource = "none";
		};
		
		class Stage3 {
			texture = "A3\Map_data\water2_nohq.paa";
			uvSource = "none";
		};
	};
	
	class ShoreWet {
		PixelShaderID = "ShoreWet";
		VertexShaderID = "Shore";
	};
};

class CfgWorlds {
	initWorld = "newhaven";
	demoWorld = "newhaven";
	
	class DefaultWorld {
		class Weather {
			class Overcast {
				class Weather1;	// External class reference
				class Weather2;	// External class reference
				class Weather3;	// External class reference
				class Weather4;	// External class reference
				class Weather5;	// External class reference
			};
			class WindConfig;	// External class reference
		};
	};
	
	class CAWorld : DefaultWorld {
		class DefaultClutter;	// External class reference
		
		class clutter {
			class bp_grassgreen : DefaultClutter {
				model = "ca\plants2\clutter\c_Grasscrookedforest.p3d";
				affectedByWind = 1.0;
				swLighting = "true";
				scaleMin = 0.6;
				scaleMax = 1.0;
			};
			
			class bp_grassbunch : DefaultClutter {
				model = "ca\plants2\clutter\C_grassbunch.p3d";
				affectedByWind = 1.0;
				swLighting = "true";
				scaleMin = 0.85;
				scaleMax = 1.0;
			};
			
			class bp_grasstall : DefaultClutter {
				model = "a3\plants_f\Clutter\C_grasstall.p3d";
				affectedByWind = 0.8;
				swLighting = "true";
				scaleMin = 0.9;
				scaleMax = 1.2;
			};
			
			class bp_fernsmall : DefaultClutter {
				model = "ca\plants2\clutter\c_fern.p3d";
				affectedByWind = 0.7;
				swLighting = 1;
				scaleMin = 0.85;
				scaleMax = 1.1;
			};
			
			class bp_ferntall : DefaultClutter {
				model = "ca\plants2\clutter\c_ferntall.p3d";
				affectedByWind = 0.7;
				swLighting = 1;
				scaleMin = 0.85;
				scaleMax = 1.1;
			};
			
			class bp_wideleafplant : DefaultClutter {
				model = "ca\plants2\clutter\c_wideleafplant.p3d";
				affectedByWind = 0.1;
				swLighting = 1;
				scaleMin = 0.85;
				scaleMax = 1.6;
			};
			
			class bp_weed2 : DefaultClutter {
				model = "ca\plants2\clutter\C_weed2.p3d";
				affectedByWind = 0.5;
				swLighting = 1;
				scaleMin = 0.85;
				scaleMax = 1.1;
			};
			
			class bp_weed3 : DefaultClutter {
				model = "ca\plants2\clutter\C_weed3.p3d";
				affectedByWind = 0.5;
				swLighting = 1;
				scaleMin = 0.85;
				scaleMax = 1.1;
			};
			
			class bp_mushroom : DefaultClutter {
				model = "ca\plants2\clutter\c_MushroomBabka.p3d";
				affectedByWind = 0.1;
				swLighting = 1;
				scaleMin = 0.85;
				scaleMax = 1.2;
			};
			
			class bp_smallpinetree : DefaultClutter {
				model = "ca\plants2\clutter\c_picea.p3d";
				affectedByWind = 0.5;
				swLighting = 1;
				scaleMin = 0.85;
				scaleMax = 2.1;
			};
			
			class bp_Stubble : DefaultClutter {
				model = "ca\plants2\clutter\c_stubble.p3d";
				affectedByWind = 0.03;
				swLighting = "true";
				scaleMin = 1.6;
				scaleMax = 2.6;
			};
			
			class bp_GrassCrookedForest : DefaultClutter {
				model = "ca\plants2\clutter\c_GrassCrookedForest.p3d";
				affectedByWind = 0.3;
				swLighting = "true";
				scaleMin = 0.8;
				scaleMax = 1.4;
			};
			
			class bp_WeedDead : DefaultClutter {
				model = "ca\plants2\clutter\c_WeedDead.p3d";
				affectedByWind = 0.3;
				swLighting = "true";
				scaleMin = 0.75;
				scaleMax = 1.1;
			};
			
			class bp_WeedDeadSmall : DefaultClutter {
				model = "ca\plants2\clutter\c_WeedDead2.p3d";
				affectedByWind = 0.3;
				swLighting = "true";
				scaleMin = 0.75;
				scaleMax = 0.9;
			};
			
			class bp_GrassCrooked : DefaultClutter {
				model = "ca\plants2\clutter\c_GrassCrooked.p3d";
				affectedByWind = 0.3;
				swLighting = "true";
				scaleMin = 0.7;
				scaleMax = 1.4;
			};
			
			class bp_desertgrass : DefaultClutter {
				model = "ca\plants\clutter_grass_desert.p3d";
				affectedByWind = 0.3;
				swLighting = "true";
				scaleMin = 0.7;
				scaleMax = 1.4;
			};
			
			class bp_deadgrassbunch : DefaultClutter {
				model = "ca\plants2\clutter\c_deadGrassBunch.p3d";
				affectedByWind = 0.3;
				swLighting = "true";
				scaleMin = 0.7;
				scaleMax = 1.4;
			};
			
			class bp_WeedBrownTallgroup : DefaultClutter {
				model = "a3\plants_f\Clutter\c_StrWeedBrownTall_group.p3d";
				affectedByWind = 0.3;
				swLighting = "true";
				scaleMin = 0.7;
				scaleMax = 1.4;
			};
			
			class bp_thistlesmall : DefaultClutter {
				model = "a3\plants_f\Clutter\c_Thistle_Small.p3d";
				affectedByWind = 0.3;
				swLighting = "true";
				scaleMin = 0.7;
				scaleMax = 1.4;
			};
			
			class bp_grassdryC : DefaultClutter {
				model = "a3\plants_f\Clutter\c_StrGrassDry.p3d";
				affectedByWind = 0.3;
				swLighting = "true";
				scaleMin = 0.7;
				scaleMax = 1.4;
			};
			
			class bp_GrassDrygroup : DefaultClutter {
				model = "a3\plants_f\Clutter\c_StrGrassDry_group.p3d";
				affectedByWind = 0.3;
				swLighting = "true";
				scaleMin = 0.7;
				scaleMax = 1.4;
			};
			
			class bp_GrassDrymediumgroup : DefaultClutter {
				model = "a3\plants_f\Clutter\c_StrGrassDryMedium_group.p3d";
				affectedByWind = 0.3;
				swLighting = "true";
				scaleMin = 0.7;
				scaleMax = 1.4;
			};
			
			class bp_weedgreentall : DefaultClutter {
				model = "a3\plants_f\Clutter\c_StrWeedGreenTall.p3d";
				affectedByWind = 0.3;
				swLighting = "true";
				scaleMin = 0.7;
				scaleMax = 1.4;
			};
			
			class bp_ThistleYellowShrub : DefaultClutter {
				model = "a3\plants_f\Clutter\c_StrThistleYellowShrub.p3d";
				affectedByWind = 0.3;
				swLighting = "true";
				scaleMin = 0.7;
				scaleMax = 1.4;
			};
			
			class bp_mullein : DefaultClutter {
				model = "a3\plants_f\Clutter\c_StrPlantMullein.p3d";
				affectedByWind = 0.3;
				swLighting = "true";
				scaleMin = 0.7;
				scaleMax = 1.4;
			};
			
			class bp_GrassBrushHighGreen : DefaultClutter {
				model = "A3\plants_f\Clutter\c_Grass_BrushHigh_Green.p3d";
				affectedByWind = 0.8;
				swLighting = "true";
				scaleMin = 0.5;
				scaleMax = 0.7;
			};
			
			class bp_GrassDry : DefaultClutter {
				model = "A3\plants_f\Clutter\c_Grass_Dry.p3d";
				affectedByWind = 1.0;
				swLighting = "true";
				scaleMin = 0.3;
				scaleMax = 0.9;
			};
			
			class bp_ThistleHigh : DefaultClutter {
				model = "A3\plants_f\Clutter\c_Thistle_High.p3d";
				affectedByWind = 0.6;
				swLighting = "true";
				scaleMin = 0.6;
				scaleMax = 1.0;
			};
			
			class bp_GrassDesertGroupSoft : DefaultClutter {
				model = "A3\plants_f\Clutter\c_GrassGreen_GroupSoft.p3d";
				affectedByWind = 1.0;
				swLighting = "true";
				scaleMin = 0.6;
				scaleMax = 1.1;
			};
			
			class bp_grasstalldead : DefaultClutter {
				model = "a3\plants_f\clutter\c_Grass_Tall_Dead.p3d";
				affectedByWind = 1.0;
				swLighting = "true";
				scaleMin = 0.55;
				scaleMax = 0.78;
			};
			
			class bp_flowertansy : DefaultClutter {
				model = "a3\plants_f\clutter\c_Flower_Tansy.p3d";
				affectedByWind = 1.0;
				swLighting = "true";
				scaleMin = 0.45;
				scaleMax = 0.6;
			};
			
			class bp_grassautummbrown : DefaultClutter {
				model = "ca\plants2\clutter\c_GrassAutumnBrown.p3d";
				affectedByWind = 1.0;
				swLighting = "true";
				scaleMin = 0.35;
				scaleMax = 0.6;
			};
			
			class bp_grassbunchsmall : DefaultClutter {
				model = "a3\plants_f\clutter\c_Grass_Bunch_Small.p3d";
				affectedByWind = 1.0;
				swLighting = "true";
				scaleMin = 0.45;
				scaleMax = 0.75;
			};
			
			class bp_plantdoc : DefaultClutter {
				model = "a3\plants_f\clutter\c_Plant_Dock.p3d";
				affectedByWind = 1.0;
				swLighting = "true";
				scaleMin = 0.45;
				scaleMax = 0.65;
			};
			
			class bp_grassdry_group : DefaultClutter {
				model = "a3\plants_f\clutter\c_StrGrassDry_group.p3d";
				affectedByWind = 1.0;
				swLighting = "true";
				scaleMin = 1.0;
				scaleMax = 1.5;
			};
			
			class bp_greengrass : DefaultClutter {
				model = "a3\plants_f\clutter\c_Grass_Green.p3d";
				affectedByWind = 1.0;
				swLighting = "true";
				scaleMin = 0.5;
				scaleMax = 0.7;
			};
			
			class bp_Flower_BrushMedium_Blue : DefaultClutter {
				model = "a3\plants_f\clutter\c_Flower_BrushMedium_Blue.p3d";
				affectedByWind = 1.0;
				swLighting = "true";
				scaleMin = 0.5;
				scaleMax = 0.85;
			};
			
			class bp_wideleaf : DefaultClutter {
				model = "ca\plants2\clutter\c_wideLeafPlant.p3d";
				affectedByWind = 1.0;
				swLighting = "true";
				scaleMin = 0.5;
				scaleMax = 0.65;
			};
			
			class bp_GrassGreen_GroupHard : DefaultClutter {
				model = "a3\plants_f\clutter\c_GrassGreen_GroupHard.p3d";
				affectedByWind = 1.0;
				swLighting = "true";
				scaleMin = 0.5;
				scaleMax = 0.65;
			};
			
			class bp_grasslong_drybunch : DefaultClutter {
				model = "a3\plants_f\clutter\c_GrassLong_DryBunch.p3d";
				affectedByWind = 1.0;
				swLighting = "true";
				scaleMin = 0.5;
				scaleMax = 0.65;
			};
			
			class bp_PlantGreenShrub : DefaultClutter {
				model = "a3\plants_f\clutter\c_StrPlantGreenShrub.p3d";
				affectedByWind = 1.0;
				swLighting = "true";
				scaleMin = 0.5;
				scaleMax = 0.65;
			};
			
			class bp_GrassGreenGroup : DefaultClutter {
				model = "A3\plants_f\Clutter\c_StrGrassGreen_group.p3d";
				affectedByWind = 0.6;
				swLighting = "true";
				scaleMin = 0.7;
				scaleMax = 1.3;
			};
		};
		
		class Weather : Weather {
			class Overcast : Overcast {
				class Weather1 : Weather1 {
					sky = "A3\data_f\sky_clear_sky.paa";
					skyR = "A3\data_f\sky_clear_lco.paa";
					horizon = "A3\data_f\sky_clear_horizont_sky.paa";
					overcast = 0;
					alpha = 0;
					size = 0.1;
					height = 1;
					bright = 0.7;
					speed = 0;
					through = 1;
					diffuse = 1;
					cloudDiffuse = 0.95;
					waves = 0.2;
					lightingOvercast = 0;
				};
				
				class Weather7 : Weather1 {
					sky = "A3\data_f\sky_veryclear_sky.paa";
					skyR = "A3\data_f\sky_clear_lco.paa";
					horizon = "A3\data_f\sky_veryclear_horizont_sky.paa";
					overcast = 0.07;
					alpha = 0.5;
					size = 0.2;
					height = 0.95;
					bright = 0.5;
					speed = 0.1;
					through = 1;
					diffuse = 1;
					cloudDiffuse = 0.95;
					waves = 0.2;
					lightingOvercast = 0;
				};
				
				class Weather2 : Weather2 {
					sky = "A3\data_f\sky_almostclear_sky.paa";
					skyR = "A3\data_f\sky_almostclear_lco.paa";
					horizon = "A3\data_f\sky_almostclear_horizont_sky.paa";
					overcast = 0.25;
					alpha = 0.6;
					size = 0.3;
					height = 0.9;
					bright = 0.45;
					speed = 0.25;
					through = 1;
					lightingOvercast = 0.1;
					diffuse = 1;
					waves = 0.22;
				};
				
				class Weather3 : Weather3 {
					sky = "A3\data_f\sky_semicloudy_sky.paa";
					skyR = "A3\data_f\sky_semicloudy_lco.paa";
					horizon = "A3\data_f\sky_semicloudy_horizont_sky.paa";
					overcast = 0.4;
					alpha = 0.8;
					size = 0.5;
					height = 0.8;
					bright = 0.4;
					speed = 0.45;
					through = 0.7;
					lightingOvercast = 0.5;
					diffuse = 0.8;
					waves = 0.32;
				};
				
				class Weather4 : Weather4 {
					sky = "A3\data_f\sky_cloudy_sky.paa";
					skyR = "A3\data_f\sky_cloudy_lco.paa";
					horizon = "A3\data_f\sky_cloudy_horizont_sky.paa";
					overcast = 0.6;
					alpha = 0.99;
					size = 0.65;
					height = 0.75;
					bright = 0.5;
					speed = 0.55;
					through = 0.4;
					lightingOvercast = 0.85;
					diffuse = 0.6;
					waves = 0.32;
				};
				
				class Weather5 : Weather5 {
					sky = "A3\data_f\sky_mostlycloudy_sky.paa";
					skyR = "A3\data_f\sky_mostlycloudy_lco.paa";
					horizon = "A3\data_f\sky_mostlycloudy_horizont_sky.paa";
					overcast = 0.9;
					alpha = 0.55;
					size = 0.8;
					height = 0.7;
					bright = 0.33;
					speed = 0.75;
					through = 0;
					lightingOvercast = 0.98;
					diffuse = 0.3;
					waves = 0.52;
				};
				
				class Weather6 : Weather5 {
					sky = "A3\data_f\sky_overcast_sky.paa";
					skyR = "A3\data_f\sky_overcast_lco.paa";
					horizon = "A3\data_f\sky_overcast_horizont_sky.paa";
					overcast = 1;
					alpha = 0.4;
					bright = 0.2;
					size = 1;
					height = 0.6;
					speed = 0.95;
					through = 0;
					lightingOvercast = 0.98;
					diffuse = 0.1;
					waves = 0.7;
				};
			};
			
			
			class LightningsConfig {
				minCloudiness = 0.85;
				minProbability = 0.0;
				maxProbability = 0.25;
				minCount = 0;
				maxCount = 6;
				scatter = 120;
			};
			
			class WindConfig : WindConfig {
				maxForce = 7.0;
			};
		};
		
		class Rain {
			texture = "A3\data_f\rain_ca.paa";
			raindrop = "\A3\data_f\raindrop.p3d";
			speed = 1;
			levels[] = {8, 2};
		};
		skyTexture = "A3\data_f\sky_semicloudy_sky.paa";
		skyTextureR = "A3\data_f\sky_semicloudy_lco.paa";
		seaTexture = "a3\data_f\seatexture_co.paa";
		clouds[] = {"A3\data_f\mrak1.p3d", "A3\data_f\mrak2.p3d", "A3\data_f\mrak3.p3d", "A3\data_f\mrak4.p3d"};
		skyObject = "A3\data_f\obloha.p3d";
		starsObject = "A3\data_f\stars.p3d";
		pointObject = "A3\data_f\point.p3d";
		horizontObject = "A3\data_f\horizont.p3d";
		haloObject = "A3\data_f\sunhalo.p3d";
		sunObject = "A3\data_f\sun.p3d";
		rainbowObject = "A3\data_f\rainbow.p3d";
		moonObject = "A3\data_f\moon.p3d";
	};
};