// Madeleine Saucier
// CSCI 1010 Section 001
// Assignment 8 Question 2
// evaluate polynomial for given x value

#include <iostream>
#include <math.h>

using namespace std ;

int polynomial (int x)
{
    int value ;
    value = (3 * pow(x, 5)) + (2 * pow(x, 4)) - (5 * pow(x, 3)) - (pow(x, 2)) + (7 * x) - 6 ;

    return value ;
}

int main ()
{
    int x ;
    cout << "Enter a value for x: " ;
    cin >> x ;
    cout << "The value of the polynomial is " << polynomial(x) << "\n" ;


return 0 ;
}