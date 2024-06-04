#if !defined(BaseImage_H)
#define BaseImage_H

#include <iostream>
#include "Poster.h"
using namespace std;

class BaseImage: Poster 
{
protected:

Poster** heightOfImage[50]; //check


public:
BaseImage();
void drawPoster();

    
};

#endif 