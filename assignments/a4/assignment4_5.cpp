// Madeleine Saucier
// CSCI 1010 Section 001
// Assignment 4 Question 5
// Display a word to correspond with a specific letter grade

#include<iostream>
using namespace std ;
int main(){

    // create variable and allow user to input
    char grade ;

    cout << "Enter a letter grade: " ;
    cin >> grade ;

    // find the word that corresponds with the grade

    switch(grade){

        case 'A' :
            cout << "Excellent \n" ;
            break ;
        
        case 'B' :
            cout << "Good \n" ;
            break ;
        
        case 'C' :
            cout << "Average \n" ;
            break ;

        case 'D':
            cout << "Poor \n" ;
            break ;
        
        case 'F' :
            cout << "Failing \n" ;
            break ;
    }

return 0 ;
}