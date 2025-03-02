#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"A3A_core"};
        author = AUTHOR;
        authors[] = { AUTHORS };
        authorUrl = "";
        VERSION_CONFIG;
    };
};

class A3A {
    #include "mapInfo.hpp"
    #include "NavGrid.hpp"
};


#define A3A_BriefingName QUOTE(Antistasi Community - VERSION)
#define A3A_Mission(MAPNAME) class Antistasi_##MAPNAME { briefingName = A3A_BriefingName; directory = x\A3A\addons\maps\Antistasi_##MAPNAME##.##MAPNAME; };

class CfgMissions
{
    class MPMissions
    { // mission folder names need to be `Antistasi_{Map name}.{Map name}`
        A3A_Mission(Altis)
        A3A_Mission(cam_lao_nam)
        A3A_Mission(vn_khe_sanh)
        A3A_Mission(chernarus_summer)
        A3A_Mission(chernarus_winter)
        A3A_Mission(chernarus)
        A3A_Mission(Enoch)
        A3A_Mission(Kunduz)
        A3A_Mission(Malden)
        A3A_Mission(sara)
#if __A3_DEBUG__
        A3A_Mission(Stratis)
#endif
        A3A_Mission(takistan)
        A3A_Mission(Tanoa)
        A3A_Mission(tem_anizay)
        A3A_Mission(Tembelan)
        A3A_Mission(vt7)
    };
};
