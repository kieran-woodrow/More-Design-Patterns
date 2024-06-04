#include "LevelState.h"

LevelState::LevelState() //EMPTY CONSTRUCTOR
{

}

LevelState::LevelState(string l)
{
    pandemicLevel = l;
}

string LevelState::getPandemicState()
{
    return pandemicLevel;
}

void setPandemicLevel(string l) //INCASE
{
    pandemicLevel = l;
}






