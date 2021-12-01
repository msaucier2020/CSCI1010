// Madeleine Saucier
// CSCI 1010 Section 001
// Lab 7 Question 2
// Show how many digits a certain number has

#include<iostream>

using namespace std ;

int main(){

    // Declare variable and ask user to enter value
    int number ;

    cout << "Enter a number with no more that 4 digits: " ;
    cin >> number ;

    // Determine how many digits the number has
    if(number >= 1000 && number <= 9999){
        cout << "Number has 4 digits. \n" ;
    }
    else if(number >= 100){
        cout << "Number has 3 digits. \n" ;
    }
    else if(number >= 10){
        cout << "Number has 2 digits. \n" ;
    }
    else if(number >= 0){
        cout << "Number has 1 digit. \n" ;
    }
    else{
        cout << "Error. Number is too large. \n" ;
    }

return 0;
}