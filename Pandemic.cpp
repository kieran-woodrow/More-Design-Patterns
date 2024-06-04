#include "Pandemic.h"

Pandemic::Pandemic()
{

}

string Pandemic::getName()
{
    return name;
}

void Pandemic::setName(string n)
{
    name = n;
}

 void Pandemic::takeAction() //DOUBLE CHECK THIS
 {
    cout << this->name+Pandemicstratergy->takeAction(); //check this

 }

void Pandemic::increaseLevel()
{
    Levelstate->SetPandemicLevel( Levelstate->getPandemicState() ); //check this bigtime

    Levelstate->handle();

    if()
    {
        //cant change state
    }
}


void Pandemic::decreaseLevel()
{
    Levelstate->SetPandemicLevel( Levelstate->getPandemicState() ); //check this bigtime

    Levelstate->handle();

    if()
    {
        //cant change state
    }
}


