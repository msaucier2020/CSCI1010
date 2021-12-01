// Madeleine Saucier   
// CSCI 1010 Section 001
// Assignment 5 Question 2
// show Hailstone sequence for a given integer

#include<iostream>
using namespace std ;
int main(){

    int n ;

    cout << "Enter a positive integer: " ;
    cin >> n ;
    cout << "Hailstone sequence: " << n ;

    while(n != 1){

        if(n % 2 == 0)
        {
            n = n/2 ;
            cout << ", " << n ;
        }
        else if(n % 2 != 0)
        {
            n = (3 * n) + 1 ;
            cout << ", " << n ;
        }

    }

    cout << endl ;

return 0 ;
}