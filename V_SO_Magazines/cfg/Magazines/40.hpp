// 3 Round 40mm
class 3Rnd_UGL_FlareWhite_F;
class 3Rnd_UGL_FlareBlue_F: 3Rnd_UGL_FlareWhite_F
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	ammo 						= "F_40mm_Blue";
	displayName 				= "3Rnd 3GL Flares (Blue)";
	displayNameShort 			= "Blue Flare";
	descriptionShort 			= "Type: Flare Rounds - Blue<br />Rounds: 3<br />Used in: 3GL";
	picture 					= "\v_so_weapons\data\flares\gear_ugl_flare_blue_ca";
};

class 3Rnd_UGL_8Gauge_Pellet: OPTRE_6Rnd_8Gauge_Pellets
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName 				= "3Rnd 3GL 8 Gauge (Pellets)";
	count						= 3;
	descriptionShort 			= "Type: 8 Gauge - Pellets<br />Rounds: 3<br />Used in: 3GL";
	picture 					= "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_6Rnd_12Gauge_Slug_ca";
};

class 3Rnd_UGL_8Gauge_Slug: OPTRE_6Rnd_8Gauge_Slugs
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	
	displayName 				= "3Rnd 3GL 8 Gauge (Slugs)";
	count						= 3;
	descriptionShort 			= "Type: 8 Gauge - Slugs<br />Rounds: 3<br />Used in: 3GL";
	picture 					= "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_6Rnd_12Gauge_Pellets_ca";
};

class 3Rnd_UGL_8Gauge_Beanbag: OPTRE_6Rnd_8Gauge_Beanbags
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	
	displayName 				= "3Rnd 3GL 8 Gauge (Beanbags)";
	count						= 3;
	descriptionShort 			= "Type: 8 Gauge - Beanbags<br />Rounds: 3<br />Used in: 3GL";
	picture 					= "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_6Rnd_12Gauge_Slug_ca";
};

// 1 Round 40mm
class UGL_FlareWhite_F;
class UGL_FlareBlue_F: UGL_FlareWhite_F
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	ammo 						= "F_40mm_Blue";
	displayName 				= "Flare Round (Blue)";
	displayNameShort 			= "Blue Flare";
	descriptionShort 			= "Type: Flare Round - Blue<br />Rounds: 1<br />Used in: ELGM, 3GL";
	picture 					= "\v_so_weapons\data\flares\gear_ugl_flare_blue_ca";
};

class ACE_40mm_Flare_blue: UGL_FlareBlue_F
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	ammo 						= "ACE_40mm_Flare_blue";
	displayName					= "M660 Illumination Flare (Blue)";
	descriptionShort 			= "Type: Star Parachute Flare";
};

class UGL_8Gauge_Pellet: OPTRE_6Rnd_8Gauge_Pellets
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	
	displayName 				= "8 Gauge (Pellets)";
	count						= 1;
	descriptionShort 			= "Type: 8 Gauge - Pellets<br />Rounds: 1<br />Used in: ELGM, 3GL";
};

class UGL_8Gauge_Slug: OPTRE_6Rnd_8Gauge_Slugs
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	
	displayName 				= "8 Gauge (Slugs)";
	count						= 1;
	descriptionShort 			= "Type: 8 Gauge - Slugs<br />Rounds: 1<br />Used in: ELGM, 3GL";
};

class UGL_8Gauge_Beanbag: OPTRE_6Rnd_8Gauge_Beanbags
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	
	displayName 				= "8 Gauge (Beanbags)";
	count						= 1;
	descriptionShort 			= "Type: 8 Gauge - Beanbags<br />Rounds: 1<br />Used in: ELGM, 3GL";
};

// Don't look down here...
class UGL_Potato: OPTRE_6Rnd_8Gauge_Pellets
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	
	ammo						= "UGL_Potato";
	displayName 				= "Potato";
	displayNameShort 			= "Potato";
	count						= 1;
	descriptionShort 			= "Type: Potato<br />Rounds: 1<br />Used in: ELGM, 3GL";
	picture 					= "\v_so_weapons\data\flares\gear_ugl_potat_ca";
};