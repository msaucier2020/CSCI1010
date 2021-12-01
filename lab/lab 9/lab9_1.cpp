// Madeleine Saucier
// CSCI 1010 Section 001
// Lab 9 Question 1
// let user enter weight in ounces and find number of each weight needed to equal the total

#include<iostream>

using namespace std ;

int main(){
   
    // variable for total weight
    int w ;

    // variables for each of the weights
    int oz16 ;
    int oz8 ;
    int oz4 ;
    int oz2 ;
    int oz1 ;

    // ask user to enter total weight
    cout << "Enter weight (in ounces): " ;
    cin >> w ;

    // calculate how many of each weight is needed
    oz16 = w / 16;
    w = w - (16 * oz16) ;

    oz8 = w / 8  ;
    w = w - (8 * oz8) ;

    oz4 = w / 4 ;
    w = w - (4 * oz4) ;

    oz2 =  w / 2 ;
    w = w - (2 * oz2) ;

    oz1 = w ;

    // display results
    cout << "You need: \n" ;
    cout << "\t" << oz16 << " 16-ounce weights \n" ;
    cout << "\t" << oz8 << " 8-ounce weights \n" ;
    cout << "\t" << oz4 << " 4-ounce weights \n" ;
    cout << "\t" << oz2 << " 2-ounce weights \n" ;
    cout << "\t" << oz1 << " 1-ounce weights \n" ;

return 0 ;
}