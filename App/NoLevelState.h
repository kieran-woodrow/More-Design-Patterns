#if !defined(NoLevelState)
#define NoLevelState_H

#include <iostream>
#include "LevelState.h"

using namespace std;
class NoLevelState : LevelState
{
    public:
        NoLevelState();
        void handle();
        LevelState* changePandemicLevel(bool whatToDo);
};

#endif 