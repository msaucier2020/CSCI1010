// Madeleine Saucier
// CSCI 1010 Section 001
// Assignment 6 Question 4
// enter 10 grades, find highest, lowest, and mean

#include <iostream>

using namespace std ;

int main()
{
    int n ;
    int m = 0 ;
    int largest, smallest ;

    for (int i = 1; i <= 10; i++)
    {
        cout << "Enter grade " << i << ": " ;
        cin >> n ;
        
        if (i == 1)
        {
            largest = n ;
            smallest = n ;
        }
        else 
        {
            if (n > largest)
            {
                largest = n ;
            }
            else if (n < smallest)
            {
                smallest = n ;
            }
        }
        
        m += n ;
    }

    m /= 10 ;

    cout << "The highest grade is " << largest << "\n" ;
    cout << "The lowest grade is " << smallest << "\n" ;
    cout << "The mean grade is " << m << "\n" ;

return 0 ;
}