class CfgPatches
{
    class ZenExpansionArmbands
    {
        requiredVersion=0.1;
        units[]={};
        requiredAddons[]=
        {
            "DZ_Data",
            "DZ_Scripts",
			"DayZExpansion_Objects_BaseBuilding_Flags"
        };
    };
};

class CfgMods
{
    class ZenExpansionArmbands
    {
        type="mod";
        author="Zenarchist";
        dir="ZenExpansionArmbands";
        name="ZenExpansionArmbands";
        hideName=1;
		hidePicture=1;
        dependencies[]=
        {
            "Game",
            "World",
            "Mission"
        };
    };
};

class CfgVehicles
{
    class Flag_Base;
    class Armband_ColorBase;

	// EXPANSION FLAGS -> Add 'color' config. Armband recipe spawns item as: "Armband_" + color.
	class Expansion_Flag_Expansion: Flag_Base
	{
        color = "Expansion_Expansion";
	};
	class Expansion_Flag_White: Flag_Base
	{
        color = "Expansion_White";
	};
	class Expansion_Flag_Australia: Flag_Base
	{
        color = "Expansion_Australia";
	};
	class Expansion_Flag_Canada: Flag_Base
	{
        color = "Expansion_Canada";
	};
	class Expansion_Flag_Chernarus: Flag_Base
	{
        color = "Expansion_Chernarus";
	};
	class Expansion_Flag_France: Flag_Base
	{
        color = "Expansion_France";
	};
	class Expansion_Flag_Germany: Flag_Base
	{
        color = "Expansion_Germany";
	};
	class Expansion_Flag_Latvia: Flag_Base
	{
        color = "Expansion_Latvia";
	};
	class Expansion_Flag_Luxembourg: Flag_Base
	{
        color = "Expansion_Luxembourg";
	};
	class Expansion_Flag_Mexico: Flag_Base
	{
        color = "Expansion_Mexico";
	};
	class Expansion_Flag_Netherlands: Flag_Base
	{
        color = "Expansion_Netherlands";
	};
	class Expansion_Flag_NewZealand: Flag_Base
	{
        color = "Expansion_NewZealand";
	};
	class Expansion_Flag_Norway: Flag_Base
	{
        color = "Expansion_Norway";
	};
	class Expansion_Flag_Poland: Flag_Base
	{
        color = "Expansion_Poland";
	};
	class Expansion_Flag_Russia: Flag_Base
	{
        color = "Expansion_Russia";
	};
	class Expansion_Flag_UK: Flag_Base
	{
        color = "Expansion_UK";
	};
	class Expansion_Flag_USA: Flag_Base
	{
        color = "Expansion_USA";
	};
	class Expansion_Flag_Scotland: Flag_Base
	{
        color = "Expansion_Scotland";
	};
	class Expansion_Flag_Sweden: Flag_Base
	{
        color = "Expansion_Sweden";
    };
	class Expansion_Flag_Spain: Flag_Base
	{
        color = "Expansion_Spain";
	};
	class Expansion_Flag_Brazil: Flag_Base
	{
        color = "Expansion_Brazil";
	};
	class Expansion_Flag_Portugal: Flag_Base
	{
        color = "Expansion_Portugal";
	};
	class Expansion_Flag_Belgium: Flag_Base
	{
        color = "Expansion_Belgium";
	};
	class Expansion_Flag_Livonia: Flag_Base
	{
        color = "Expansion_Livonia";
	};
	class Expansion_Flag_Japan: Flag_Base
	{
        color = "Expansion_Japan";
	};
	class Expansion_Flag_China: Flag_Base
	{
        color = "Expansion_China";
	};
	class Expansion_Flag_SouthKorea: Flag_Base
	{
        color = "Expansion_SouthKorea";
	};
	class Expansion_Flag_UN: Flag_Base
	{
        color = "Expansion_UN";
	};
	class Expansion_Flag_NATO: Flag_Base
	{
        color = "Expansion_NATO";
	};
	class Expansion_Flag_Pirate: Flag_Base
	{
        color = "Expansion_Pirate";
	};
	class Expansion_Flag_Chedaki: Flag_Base
	{
        color = "Expansion_Chedaki";
	};
	class Expansion_Flag_NAPA: Flag_Base
	{
        color = "Expansion_NAPA";
	};
	class Expansion_Flag_CDF: Flag_Base
	{
        color = "Expansion_CDF";
	};
	class Expansion_Flag_NuevoRico: Flag_Base
	{
        color = "Expansion_NuevoRico";
	};
	class Expansion_Flag_Borduria: Flag_Base
	{
        color = "Expansion_Borduria";
	};
	class Expansion_Flag_Biohazard: Flag_Base
	{
        color = "Expansion_Biohazard";
	};
	class Expansion_Flag_AnyoneInCherno: Flag_Base
	{
        color = "Expansion_AnyoneInCherno";
	};
	class Expansion_Flag_Ireland: Flag_Base
	{
        color = "Expansion_Ireland";
	};
	class Expansion_Flag_Italy: Flag_Base
	{
        color = "Expansion_Italy";
	};
	class Expansion_Flag_Wales: Flag_Base
	{
        color = "Expansion_Wales";
	};
	class Expansion_Flag_Switzerland: Flag_Base
	{
        color = "Expansion_Switzerland";
	};
	class Expansion_Flag_SriLanka: Flag_Base
	{
        color = "Expansion_SriLanka";
	};
	class Expansion_Flag_SouthAfrica: Flag_Base
	{
        color = "Expansion_SouthAfrica";
	};
	class Expansion_Flag_Sicily: Flag_Base
	{
        color = "Expansion_Sicily";
	};
	class Expansion_Flag_OffWithHead: Flag_Base
	{
        color = "Expansion_OffWithHead";
	};
	class Expansion_Flag_Gibraltar: Flag_Base
	{
        color = "Expansion_Gibraltar";
	};
	class Expansion_Flag_Czechia: Flag_Base
	{
        color = "Expansion_Czechia";
	};
	class Expansion_Flag_Fari: Flag_Base
	{
        color = "Expansion_Fari";
	};
	class Expansion_Flag_Finland: Flag_Base
	{
        color = "Expansion_Finland";
	};
	class Expansion_Flag_Argentina: Flag_Base
	{
        color = "Expansion_Argentina";
	};
	class Expansion_Flag_Turkey: Flag_Base
	{
        color = "Expansion_Turkey";
	};
	class Expansion_Flag_Ukraine: Flag_Base
	{
        color = "Expansion_Ukraine";
	};
	class Expansion_Flag_DayZWhite: Flag_Base
	{
        color = "Expansion_DayZWhite";
	};
	class Expansion_Flag_DayZBlack: Flag_Base
	{
        color = "Expansion_DayZBlack";
	};
	class Expansion_Flag_DoubleAxe: Flag_Base
	{
        color = "Expansion_DoubleAxe";
	};
	class Expansion_Flag_Grenade: Flag_Base
	{
        color = "Expansion_Grenade";
	};
	class Expansion_Flag_Red: Flag_Base
	{
        color = "Expansion_Red";
	};
	class Expansion_Flag_Blue: Flag_Base
	{
        color = "Expansion_Blue";
	};
	class Expansion_Flag_Green: Flag_Base
	{
        color = "Expansion_Green";
	};
	class Expansion_Flag_Yellow: Flag_Base
	{
        color = "Expansion_Yellow";
	};
	class Expansion_Flag_Orange: Flag_Base
	{
        color = "Expansion_Orange";
	};
	class Expansion_Flag_Pink: Flag_Base
	{
        color = "Expansion_Pink";
	};
	class Expansion_Flag_Purple: Flag_Base
	{
        color = "Expansion_Purple";
	};
	class Expansion_Flag_Rainbow: Flag_Base
	{
        color = "Expansion_Rainbow";
	};

    // ARMBANDS
	class Armband_Expansion_Expansion: Armband_ColorBase
	{
        scope = 2;
        visibilityModifier = 0.94999999;
        hiddenSelectionsTextures[] =
        {
            "\DayZExpansion\Objects\Structures\Flags\data\logos\flag_expansion_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\logos\flag_expansion_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\logos\flag_expansion_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\logos\flag_expansion_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\logos\flag_expansion_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\logos\flag_expansion_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\logos\flag_expansion_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\logos\flag_expansion_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\logos\flag_expansion_co.paa"
        };
	};
	class Armband_Expansion_White: Armband_ColorBase
	{
        scope = 2;
        visibilityModifier = 0.94999999;
        hiddenSelectionsTextures[] =
        {
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_white_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_white_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_white_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_white_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_white_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_white_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_white_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_white_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_white_co.paa"
        };
	};
	class Armband_Expansion_Australia: Armband_ColorBase
	{
        scope = 2;
        visibilityModifier = 0.94999999;
        hiddenSelectionsTextures[] =
        {
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_australia_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_australia_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_australia_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_australia_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_australia_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_australia_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_australia_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_australia_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_australia_co.paa"
        };
	};
	class Armband_Expansion_Canada: Armband_ColorBase
	{
        scope = 2;
        visibilityModifier = 0.94999999;
        hiddenSelectionsTextures[] =
        {
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_canada_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_canada_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_canada_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_canada_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_canada_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_canada_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_canada_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_canada_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_canada_co.paa"
        };
	};
	class Armband_Expansion_Chernarus: Armband_ColorBase
	{
        scope = 2;
        visibilityModifier = 0.94999999;
        hiddenSelectionsTextures[] =
        {
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_chernarus_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_chernarus_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_chernarus_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_chernarus_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_chernarus_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_chernarus_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_chernarus_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_chernarus_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_chernarus_co.paa"
        };
	};
	class Armband_Expansion_France: Armband_ColorBase
	{
        scope = 2;
        visibilityModifier = 0.94999999;
        hiddenSelectionsTextures[] =
        {
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_france_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_france_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_france_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_france_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_france_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_france_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_france_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_france_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_france_co.paa"
        };
	};
	class Armband_Expansion_Germany: Armband_ColorBase
	{
        scope = 2;
        visibilityModifier = 0.94999999;
        hiddenSelectionsTextures[] =
        {
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_germany_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_germany_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_germany_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_germany_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_germany_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_germany_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_germany_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_germany_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_germany_co.paa"
        };
	};
	class Armband_Expansion_Latvia: Armband_ColorBase
	{
        scope = 2;
        visibilityModifier = 0.94999999;
        hiddenSelectionsTextures[] =
        {
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_latvia_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_latvia_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_latvia_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_latvia_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_latvia_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_latvia_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_latvia_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_latvia_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_latvia_co.paa"
        };
	};
	class Armband_Expansion_Luxembourg: Armband_ColorBase
	{
        scope = 2;
        visibilityModifier = 0.94999999;
        hiddenSelectionsTextures[] =
        {
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_luxembourg_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_luxembourg_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_luxembourg_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_luxembourg_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_luxembourg_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_luxembourg_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_luxembourg_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_luxembourg_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_luxembourg_co.paa"
        };
	};
	class Armband_Expansion_Mexico: Armband_ColorBase
	{
        scope = 2;
        visibilityModifier = 0.94999999;
        hiddenSelectionsTextures[] =
        {
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_mexico_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_mexico_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_mexico_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_mexico_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_mexico_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_mexico_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_mexico_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_mexico_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_mexico_co.paa"
        };
	};
	class Armband_Expansion_Netherlands: Armband_ColorBase
	{
        scope = 2;
        visibilityModifier = 0.94999999;
        hiddenSelectionsTextures[] =
        {
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_netherlands_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_netherlands_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_netherlands_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_netherlands_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_netherlands_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_netherlands_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_netherlands_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_netherlands_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_netherlands_co.paa"
        };
	};
	class Armband_Expansion_NewZealand: Armband_ColorBase
	{
        scope = 2;
        visibilityModifier = 0.94999999;
        hiddenSelectionsTextures[] =
        {
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_new_zealand_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_new_zealand_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_new_zealand_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_new_zealand_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_new_zealand_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_new_zealand_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_new_zealand_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_new_zealand_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_new_zealand_co.paa"
        };
	};
	class Armband_Expansion_Norway: Armband_ColorBase
	{
        scope = 2;
        visibilityModifier = 0.94999999;
        hiddenSelectionsTextures[] =
        {
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_norway_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_norway_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_norway_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_norway_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_norway_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_norway_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_norway_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_norway_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_norway_co.paa"
        };
	};
	class Armband_Expansion_Poland: Armband_ColorBase
	{
        scope = 2;
        visibilityModifier = 0.94999999;
        hiddenSelectionsTextures[] =
        {
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_poland_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_poland_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_poland_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_poland_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_poland_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_poland_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_poland_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_poland_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_poland_co.paa"
        };
	};
	class Armband_Expansion_Russia: Armband_ColorBase
	{
		scope = 2;
        visibilityModifier = 0.94999999;
        hiddenSelectionsTextures[] =
        {
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_russia_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_russia_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_russia_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_russia_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_russia_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_russia_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_russia_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_russia_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_russia_co.paa"
        };
	};
	class Armband_Expansion_UK: Armband_ColorBase
	{
        scope = 2;
        visibilityModifier = 0.94999999;
        hiddenSelectionsTextures[] =
        {
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_uk_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_uk_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_uk_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_uk_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_uk_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_uk_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_uk_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_uk_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_uk_co.paa"
        };
	};
	class Armband_Expansion_USA: Armband_ColorBase
	{
        scope = 2;
        visibilityModifier = 0.94999999;
        hiddenSelectionsTextures[] =
        {
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_usa_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_usa_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_usa_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_usa_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_usa_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_usa_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_usa_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_usa_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_usa_co.paa"
        };
	};
	class Armband_Expansion_Scotland: Armband_ColorBase
	{
        scope = 2;
        visibilityModifier = 0.94999999;
        hiddenSelectionsTextures[] =
        {
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_scotland_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_scotland_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_scotland_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_scotland_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_scotland_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_scotland_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_scotland_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_scotland_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_scotland_co.paa"
        };
	};
	class Armband_Expansion_Sweden: Armband_ColorBase
	{
        scope = 2;
        visibilityModifier = 0.94999999;
        hiddenSelectionsTextures[] =
        {
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_sweden_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_sweden_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_sweden_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_sweden_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_sweden_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_sweden_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_sweden_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_sweden_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_sweden_co.paa"
        };
    };
	class Armband_Expansion_Spain: Armband_ColorBase
	{
        scope = 2;
        visibilityModifier = 0.94999999;
        hiddenSelectionsTextures[] =
        {
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_spain_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_spain_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_spain_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_spain_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_spain_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_spain_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_spain_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_spain_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_spain_co.paa"
        };
	};
	class Armband_Expansion_Brazil: Armband_ColorBase
	{
        scope = 2;
        visibilityModifier = 0.94999999;
        hiddenSelectionsTextures[] =
        {
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_brazil_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_brazil_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_brazil_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_brazil_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_brazil_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_brazil_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_brazil_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_brazil_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_brazil_co.paa"
        };
	};
	class Armband_Expansion_Portugal: Armband_ColorBase
	{
        scope = 2;
        visibilityModifier = 0.94999999;
        hiddenSelectionsTextures[] =
        {
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_portugal_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_portugal_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_portugal_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_portugal_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_portugal_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_portugal_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_portugal_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_portugal_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_portugal_co.paa"
        };
	};
	class Armband_Expansion_Belgium: Armband_ColorBase
	{
        scope = 2;
        visibilityModifier = 0.94999999;
        hiddenSelectionsTextures[] =
        {
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_belgium_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_belgium_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_belgium_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_belgium_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_belgium_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_belgium_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_belgium_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_belgium_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_belgium_co.paa"
        };
	};
	class Armband_Expansion_Livonia: Armband_ColorBase
	{
        scope = 2;
        visibilityModifier = 0.94999999;
        hiddenSelectionsTextures[] =
        {
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_livonia_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_livonia_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_livonia_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_livonia_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_livonia_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_livonia_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_livonia_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_livonia_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_livonia_co.paa"
        };
	};
	class Armband_Expansion_Japan: Armband_ColorBase
	{
        scope = 2;
        visibilityModifier = 0.94999999;
        hiddenSelectionsTextures[] =
        {
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_japan_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_japan_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_japan_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_japan_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_japan_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_japan_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_japan_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_japan_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_japan_co.paa"
        };
	};
	class Armband_Expansion_China: Armband_ColorBase
	{
        scope = 2;
        visibilityModifier = 0.94999999;
        hiddenSelectionsTextures[] =
        {
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_china_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_china_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_china_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_china_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_china_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_china_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_china_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_china_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_china_co.paa"
        };
	};
	class Armband_Expansion_SouthKorea: Armband_ColorBase
	{
        scope = 2;
        visibilityModifier = 0.94999999;
        hiddenSelectionsTextures[] =
        {
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_southkorea_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_southkorea_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_southkorea_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_southkorea_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_southkorea_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_southkorea_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_southkorea_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_southkorea_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_southkorea_co.paa"
        };
	};
	class Armband_Expansion_UN: Armband_ColorBase
	{
        scope = 2;
        visibilityModifier = 0.94999999;
        hiddenSelectionsTextures[] =
        {
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_un_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_un_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_un_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_un_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_un_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_un_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_un_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_un_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_un_co.paa"
        };
	};
	class Armband_Expansion_NATO: Armband_ColorBase
	{
        scope = 2;
        visibilityModifier = 0.94999999;
        hiddenSelectionsTextures[] =
        {
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_nato_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_nato_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_nato_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_nato_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_nato_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_nato_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_nato_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_nato_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_nato_co.paa"
        };
	};
	class Armband_Expansion_Pirate: Armband_ColorBase
	{
        scope = 2;
        visibilityModifier = 0.94999999;
        hiddenSelectionsTextures[] =
        {
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_pirate_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_pirate_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_pirate_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_pirate_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_pirate_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_pirate_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_pirate_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_pirate_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_pirate_co.paa"
        };
	};
	class Armband_Expansion_Chedaki: Armband_ColorBase
	{
        scope = 2;
        visibilityModifier = 0.94999999;
        hiddenSelectionsTextures[] =
        {
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_chedaki_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_chedaki_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_chedaki_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_chedaki_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_chedaki_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_chedaki_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_chedaki_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_chedaki_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_chedaki_co.paa"
        };
	};
	class Armband_Expansion_NAPA: Armband_ColorBase
	{
        scope = 2;
        visibilityModifier = 0.94999999;
        hiddenSelectionsTextures[] =
        {
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_napa_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_napa_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_napa_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_napa_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_napa_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_napa_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_napa_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_napa_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_napa_co.paa"
        };
	};
	class Armband_Expansion_CDF: Armband_ColorBase
	{
        scope = 2;
        visibilityModifier = 0.94999999;
        hiddenSelectionsTextures[] =
        {
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_cdf_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_cdf_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_cdf_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_cdf_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_cdf_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_cdf_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_cdf_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_cdf_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_cdf_co.paa"
        };
	};
	class Armband_Expansion_NuevoRico: Armband_ColorBase
	{
        scope = 2;
        visibilityModifier = 0.94999999;
        hiddenSelectionsTextures[] =
        {
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_nuevorico_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_nuevorico_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_nuevorico_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_nuevorico_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_nuevorico_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_nuevorico_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_nuevorico_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_nuevorico_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_nuevorico_co.paa"
        };
	};
	class Armband_Expansion_Borduria: Armband_ColorBase
	{
        scope = 2;
        visibilityModifier = 0.94999999;
        hiddenSelectionsTextures[] =
        {
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_borduria_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_borduria_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_borduria_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_borduria_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_borduria_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_borduria_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_borduria_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_borduria_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_borduria_co.paa"
        };
	};
	class Armband_Expansion_Biohazard: Armband_ColorBase
	{
        scope = 2;
        visibilityModifier = 0.94999999;
        hiddenSelectionsTextures[] =
        {
            "\DayZExpansion\Objects\Structures\Flags\data\logos\flag_biohazard_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\logos\flag_biohazard_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\logos\flag_biohazard_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\logos\flag_biohazard_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\logos\flag_biohazard_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\logos\flag_biohazard_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\logos\flag_biohazard_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\logos\flag_biohazard_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\logos\flag_biohazard_co.paa"
        };
	};
	class Armband_Expansion_AnyoneInCherno: Armband_ColorBase
	{
        scope = 2;
        visibilityModifier = 0.94999999;
        hiddenSelectionsTextures[] =
        {
            "\DayZExpansion\Objects\Structures\Flags\data\logos\flag_anyoneincherno_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\logos\flag_anyoneincherno_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\logos\flag_anyoneincherno_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\logos\flag_anyoneincherno_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\logos\flag_anyoneincherno_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\logos\flag_anyoneincherno_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\logos\flag_anyoneincherno_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\logos\flag_anyoneincherno_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\logos\flag_anyoneincherno_co.paa"
        };
	};
	class Armband_Expansion_Ireland: Armband_ColorBase
	{
        scope = 2;
        visibilityModifier = 0.94999999;
        hiddenSelectionsTextures[] =
        {
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_ireland_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_ireland_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_ireland_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_ireland_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_ireland_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_ireland_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_ireland_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_ireland_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_ireland_co.paa"
        };
	};
	class Armband_Expansion_Italy: Armband_ColorBase
	{
        scope = 2;
        visibilityModifier = 0.94999999;
        hiddenSelectionsTextures[] =
        {
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_italy_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_italy_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_italy_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_italy_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_italy_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_italy_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_italy_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_italy_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_italy_co.paa"
        };
	};
	class Armband_Expansion_Wales: Armband_ColorBase
	{
        scope = 2;
        visibilityModifier = 0.94999999;
        hiddenSelectionsTextures[] =
        {
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_wales_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_wales_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_wales_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_wales_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_wales_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_wales_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_wales_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_wales_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_wales_co.paa"
        };
	};
	class Armband_Expansion_Switzerland: Armband_ColorBase
	{
        scope = 2;
        visibilityModifier = 0.94999999;
        hiddenSelectionsTextures[] =
        {
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_switzerland_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_switzerland_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_switzerland_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_switzerland_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_switzerland_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_switzerland_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_switzerland_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_switzerland_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_switzerland_co.paa"
        };
	};
	class Armband_Expansion_SriLanka: Armband_ColorBase
	{
        scope = 2;
        visibilityModifier = 0.94999999;
        hiddenSelectionsTextures[] =
        {
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_srilanka_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_srilanka_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_srilanka_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_srilanka_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_srilanka_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_srilanka_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_srilanka_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_srilanka_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_srilanka_co.paa"
        };
	};
	class Armband_Expansion_SouthAfrica: Armband_ColorBase
	{
        scope = 2;
        visibilityModifier = 0.94999999;
        hiddenSelectionsTextures[] =
        {
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_southafrica_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_southafrica_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_southafrica_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_southafrica_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_southafrica_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_southafrica_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_southafrica_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_southafrica_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_southafrica_co.paa"
        };
	};
	class Armband_Expansion_Sicily: Armband_ColorBase
	{
        scope = 2;
        visibilityModifier = 0.94999999;
        hiddenSelectionsTextures[] =
        {
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_sicily_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_sicily_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_sicily_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_sicily_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_sicily_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_sicily_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_sicily_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_sicily_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_sicily_co.paa"
        };
	};
	class Armband_Expansion_OffWithHead: Armband_ColorBase
	{
        scope = 2;
        visibilityModifier = 0.94999999;
        hiddenSelectionsTextures[] =
        {
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_offwithhead_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_offwithhead_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_offwithhead_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_offwithhead_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_offwithhead_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_offwithhead_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_offwithhead_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_offwithhead_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_offwithhead_co.paa"
        };
	};
	class Armband_Expansion_Gibraltar: Armband_ColorBase
	{
        scope = 2;
        visibilityModifier = 0.94999999;
        hiddenSelectionsTextures[] =
        {
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_gibraltar_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_gibraltar_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_gibraltar_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_gibraltar_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_gibraltar_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_gibraltar_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_gibraltar_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_gibraltar_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_gibraltar_co.paa"
        };
	};
	class Armband_Expansion_Czechia: Armband_ColorBase
	{
        scope = 2;
        visibilityModifier = 0.94999999;
        hiddenSelectionsTextures[] =
        {
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_czechia_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_czechia_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_czechia_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_czechia_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_czechia_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_czechia_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_czechia_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_czechia_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_czechia_co.paa"
        };
	};
	class Armband_Expansion_Fari: Armband_ColorBase
	{
        scope = 2;
        visibilityModifier = 0.94999999;
        hiddenSelectionsTextures[] =
        {
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_fari_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_fari_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_fari_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_fari_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_fari_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_fari_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_fari_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_fari_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_fari_co.paa"
        };
	};
	class Armband_Expansion_Finland: Armband_ColorBase
	{
        scope = 2;
        visibilityModifier = 0.94999999;
        hiddenSelectionsTextures[] =
        {
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_finland_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_finland_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_finland_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_finland_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_finland_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_finland_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_finland_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_finland_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_finland_co.paa"
        };
	};
	class Armband_Expansion_Argentina: Armband_ColorBase
	{
        scope = 2;
        visibilityModifier = 0.94999999;
        hiddenSelectionsTextures[] =
        {
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_argentina_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_argentina_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_argentina_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_argentina_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_argentina_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_argentina_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_argentina_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_argentina_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_argentina_co.paa"
        };
	};
	class Armband_Expansion_Turkey: Armband_ColorBase
	{
        scope = 2;
        visibilityModifier = 0.94999999;
        hiddenSelectionsTextures[] =
        {
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_turkey_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_turkey_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_turkey_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_turkey_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_turkey_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_turkey_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_turkey_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_turkey_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_turkey_co.paa"
        };
	};
	class Armband_Expansion_Ukraine: Armband_ColorBase
	{
        scope = 2;
        visibilityModifier = 0.94999999;
        hiddenSelectionsTextures[] =
        {
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_ukraine_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_ukraine_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_ukraine_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_ukraine_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_ukraine_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_ukraine_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_ukraine_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_ukraine_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\countries\flag_ukraine_co.paa"
        };
	};
	class Armband_Expansion_DayZWhite: Armband_ColorBase
	{
        scope = 2;
        visibilityModifier = 0.94999999;
        hiddenSelectionsTextures[] =
        {
            "\DayZExpansion\Objects\Structures\Flags\data\logos\flag_dayzwhite_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\logos\flag_dayzwhite_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\logos\flag_dayzwhite_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\logos\flag_dayzwhite_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\logos\flag_dayzwhite_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\logos\flag_dayzwhite_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\logos\flag_dayzwhite_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\logos\flag_dayzwhite_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\logos\flag_dayzwhite_co.paa"
        };
	};
	class Armband_Expansion_DayZBlack: Armband_ColorBase
	{
        scope = 2;
        visibilityModifier = 0.94999999;
        hiddenSelectionsTextures[] =
        {
            "\DayZExpansion\Objects\Structures\Flags\data\logos\flag_dayzblack_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\logos\flag_dayzblack_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\logos\flag_dayzblack_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\logos\flag_dayzblack_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\logos\flag_dayzblack_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\logos\flag_dayzblack_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\logos\flag_dayzblack_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\logos\flag_dayzblack_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\logos\flag_dayzblack_co.paa"
        };
	};
	class Armband_Expansion_DoubleAxe: Armband_ColorBase
	{
        scope = 2;
        visibilityModifier = 0.94999999;
        hiddenSelectionsTextures[] =
        {
            "\DayZExpansion\Objects\Structures\Flags\data\logos\flag_doubleaxe_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\logos\flag_doubleaxe_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\logos\flag_doubleaxe_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\logos\flag_doubleaxe_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\logos\flag_doubleaxe_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\logos\flag_doubleaxe_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\logos\flag_doubleaxe_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\logos\flag_doubleaxe_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\logos\flag_doubleaxe_co.paa"
        };
	};
	class Armband_Expansion_Grenade: Armband_ColorBase
	{
        scope = 2;
        visibilityModifier = 0.94999999;
        hiddenSelectionsTextures[] =
        {
            "\DayZExpansion\Objects\Structures\Flags\data\logos\flag_grenade_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\logos\flag_grenade_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\logos\flag_grenade_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\logos\flag_grenade_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\logos\flag_grenade_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\logos\flag_grenade_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\logos\flag_grenade_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\logos\flag_grenade_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\logos\flag_grenade_co.paa"
        };
	};
	class Armband_Expansion_Red: Armband_ColorBase
	{
        scope = 2;
        visibilityModifier = 0.94999999;
        hiddenSelectionsTextures[] =
        {
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_red_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_red_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_red_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_red_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_red_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_red_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_red_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_red_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_red_co.paa"
        };
	};
	class Armband_Expansion_Blue: Armband_ColorBase
	{
        scope = 2;
        visibilityModifier = 0.94999999;
        hiddenSelectionsTextures[] =
        {
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_blue_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_blue_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_blue_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_blue_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_blue_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_blue_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_blue_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_blue_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_blue_co.paa"
        };
	};
	class Armband_Expansion_Green: Armband_ColorBase
	{
        scope = 2;
        visibilityModifier = 0.94999999;
        hiddenSelectionsTextures[] =
        {
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_green_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_green_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_green_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_green_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_green_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_green_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_green_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_green_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_green_co.paa"
        };
	};
	class Armband_Expansion_Yellow: Armband_ColorBase
	{
        scope = 2;
        visibilityModifier = 0.94999999;
        hiddenSelectionsTextures[] =
        {
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_yellow_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_yellow_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_yellow_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_yellow_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_yellow_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_yellow_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_yellow_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_yellow_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_yellow_co.paa"
        };
	};
	class Armband_Expansion_Orange: Armband_ColorBase
	{
        scope = 2;
        visibilityModifier = 0.94999999;
        hiddenSelectionsTextures[] =
        {
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_orange_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_orange_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_orange_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_orange_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_orange_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_orange_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_orange_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_orange_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_orange_co.paa"
        };
	};
	class Armband_Expansion_Pink: Armband_ColorBase
	{
        scope = 2;
        visibilityModifier = 0.94999999;
        hiddenSelectionsTextures[] =
        {
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_pink_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_pink_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_pink_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_pink_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_pink_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_pink_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_pink_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_pink_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_pink_co.paa"
        };
	};
	class Armband_Expansion_Purple: Armband_ColorBase
	{
        scope = 2;
        visibilityModifier = 0.94999999;
        hiddenSelectionsTextures[] =
        {
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_purple_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_purple_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_purple_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_purple_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_purple_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_purple_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_purple_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_purple_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_purple_co.paa"
        };
	};
	class Armband_Expansion_Rainbow: Armband_ColorBase
	{
        scope = 2;
        visibilityModifier = 0.94999999;
        hiddenSelectionsTextures[] =
        {
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_rainbow_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_rainbow_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_rainbow_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_rainbow_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_rainbow_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_rainbow_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_rainbow_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_rainbow_co.paa",
            "\DayZExpansion\Objects\Structures\Flags\data\colors\flag_rainbow_co.paa"
        };
	};
};
