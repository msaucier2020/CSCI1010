// Madeleine Saucier
// CSCI 1010 Section 001
// Assignment Question 3
// 

#include <iostream>

using namespace std ;
int main()
{

    int w, x, y, z;

    for (int n = 1000; n <= 9999; n++)
    {
        w = n / 1000 ;
        x =  ((n % 1000) - ((n % 1000) % 100)) / 100 ;
        y = (((n % 1000) % 100) - (((n % 1000) % 100) % 10)) / 10 ;
        z = ((n % 1000) % 100) % 10 ;

        if (w == 3 * y && n % 2 != 0 && w + x + y + z == 27)
        {
            cout << n << endl ;
        }
    }
return 0 ;
}