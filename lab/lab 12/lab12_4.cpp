// Madeleine Saucier
// CSCI 1010 Section 001
// Lab 12 Question 4
// calculate and print 20 harmonic numbers

#include <iostream>

using namespace std ;

int main ()
{
    double a[20] ;
    int i ;
    a[0] = 1;

    cout << a[0] << "\t" ;

    for(i = 1; i < 20; i++)
    {
        a[i] = a[i - 1] + (1.0 / (i + 1)) ;
        
        cout << a[i] << "\t" ;
    }

    cout << endl ;


return 0 ;
}