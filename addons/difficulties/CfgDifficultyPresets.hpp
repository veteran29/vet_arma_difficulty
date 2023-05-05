
class CfgDifficultyPresets {

    defaultPreset = "veteran29";

    class Custom;
    class veteran29: Custom {
        displayName = "veteran29";
        description = "Custom difficulty for my own playstyle.";
        optionDescription = "Custom difficulty for my own playstyle.";
        levelAI = "veteran29";
        class Options {
            groupIndicators=0;
            friendlyTags=0;
            enemyTags=0;
            detectedMines=1;
            commands=2;
            waypoints=0;
            weaponInfo=2;
            stanceIndicator=2;
            reducedDamage=0;
            staminaBar=1;
            weaponCrosshair=0;
            visionAid=0;
            thirdPersonView=1;
            cameraShake=1;
            scoreTable=1;
            deathMessages=1;
            vonID=1;
            autoReport=0;
            multipleSaves=1;
            squadRadar=0;
            tacticalPing=1;
            mapContentFriendly=0;
            mapContentEnemy=0;
            mapContentMines=0;
        };
    };
    class veteran29_lowAccuracy: veteran29 {
        displayName = "veteran29_lowAccuracy";
        levelAI = "veteran29_lowAccuracy";
    };
};
