// Madeleine Saucier
// CSCI 1010 Section 001
// Lab 12 Question 3
// enter 10 numbers, find mean, find how many are greater/smaller than the mean

#include <iostream>

using namespace std ;

int main ()
{
    int a[10];
    int mean = 0 ;
    int greater = 0 ;
    int smaller = 0 ;
    int i ;
    
    cout << "Enter 10 numbers: " ;

    for(i = 0; i < 10; i++)
    {
        cin >> a[i] ;
        mean += a[i] ;
    }

    mean /= 10 ;
    
    for(i = 0; i < 10; i++)
    {
        if (a[i] > mean)
        {
            greater++ ;
        }
        else if (a[i] < mean)
        {
            smaller++ ;
        }
    }

    cout << "The mean is " << mean << endl ;
    cout << "There are " << greater << " numbers greater than the mean. \n" ;
    cout << "There are " << smaller << " numbers less than the mean.\n" ;

return 0 ;
}