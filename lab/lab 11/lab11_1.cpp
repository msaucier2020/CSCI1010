// Madeleine Saucier
// CSCI 1010 Section 001
// Lab 11 Question 1
// enter 10 numbers and find the smallest one

#include <iostream>

using namespace std;

int main()
{
    int a[10] ;
    int smallest ;

    cout << "Enter 10 numbers: " ;

    for (int i = 0; i < 10; i++)
    {
        cin >> a[i] ;

        if (i == 0)
        {
            smallest = a[i] ;
        }
        else
        {  
            if (a[i] < smallest) 
            {
                smallest = a[i] ;
            }
        }
    }

    cout << "The smallest number is " << smallest << "\n" ;

return 0;
}