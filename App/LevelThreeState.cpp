#include "LevelThreeState.h"

LevelThreeState::LevelThreeState(): LevelState("level3")
{
    // setPandemicLevel("level1");
}

void LevelThreeState::handle()
{
    cout<< "The country is at level3:Moderate amount of cases, make sure you are wearing a mask";
}

LevelState* LevelThreeState::changePandemicLevel(bool whatToDo)
{
    if( whatToDo == true)
        return new LevelState("level4");

    else
        return new LevelState("level2");
}