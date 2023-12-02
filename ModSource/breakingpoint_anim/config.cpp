/*
	Breaking Point Mod for Arma 3

	Released under Arma Public Share Like Licence (APL-SA)
	https://www.bistudio.com/community/licenses/arma-public-license-share-alike

	Alderon Games Pty Ltd
*/

class CfgPatches {
	class breakingpoint_anim {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
	class EMpatch
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F","A3_Map_Altis","A3_Map_Stratis","breakingpoint_code"};
	};
	class exile_client{};
};
class CfgMovesBasic;
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class LadderCivilStatic;
		class LadderCivilUpLoop: LadderCivilStatic
		{
			speed = "1.04/(2/3)";
		};
		class AswmPercMstpSnonWnonDnon;
		class AsswPercMstpSnonWnonDnon;
		class AbswPercMstpSnonWnonDnon;
		class AdvePercMstpSnonWrflDnon;
		class AsdvPercMstpSnonWrflDnon;
		class AbdvPercMstpSnonWrflDnon;
		class AswmPercMrunSnonWnonDf: AswmPercMstpSnonWnonDnon
		{
			speed = 0.42;
		};
		class AsswPercMrunSnonWnonDf: AsswPercMstpSnonWnonDnon
		{
			speed = 0.42;
		};
		class AbswPercMrunSnonWnonDf: AbswPercMstpSnonWnonDnon
		{
			speed = 0.42;
		};
		class AdvePercMrunSnonWrflDf: AdvePercMstpSnonWrflDnon
		{
			speed = 0.4;
		};
		class AsdvPercMrunSnonWrflDf: AsdvPercMstpSnonWrflDnon
		{
			speed = 0.4;
		};
		class AbdvPercMrunSnonWrflDf: AbdvPercMstpSnonWrflDnon
		{
			speed = 0.4;
		};
	};
};
class CfgAnimation
{
	ladderSpeed = "0.5/(1/3)";
};