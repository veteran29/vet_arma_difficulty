#include "script_component.hpp"
    class CfgPatches {
        class ADDON {
            name = COMPONENT;
            units[] = {};
            weapons[] = {};
            requiredVersion = REQUIRED_VERSION;
            requiredAddons[] = {
                "V29Difficulty_main"
            };
            author = "veteran29";
            VERSION_CONFIG;
        };
    };


#include "CfgAILevelPresets.hpp"
#include "CfgDifficultyPresets.hpp"
#include "CfgSurfaces.hpp"
