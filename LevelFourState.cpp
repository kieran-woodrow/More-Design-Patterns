#include "LevelFourState.h"

LevelFourState::LevelFourState(): LevelState("level4")
{
    // setPandemicLevel("level1");
}

void LevelFourState::handle()
{
    cout<< "The country is at level4: There are quite a bit of cases, take all necessary precautions.";
}

LevelState* LevelFourState::changePandemicLevel(bool whatToDo)
{
    if( whatToDo == true)
        return new LevelState("level5");

    else
        return new LevelState("level3");
}