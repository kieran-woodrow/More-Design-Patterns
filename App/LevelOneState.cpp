#include "LevelOneState.h"

LevelOneState::LevelOneState(): LevelState("level1")
{
    // setPandemicLevel("level1");
}

void LevelOneState::handle()
{
    cout<< "The country is at level1: Very few cases";
}

LevelState* LevelOneState::changePandemicLevel(bool whatToDo)
{
    if( whatToDo == true)
        return new LevelState("level2");

    else
        return new LevelState("none");
}