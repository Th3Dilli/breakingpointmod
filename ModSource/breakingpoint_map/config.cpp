/*
	Breaking Point Mod for Arma 3

	Released under Arma Public Share Like Licence (APL-SA)
	https://www.bistudio.com/community/licenses/arma-public-license-share-alike

	Alderon Games Pty Ltd
*/


class CfgPatches {
	class breakingpooint_map {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Map_Data", "CAStructures_Wall", "A3_Data_F", "A3_Structures_F_Civ_Lamps"};
	};
};

#include "CfgVehicles.hpp"
#include "CfgSurfaces.hpp"
//#include "CfgWorlds.hpp"
