#if !defined(LevelThreeState)
#define LevelThreeState_H

#include <iostream>
#include "LevelState.h"

using namespace std;
class LevelThreeState : LevelState
{
    public:
        LevelThreeState();
        void handle();
        LevelState* changePandemicLevel(bool whatToDo);
};

#endif 