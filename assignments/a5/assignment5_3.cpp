// Madeleine Saucier
// CSCI 1010 Section 001
// Assignment 5 Question 3
// calculate for pi

#include<iostream>

using namespace std ;

int main(){

    double num = 1 ;
    double denom = 1 ;
    double sum = 0 ;
    double pi ;

    while (true){

        if (denom <= 99)
        {
            sum = sum + (num / denom) ;
            denom += 2 ;
            num = num * (-1) ;
        }
        else {
            break ;
        }
        
    }

    pi = 4 * sum ;

    cout << "Pi is: " << pi << endl ;

return 0 ;
}