#include "ImageElement.h"

ImageElement::ImageElement():Poster()
{

    
}

void ImageElement::drawPoster()
{
//     for(int i = 0; i < 50; i++)
//         Pixels[i] = '|';

//       for(int t = 0; t < 50; t++)
//         cout<<Pixels[t];

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
// }