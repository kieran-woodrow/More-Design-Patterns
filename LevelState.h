#if !defined(LevelState)
#define LevelState_H

#include <iostream>

using namespace std;
class LevelState 
{
private:
    string pandemicLevel;

public:
    LevelState();
    LevelState(string l);
    string getPandemicState();
    void SetPandemicLevel(string l); //INCASE
    virtual void handle();
    virtual LevelState* changePandemicLevel(bool whatToDo);
};

#endif // State_H