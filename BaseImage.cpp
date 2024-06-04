#include "BaseImage.h"

BaseImage::BaseImage()
{

}

void BaseImage::drawPoster()
{
    for (int i = 1; i <= 50; i++)  
    {  
        for (int j = 1; j <= 30; j++)  
        {  
            if (i == 1 || i == 50 ||  
                j == 1 || j == 30)          
                cout << "*";              
            else
                cout << " "; 
        }  
        cout << endl; 
    } 
}