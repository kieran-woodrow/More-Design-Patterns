#if !defined(LevelTwoState)
#define LevelTwoState_H

#include <iostream>
#include "LevelState.h"

using namespace std;
class LevelTwoState : LevelState
{
    public:
        LevelTwoState();
        void handle();
        LevelState* changePandemicLevel(bool whatToDo);
};

#endif 