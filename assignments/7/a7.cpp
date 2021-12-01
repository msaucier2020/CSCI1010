// Madeleine Saucier
// CSCI 1010 Section 001
// Assignment 7
// partially filled array practice

#include <iostream>
 
using namespace std ;

int main()
{
    // create array
    const int MAX = 100;
    int array[MAX], used = 0 ;
    int i ;

    // enter values & keep track of how many are entered
    cout << "Enter some numbers, ended by -1: " ;

    for(i = 0; i < MAX; i++)
    {
        cin >> array[i] ;
        if (array[i] == -1)
        {
            break;
        }
        else
        {
            used++ ;
        }
    }

    // display all of the numbers
    cout << "The current elements are: \n" ;

    for (int n = 0; n < used; n++)
    {
        cout << array[n] << "\t" ;
    }

    cout << "\n" ;

    // find the largest number
    int largest;
    
    for (int n = 0; n < used; n++)
    {
        if (n == 0)
        {
            largest = array[n] ;
        }
        else if (array[n] > largest)
        {
            largest = array[n] ;
        }
    }

    cout << "The largest number is " << largest << endl;

    // add 10 and 15 to the array and display all of the numbers
    array[i] = 10 ;
    i++ ;
    used++ ;
    array[i] = 15 ;
    i++ ;
    used ++ ;

    cout << "Now the elements are: \n" ;

    for(int n = 0; n < used; n++)
    {
        cout << array[n] << "\t" ;
    }

    cout << endl ;

    // sort in descending order and display the elements
    for (int b = 0; b < used; b++)
    {
        for(int c = 0; c < used - 1; c++)
        {
            if(array[c] < array[c+1])
            {
                int temp = array[c] ;
                array[c] = array[c+1] ;
                array[c+1] = temp ;
            }
        }
    }

    cout << "After sorting, the elements are: \n" ;

    for(int n = 0; n < used; n++)
    {
        cout << array[n] << "\t" ;
    }


    cout << endl ;

return 0 ;
}