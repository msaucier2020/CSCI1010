// Madeleine Saucier
// CSCI 1010 Section 001
// Lab 10 Question 2
// find greatest common denominator

#include<iostream>
using namespace std ;
int main()
{
    int n ;
    int m ;
    int r ;

    cout << "Enter two integers: " ;
    cin >> n >> m ;

    while (n != 0)
    {
        r = m % n ;
        m = n ;
        n = r ;
    }

    cout << "GCD is: " << m << "\n" ;

return 0 ;
}