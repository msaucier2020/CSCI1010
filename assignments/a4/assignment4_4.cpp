// Madeleine Saucier
// CSCI 1010 Section 001
// Assignment 4 Question 4
// Determine whether or not a given year is a leap year

#include<iostream>

using namespace std ;

int main(){

    // create variable, allow user to input year
    int year ;

    cout << "Enter year: " ;
    cin >> year ;

    // determine if year is a leap year and display
    if(year % 4 != 0){

        cout << year << " is a common year. \n" ;
    }
    else if(year % 100 != 0){

        cout << year << " is a leap year. \n" ;
    }
    else if(year % 400 != 0){
        
        cout << year << " is a common year. \n" ;
    }
    else{

        cout << year << " is a leap year. \n" ;
    }

return 0 ;
}