class OPTRE_M319;
class OPTRE_M319X: OPTRE_M319
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName					= "M319X Individual Grenade Launcher";
	baseWeapon 					= "M319X";
	model 						= "\OPTRE_Weapons\GL\M319.p3d";
	
	magazines[] = 
	{
		// Specialized Ordnance
		"UGL_8Gauge_Pellets",
		"UGL_8Gauge_Slugs",
		"UGL_8Gauge_Beanbags",
		"UGL_FlareBlue_F",
		"UGL_Potato",
		"3Rnd_UGL_8Gauge_Pellets",
		"3Rnd_UGL_8Gauge_Slugs",
		"3Rnd_UGL_8Gauge_Beanbags",
		"3Rnd_UGL_FlareBlue_F",
		
		// Standard
		"1Rnd_HE_Grenade_shell",
		"UGL_FlareWhite_F",
		"UGL_FlareGreen_F",
		"UGL_FlareRed_F",
		"UGL_FlareYellow_F",
		"UGL_FlareCIR_F",
		"1Rnd_Smoke_Grenade_shell",
		"1Rnd_SmokeRed_Grenade_shell",
		"1Rnd_SmokeGreen_Grenade_shell",
		"1Rnd_SmokeYellow_Grenade_shell",
		"1Rnd_SmokePurple_Grenade_shell",
		"1Rnd_SmokeBlue_Grenade_shell",
		"1Rnd_SmokeOrange_Grenade_shell",
		"3Rnd_HE_Grenade_shell",
		"3Rnd_UGL_FlareWhite_F",
		"3Rnd_UGL_FlareGreen_F",
		"3Rnd_UGL_FlareRed_F",
		"3Rnd_UGL_FlareYellow_F",
		"3Rnd_UGL_FlareCIR_F",
		"3Rnd_Smoke_Grenade_shell",
		"3Rnd_SmokeRed_Grenade_shell",
		"3Rnd_SmokeGreen_Grenade_shell",
		"3Rnd_SmokeYellow_Grenade_shell",
		"3Rnd_SmokePurple_Grenade_shell",
		"3Rnd_SmokeBlue_Grenade_shell",
		"3Rnd_SmokeOrange_Grenade_shell"
	};
	
	class WeaponSlotsInfo
 	{
		class PointerSlot: PointerSlot
		{
			compatibleitems[]=
			{
				"acc_pointer_ir",
				"ace_acc_pointer_green",
				"acc_flashlight",

				"optre_m45_flashlight",
				"optre_m45_flashlight_red"
			};
		};
	};
};