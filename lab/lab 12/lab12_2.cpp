// Madeleine Saucier
// CSCI 1010 Section 001
// Lab 12 Question 2
// print the first 40 fibonacci numbers

#include <iostream>

using namespace std ;

int main ()
{
 
    int a[40] ;
    a[0] = 0 ;
    a[1] = 1 ;
    int i ;

    for(i = 2; i < 40; i++)
    {
        a[i] = a[i - 1] + a[i - 2] ;
    }

    for(i = 0; i < 40; i++)
    {
        cout << a[i] << "\t" ;
    }

    cout << endl ;

return 0 ;
}