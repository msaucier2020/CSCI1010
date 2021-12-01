// Madeleine Saucier
// CSCI 1010 Section 001
// Assignment 6 Question 2
// enter 10 numbers, count how many are > 60

#include <iostream>

using namespace std ;
int main()
{
    int a = 0 ;
    int n ;
    
    for (int i = 1 ; i <= 10 ; i++)
    {
        cout << "Enter an integer: " ;
        cin >> n ;
        
        if (n > 60)
        {
            a++ ;
        }
    }

    cout << "There are " << a << " numbers that are greater than 60 \n" ;

return 0 ;
}