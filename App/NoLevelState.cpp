#include "NoLevelState.h"

NoLevelState::NoLevelState(): LevelState("level3")
{
    // setPandemicLevel("level1");
}

void NoLevelState::handle()
{
    cout<< "The country is at no level: Normal Living";
}

LevelState* NoLevelState::changePandemicLevel(bool whatToDo)
{
    if( whatToDo == true)
        return new LevelState("level1");

    else
        return new LevelState("none");
}