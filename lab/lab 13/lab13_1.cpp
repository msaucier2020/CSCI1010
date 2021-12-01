// Madeleine Saucier
// CSCI 1010 Section 001
// Lab 13 Question 1
// reverse the elements in the array

#include <iostream>

using namespace std ;

int main ()
{
    int a[10] = {10, 15, 20, 25, 30, 35, 40, 45, 50, 55} ;
    int x = 0 ;
    int y = 9 ;

    while (x < y)
    {
        int temp = a[x] ;
        a[x] = a[y] ;
        a[y] = temp ;

        x++ ;
        y-- ;
    }


    cout << "The reversed elements are: \n" ;

    for(int i = 0; i < 10; i++)
    {
        cout << a[i] << "\t" ;
    }

    cout << endl ;

return 0;
}