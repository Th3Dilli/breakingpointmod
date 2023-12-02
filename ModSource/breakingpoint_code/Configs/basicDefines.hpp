/*
  Breaking Point Mod for Arma 3

  Released under Arma Public Share Like Licence (APL-SA)
  https://www.bistudio.com/community/licenses/arma-public-license-share-alike

  Alderon Games Pty Ltd
*/


#define TRUE 1
#define FALSE 0

#define VSOFT 0
#define VARMOR 1
#define VAIR 2

// type scope
#define PRIVATE 0
#define PROTECTED 1
#define PUBLIC 2

#define CANSEERADAR 1
#define CANSEEEYE 2
#define CANSEEOPTICS 4
#define CANSEEEAR 8
#define CANSEECOMPASS 16
#define CANSEERADARC CanSeeRadar+CanSeeCompass
#define CANSEEALL 31

#define READANDWRITE 0 //! any modifications enabled
#define READANDCREATE 1 //! only adding new class members is allowed
#define READONLY 2 //! no modifications enabled
#define READONLYVERIFIED 3 //! no modifications enabled, CRC test applied

#define LOCKNO		0
#define LOCKCADET	1
#define LOCKYES		2

#define WEAPONNOSLOT		0	// dummy weapons
#define WEAPONSLOTPRIMARY	1	// primary weapons
#define WEAPONSLOTSECONDARY	4	// secondary weapons
#define WEAPONSLOTHANDGUN	2	// HandGun
#define WEAPONSLOTHANDGUNITEM	16 // HandGun magazines
#define WEAPONSLOTITEM		256	// items
#define WEAPONSLOTBINOCULAR	4096	// binocular
#define WEAPONHARDMOUNTED	65536
#define WEAPONSLOTINVENTORY 131072 // inventory items

#define SPEED_STATIC 1e10

#define NEVER_DESTROY 1000	// for MP - destroying dead bodies

#define TRACERECOLOR 0.2,0.8,0.1
#define TRACERWCOLOR 0.8,0.5,0.1
#define TRACERGCOLOR 0.7,0.7,0.5
#define TRACERNCOLOR 0,0,0 // used for sniper / silenced rifles

#define TRACERECOLORF {TracerEColor,0.040}
#define TRACERWCOLORF {TracerWColor,0.040}
#define TRACERGCOLORF {TracerGColor,0.040}
#define TRACERNCOLORF {TracerNColor,0.005}

#define TRACERSECOLORF {TracerEColor,0.25}
#define TRACERSWCOLORF {TracerWColor,0.25}

#define TRACER_W_ALWAYS tracerColor[]=TracerWColorF;tracerColorR[]=TracerWColorF
#define TRACER_W_OPTIONAL tracerColor[]=TracerWColorF;tracerColorR[]=TracerNColorF
#define TRACER_W_STRONG tracerColor[]=TracerSWColorF;tracerColorR[]=TracerSWColorF

#define TRACER_E_ALWAYS tracerColor[]=TracerEColorF;tracerColorR[]=TracerEColorF
#define TRACER_E_OPTIONAL tracerColor[]=TracerEColorF;tracerColorR[]=TracerNColorF
#define TRACER_E_STRONG tracerColor[]=TracerSEColorF;tracerColorR[]=TracerSEColorF

#define TRACER_G_ALWAYS tracerColor[]=TracerGColorF;tracerColorR[]=TracerGColorF
#define TRACER_G_OPTIONAL tracerColor[]=TracerGColorF;tracerColorR[]=TracerNColorF

#define TRACER_N_ALWAYS tracerColor[]=TracerNColorF;tracerColorR[]=TracerNColorF

#define LOCKNO		0
#define LOCKCADET	1
#define LOCKYES		2

enum
{
  DestructNo,
  DestructBuilding,
  DestructEngine,
  DestructTree,
  DestructTent,
  DestructMan,
  DestructDefault,
  DestructWreck
};

