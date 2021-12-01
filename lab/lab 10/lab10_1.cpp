// Madeleine Saucier
// CSCI 1010 Section 001
// Lab 10 Question 1
// calculator for square and square root

#include <iostream>
#include <math.h>

using namespace std ;

int main()
{

    int n ;
    char opt ;
    int a ;

    while (true){

        cout << "***Welcome to Scientific Calculator*** \n" ;
        cout << "1. Square \n" ;
        cout << "2. Square root \n" ;
        cout << "3. Exit \n" ;

        cout << "Enter operator: " ;
        cin >> opt ;

        if (opt == '1')
        {
            cout << "Enter a number: " ;
            cin >> n ;
            a = pow(n, 2) ;
            cout << n << " squared is " << a << endl ;
        }
        else if (opt == '2')
        {
            cout << "Enter a number: " ;
            cin >> n ;
            a = sqrt(n) ;
            cout << "Square root of " << n << " is " << a << endl ;
        }
        else if (opt == '3')
        {
            cout << "**Calculator closed. Thank you!** \n" ;
            break;
        }
    }

return 0 ;
}