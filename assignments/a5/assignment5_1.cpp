// Madeleine Saucier
// CSCI 1010 Section 001
// Assignment 5 Question 1
// add together all of the even numbers in a given sequence

#include<iostream>
using namespace std ;
int main(){

    int n ;
    int sum = 0 ;

    cout << "Enter a series of integers ending with 0: " ;

    while (true){

        cin >> n ;

        if (n == 0)
        {

            break ;
        }
        else if(n % 2 == 0){

            sum += n ;
        }  
    }

    cout << "Sum is: " << sum << "\n" ;
    
return 0 ;
}