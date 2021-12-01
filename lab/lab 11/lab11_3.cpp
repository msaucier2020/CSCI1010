// Madeleine Saucier
// CSCI 1010 Section 001
// Lab 11 Question 3
// Convert from binary to decimal

#include <iostream>
#include <math.h>

using namespace std ;

int main ()
{
    int binary ;
    int a, i = 0, decimal = 0;

    cout << "Enter a number in binary: " ;
    cin >> binary ;

    do
    {
        a = binary % 10 ;
        decimal += a * pow(2, i) ;
        binary /= 10 ;
        i++ ;
    } while (binary > 0);

    cout << "The decimal value is: " << decimal << "\n" ;

return 0 ;    
}