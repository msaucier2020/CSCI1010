// Madeleine Saucier
// CSCI 1010 Section 001
// Lab 13 Question 2
// int array size 100, enter 8, put 18 as the first element, sort in descending order

#include <iostream>

using namespace std ;

int main ()
{
    // declare int array size of 100, allow user to enter 8 numbers
    int a[100] ;
    int used = 0 ;
    int i ;

    cout << "Please enter 8 numbers for the array: \n" ;

    for(i = 0; i < 8; i++)
    {
        cin >> a[i] ;
        used++ ;
    }

    // display the array
    cout << "The current elements are: \n" ;
    for(i = 0; i < used; i++)
    {
        cout << a[i] << "\t" ;
    }

    cout << endl ;

    // insert 18 as first element, display array
    for(i = used; i >= 0; i--)
    {
        a[i + 1] = a[i] ;
    }

    a[0] = 18 ;
    used++ ;

    cout << "The new elements are: \n" ;

    for(i = 0; i < used; i++)
    {
        cout << a[i] << "\t" ;
    }

    cout << endl ;

    // sort in descending order
     for (int b = 0; b < used; b++)
    {
        for(int c = 0; c < used - 1; c++)
        {
            if(a[c] < a[c+1])
            {
                int temp = a[c] ;
                a[c] = a[c+1] ;
                a[c+1] = temp ;
            }
        }
    }

    cout << "After sorting, the elements are: \n" ;

    for(i = 0; i < used; i++)
    {
        cout << a[i] << "\t" ;
    }

    cout << endl ;

return 0 ;
}