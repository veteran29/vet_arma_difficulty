#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
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

class RscControlsGroup;
class RscActiveText;
class RscDisplayMainMap {
    // get rid of the "center to player position" - button (as it works even on elite)
    class controls {
        class TopRight: RscControlsGroup {
            class controls {
                class ButtonPlayer: RscActiveText {
                    text = "";
                    w = 0;
                    h = 0;
                    sizeEx = 0;
                    onButtonClick = "";
                };
            };
        };
    };
};
