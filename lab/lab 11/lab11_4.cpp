// Madeleine Saucier
// CSCI 1010 Section 001
// Lab 11 Question 4
// print all even perfect squares between 1 and a given number

#include <iostream>

using namespace std ;

int main ()
{
    int n ;
    int square ;

    cout << "Enter an integer: " ;
    cin >> n ;

    for (int i = 1; i * i <= n; i++)
    {
        square = i * i ;

        if (square % 2 == 0)
        {
            cout << square << "\t" ;
        }
    }

    cout << endl ;

return 0 ;
}