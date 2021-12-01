// Madeleine Saucier
// CSCI 1010 Section 001
// Assignment 4 Question 1
// Determine whether or not a letter is a vowel

#include<iostream>

using namespace std ;

int main(){
    
    // create variable and allow user to input
    char letter ;

    cout << "Please enter a lowercase letter: " ;
    cin >> letter ;

    // determine if letter is a vowel or consonant and display result
    switch(letter){
        
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'y':
            cout << letter << " is a vowel \n" ;
            break;

        default :
            cout << letter << " is a consonant \n" ;
            break;
    }

return 0 ;
}