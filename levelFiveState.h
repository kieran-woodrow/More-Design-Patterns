#if !defined(LevelFiveState)
#define LevelFiveState_H

#include <iostream>
#include "LevelState.h"

using namespace std;
class LevelFiveState : LevelState
{
    public:
        LevelFiveState();
        void handle();
        LevelState* changePandemicLevel(bool whatToDo);
};

#endif 