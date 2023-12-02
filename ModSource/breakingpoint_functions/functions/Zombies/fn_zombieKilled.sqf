/*
	Breaking Point Mod for Arma 3

	Released under Arma Public Share Like Licence (APL-SA)
	https://www.bistudio.com/community/licenses/arma-public-license-share-alike

	Alderon Games Pty Ltd
*/

params ["_zed","_killer","_instigator"];

["zombiekilled : %1 : %2 : %3",_zed, _killer, _instigator] call BP_fnc_debugConsoleFormat;
//Null Checks
if (isNull _zed) exitWith {};
if (isNull _instigator) exitWith {};

//Server
if (isServer) then {
	_kills = _instigator getVariable ["zombieKills",0];
	_instigator setVariable ["zombieKills",(_kills + 1)];
	_zed setVariable ["processedDeath",diag_tickTime];
} else {
	if (local _instigator) then {
		_kills = _instigator getVariable ["zombieKills",0];
		_instigator setVariable ["zombieKills",(_kills + 1)];
	};
	_this remoteExecCall ["BPServer_fnc_eventKill",2];
};
