#if !defined(ImageElement_H)
#define ImageElement_H

#include <iostream>
#include "Poster.h"
using namespace std;

class ImageElement : Poster
{
private:
char Pixels [50];

public:
ImageElement();
void drawPoster();

    
};

#endif 