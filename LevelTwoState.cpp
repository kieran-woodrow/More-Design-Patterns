#include "LevelTwoState.h"

LevelTwoState::LevelTwoState(): LevelState("level2")
{
    // setPandemicLevel("level1");
}

void LevelTwoState::handle()
{
    cout<< "The country is at level2: Take caution";
}

LevelState* LevelTwoState::changePandemicLevel(bool whatToDo)
{
    if( whatToDo == true)
        return new LevelState("level3");

    else
        return new LevelState("level1");
}