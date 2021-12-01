// Madeleine Saucier
// CSCI 1010 Section 001
// Assignment 4 Question 2
// Determine relationship between two integers

#include<iostream>

using namespace std ;

int main(){

    // create variables and let user input values
    int a ;
    int b ;

    cout << "Please enter two integers: " ;
    cin >> a >> b ;

    // compare values and display relationship
    if (a > b){
        cout << a << " is larger than " << b << "\n" ;
    }
    else if (a < b){
        cout << a << " is smaller than " << b << "\n" ;
    }
    else if (a == b){
        cout << a << " is equal to " << b << "\n" ;
    }
    else{
        cout << "Error. Try again. \n" ;
    }

return 0 ;

}