/*
	Breaking Point Mod for Arma 3

	Released under Arma Public Share Like Licence (APL-SA)
	https://www.bistudio.com/community/licenses/arma-public-license-share-alike

	Alderon Games Pty Ltd
*/


class CfgPatches {
	class breakingpoint_vehicles {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.02;
		requiredAddons[] = {"A3_Anims_F_Config_Sdr","A3_Weapons_F"};
	};
};

#include "bp_old_bike\bike.hpp"
