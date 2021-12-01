// Madeleine Saucier
// CSCI 1010 Section 001
// Lab 11 Question 2
// count the number of digits that are in a number

#include <iostream>

using namespace std ;

int main()
{
    int n ;
    int d = 0 ;

    cout << "Enter a number: " ;
    cin >> n ;

    do
    {
        n /= 10 ;
        d++ ;
    } while (n != 0);

    cout << "There are " << d << " digits \n" ;

return 0;
}