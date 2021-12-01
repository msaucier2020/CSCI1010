//Madeleine Saucier
//CSCI 1010 Section 001
//Lab 8 Question 1
//Calculating for interest on a credit card and finding minimum amount due


#include<iostream>
using namespace std;

int main() {

    // Create variables
    double balance ;
    double interest ;
    double total ;
    double minimum ;

    // Get value for balance
    cout << "Please enter account balance: $" ;
    cin >> balance ;

    // Calulate for interest
    if(balance <= 1000){
       
        interest = balance * 0.015 ;
    }
    else{

        interest = (1000 * 0.015) + ((balance - 1000) * 0.01) ;
    }

    // Calculate for total
    total = balance + interest ;

    // Calulate for minimum
    if(total <= 10){

        minimum = total ;
    }
    else{

        minimum = total * 0.1 ;
    }

    if(minimum < 10){

        minimum = 10 ;
    }

    // Display each amount
    cout << "The interest due is: $" << interest << "\n" ;
    cout << "The total amount due is: $" << total << "\n" ;
    cout << "The minimum payment due is: $" << minimum << "\n" ;

return 0 ;

}