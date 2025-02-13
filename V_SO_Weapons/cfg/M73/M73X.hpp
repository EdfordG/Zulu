class OPTRE_MachineGun_Base;
class OPTRE_M73: OPTRE_MachineGun_Base
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName					= "M73X Light Machine Gun";
	
	magazines[]=
	{
		"OPTRE_36Rnd_95x40_Mag",
		"OPTRE_36Rnd_95x40_Mag_Tracer",
		"OPTRE_36Rnd_95x40_Mag_Tracer_Yellow",
		"OPTRE_36Rnd_95x40_Mag_JHP",
		"OPTRE_36Rnd_95x40_Mag_JHPT",
		"OPTRE_36Rnd_95x40_Mag_HPSAP",
		"OPTRE_36Rnd_95x40_Mag_HPSAPT",
		"OPTRE_36Rnd_95x40_Mag_SAPHE",
		"OPTRE_36Rnd_95x40_Mag_SAPHET",
		"OPTRE_36Rnd_95x40_Mag_SS",
		"OPTRE_100Rnd_95x40_Box",
		"OPTRE_100Rnd_95x40_Box_Tracer",
		"OPTRE_100Rnd_95x40_Box_Tracer_Yellow",
		"OPTRE_100Rnd_95x40_Box_JHP",
		"OPTRE_100Rnd_95x40_Box_JHPT",
		"OPTRE_100Rnd_95x40_Box_HPSAP",
		"OPTRE_100Rnd_95x40_Box_HPSAPT",
		"OPTRE_100Rnd_95x40_Box_SAPHE",
		"OPTRE_100Rnd_95x40_Box_SAPHET",
		"OPTRE_100Rnd_95x40_Box_SS",
		"OPTRE_200Rnd_95x40_Box",
		"OPTRE_200Rnd_95x40_Box_Tracer",
		"OPTRE_200Rnd_95x40_Box_Tracer_Yellow",
		"OPTRE_200Rnd_95x40_Box_JHP",
		"OPTRE_200Rnd_95x40_Box_JHPT",
		"OPTRE_200Rnd_95x40_Box_HPSAP",
		"OPTRE_200Rnd_95x40_Box_HPSAPT",
		"OPTRE_200Rnd_95x40_Box_SAPHE",
		"OPTRE_200Rnd_95x40_Box_SAPHET",
		"OPTRE_200Rnd_95x40_Box_SS"
	};
	
	class WeaponSlotsInfo
 	{
		mass = 158;
 		class MuzzleSlot: MuzzleSlot
		{
			compatibleitems[]=
			{
				"muzzle_snds_h_mg_blk_f",
				"muzzle_snds_l",

				"optre_ma5suppressor",
				"optre_m7_silencer",
				"optre_m6_silencer"
			};
		};
		class CowsSlot: CowsSlot
		{
			compatibleitems[]=
			{
				"optic_arco_ak_blk_f",
				"optic_dms",
				"optic_aco_grn",
				"optic_aco",
				"optic_arco_blk_f",
				"optic_holosight_blk_f",
				"optic_mrco",
				"optic_khs_blk",
				"optic_hamr",
				"optic_sos",
				"optic_lrps",
				"optic_nightstalker",
				"optic_erco_blk_f",
				"optic_ams",
				"ace_optic_lrps_2d",
				"ace_optic_lrps_pip",
				"optic_yorris",
				"ace_optic_sos_2d",
				"ace_optic_sos_pip",
				"ace_optic_mrco_2d",
				"ace_optic_hamr_2d",
				"ace_optic_hamr_pip",
				"optic_ico_01_black_f",
				"optic_aco_smg",
				"optic_aco_grn_smg",
				"optic_holosight_smg_blk_f",
				"optic_mrd_black",

				"optre_srs99_scope",
				"optre_srs99c_scope",
				"optre_ma5_buis",
				"optre_m393_eotech",
				"optre_m73_smartlink",
				"optre_m7_sight",
				"optre_m393_acog",
				"optre_hmg38_carryhandle",
				"optre_m393_scope",
				"optre_m392_scope",
				"optre_br55hb_scope",
				"optre_m6c_scope",
				"OPTRE_BMR_Scope",
				
				"OPTRE_SRS99_Scope_v2",
				"OPTRE_SRS99C_Scope_v2",
				"OPTRE_M73_Smartlink_v2",
				"OPTRE_M6S_Scope",
				"OPTRE_M7_Sight_v2",
				"OPTRE_M392_Scope_v2",
				"OPTRE_M393_Scope_v2",
				"OPTRE_M393_ACOG_v2",
				"OPTRE_M393_EOTECH_v2",
				"OPTRE_BR55HB_Scope_v2",
				"OPTRE_BMR_Scope_v2"
			};
		};
		class PointerSlot: PointerSlot
		{
			compatibleitems[]=
			{
				"optre_m45_flashlight",
				"optre_m45_flashlight_red"
			};
		};
		class UnderBarrelSlot: UnderBarrelSlot
		{
			compatibleitems[]=
			{
				"bipod_01_f_blk",
				"bipod_02_f_blk",
				"bipod_03_f_blk"
			};
		};
	};
};

class OPTRE_M73H: OPTRE_M73
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName					= "M73H Heavy Machine Gun";
	baseWeapon 					= "OPTRE_M73H";
	
	magazines[]=
	{
		"OPTRE_100Rnd_95x60_Box",
		"OPTRE_100Rnd_95x60_Box_Tracer",
		"OPTRE_100Rnd_95x60_Box_JHP",
		"OPTRE_100Rnd_95x60_Box_JHPT",
		"OPTRE_100Rnd_95x60_Box_HPSAP",
		"OPTRE_100Rnd_95x60_Box_HPSAPT",
		"OPTRE_100Rnd_95x60_Box_SAPHE",
		"OPTRE_100Rnd_95x60_Box_SAPHET",
		"OPTRE_100Rnd_95x60_Box_SS",
		"OPTRE_300Rnd_95x60_Box",
		"OPTRE_300Rnd_95x60_Box_Tracer",
		"OPTRE_300Rnd_95x60_Box_JHP",
		"OPTRE_300Rnd_95x60_Box_JHPT",
		"OPTRE_300Rnd_95x60_Box_HPSAP",
		"OPTRE_300Rnd_95x60_Box_HPSAPT",
		"OPTRE_300Rnd_95x60_Box_SAPHE",
		"OPTRE_300Rnd_95x60_Box_SAPHET",
		"OPTRE_300Rnd_95x60_Box_SS"
	};
	
	class WeaponSlotsInfo: WeaponSlotsInfo
 	{
		mass = 168;
	};
};