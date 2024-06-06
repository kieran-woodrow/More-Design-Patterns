#if !defined(Pandemic_H)
#define Pandemic_H

#include <iostream>
#include "LevelState.h"
#include "PandemicStratergy.h"

using namespace std;
class Pandemic 
{
private:
    string name;
    LevelState* Levelstate; //necessary state variable..check this
    PandemicStratergy* Pandemicstratergy; //necessary stratergy variable..check this

public:
    Pandemic();
    string getName();
    void setName(string n);
    void takeAction(); //for stratergy class

    void increaseLevel();//for state
    void decreaseLevel();//for state
    
};

#endif 