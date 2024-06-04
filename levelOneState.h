#if !defined(LevelOneState)
#define LevelOneState_H

#include <iostream>
#include "LevelState.h"

using namespace std;
class LevelOneState : LevelState
{
    public:
        LevelOneState();
        void handle();
        LevelState* changePandemicLevel(bool whatToDo);
};

#endif 