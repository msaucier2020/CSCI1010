// Madeleine Saucier
// CSCI 1010 Section 001
// Lab 12 Question 1
// enter 10 values in an array, print them in reverse

#include <iostream>

using namespace std ;

int main ()
{
    int a[10] ;
    int i ;

    cout << "Enter 10 numbers: " ;

    for(i = 0; i < 10; i++)
    {
        cin >> a[i] ;
    }

    cout << "The reversed numbers: " ;

    for(i = 9; i >= 0; i--)
    {
        cout << a[i] << " " ; 
    }

    cout << "\n" ;

return 0 ;
}