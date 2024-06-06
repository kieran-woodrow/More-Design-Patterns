#if !defined(Poster_H)
#define Poster_H

#include <iostream>
using namespace std;

class Poster 
{
protected:
Poster* p;

public:
Poster();
virtual void drawPoster() = 0;
    
};

#endif 