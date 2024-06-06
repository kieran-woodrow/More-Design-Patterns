#include "LevelFiveState.h"

LevelFiveState::LevelFiveState(): LevelState("level3")
{
    // setPandemicLevel("level1");
}

void LevelFiveState::handle()
{
    cout<< "The country is at level5: Don’t go outside unless you have to”";
}

LevelState* LevelFiveState::changePandemicLevel(bool whatToDo)
{
    if( whatToDo == true)
        return new LevelState("level5");

    else
        return new LevelState("level4");
}