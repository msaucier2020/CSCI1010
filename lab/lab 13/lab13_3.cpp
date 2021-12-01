// Madeleine Saucier
// CSCI 1010 Section 001
// Lab 13 Question 3
// find the single element in a given array

#include <iostream>

using namespace std ;

int main ()
{
    int n ;
    int i ;
    int flag ;
    int single ;

    cout << "Enter the length of the array: " ;
    cin >> n ;
    int a[n] ;

    cout << "Enter the elements of the array: " ;
    for(i = 0; i < n; i++)
    {
        cin >> a[i] ;
    }


   for(i = 0; i < n; i++)
    {
        flag = 0 ;

       for(int j = 0; j < n; j++)
       {
           if(a[i] == a[j])
           {
               flag++ ;
           }
        }
        if(flag == 1)
        {
            single = a[i] ;
            break ;
        }
    }

    cout << "The single number is: " << single << endl ;

return 0 ;
}