// Madeleine Saucier
// CSCI 1010 Section 001
// Assignment 4 Question 3
// Tell user how much tax is due on their taxable income

#include<iostream>

using namespace std ;

int main(){

    // create variables, let user input taxable income
    double income ;
    double tax ;

    cout << "Enter income: " ;
    cin >> income ;

    // determine how much tax is due

    if (income > 5250){

        tax = 142.5 + ((income - 5250) * 0.05) ;
    }
    else if (income >= 3750){

        tax = 82.5 + ((income - 3750) * 0.04) ;
    }
    else if (income >= 2250){

        tax = 37.5 + ((income - 2250) * 0.03) ;
    }
    else if (income >= 750){

        tax = 7.5 + ((income - 750) * 0.02) ;
    }
    else if (income < 750){

        tax = income * 0.01 ;
    }

    // display tax due
    cout << "Amount of tax due: " << tax << "\n" ;

return 0 ;

}