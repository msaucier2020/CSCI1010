// Madeleine Saucier
// CSCI 1010 Section 001
// Assignment 8 Question 2
// calculate GPA

#include <iostream>

using namespace std ;

double compute_GPA (char grades[], int size)
{
    double GPA = 0 ;

    for(int i = 0; i < size; i++)
    {
        switch(grades[i])
        {
            case 'A':
                GPA += 4 ;
                break ;

            case 'B':
                GPA += 3 ;
                break ;
            
            case 'C':
                GPA += 2 ;
                break ;

            case 'D':
                GPA += 1 ;
                break ;
            
            case 'F':
                GPA += 0 ;
                break ;
        }   
    }

    GPA = GPA / size ;

return GPA ;
}


int main ()
{
    char studentA[8] = {'A', 'A', 'B', 'A', 'D', 'C', 'A', 'A'} ;
    cout << "Student A's GPA: " << compute_GPA(studentA, 8) << endl ;

    char studentB[12] = {'B', 'B', 'D', 'F', 'A', 'A', 'B', 'A', 'A', 'D', 'A', 'B'} ;
    cout << "Student B's GPA: " << compute_GPA(studentB, 12) << endl ;
    
return 0;
}