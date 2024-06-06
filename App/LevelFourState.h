#if !defined(LevelFourState)
#define LevelFourState_H

#include <iostream>
#include "LevelState.h"

using namespace std;
class LevelFourState : LevelState
{
    public:
        LevelFourState();
        void handle();
        LevelState* changePandemicLevel(bool whatToDo);
};

#endif 