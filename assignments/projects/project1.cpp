// Madeleine Saucier
// CSCI 1010 Section 001
// Project 1
// Self-Checkout System

#include<iostream>

using namespace std ;

int main()
{
    while (true)
    {
        char id ;
        double sum = 0 ;
        double q ;

        cout << "***Welcome to Self-Checkout*** \n" ;
        cout << "Menu: \n" ;
        cout << "A. Bagel $1.99 \n" ;
        cout << "B. Iced Coffee $3.99 \n" ; 
        cout << "C. Fruit Cup $2.99 \n" ;
        cout << "X. Checkout \n" ;

        while (true)
        {
            cout << "Enter ID: " ;
            cin >> id ;

            if (id == 'A')
            {
                cout << "Enter quantity: " ;
                cin >> q ;
                sum += (q * 1.99) ;
            }
            else if (id == 'B')
            {
                cout << "Enter quantity: " ;
                cin >> q ;
                sum += (q * 3.99) ;
            }
            else if (id == 'C')
            {
                cout << "Enter quantity: " ;
                cin >> q ;
                sum += (q * 2.99) ;
            }
            else if (id == 'X')
            {
                break ;
            }
        }

        cout << "Total is: $" << sum << endl ;

    }
return 0 ;
}