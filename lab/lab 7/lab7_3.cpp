// Madeleine Saucier
// CSCI 1010 Section 001
// Lab 7 Question 3
// Find number of chocolate bars needed to maintain weight

#include<iostream>

using namespace std ;

int main(){

    // Declare variables
    char gender ;
    double weight ;
    double height ;
    double age ;
    double calories ;
    double bars ;

    // Ask user for gnder, weight, height, age
    cout << "Enter M for male and F for female: " ;
    cin >> gender ;
    
    cout << "Enter weight in pounds, height in inches, and age in years: " ;
    cin >> weight ;
    cin >> height ;
    cin >> age ;

    // Find calories using BMR formula
    if(gender == 'F'){
        calories = 655 + (4.3 * weight) + (4.7 * height) - (4.7 * age) ;
    }
    else if(gender == 'M'){
        calories = 66 + (6.3 * weight) + (12.9 * height) - (6.8 * age) ;
    }

    // Find chocolate bars
    bars = calories / 230 ;

    // Display result
    cout << "You can eat " << bars << " chocolate bars. \n" ;

return 0 ;
}