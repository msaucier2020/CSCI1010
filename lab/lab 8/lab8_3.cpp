// Madeleine Saucier
// CSCI 1010 Section 001
// Lab 8 Question 2
// Convert a two digit number into word form

#include<iostream>
using namespace std ;

int main(){
    
    // create variables
    int a ;
    int b ;
    int c ;
    int d ;
    int small1 ;
    int small2 ;
    int large1 ;
    int large2 ;
    int smallest ;
    int largest ;

    // ask user for the 4 integers
    cout << "Please enter four integers: \n" ;
    cin >> a ;
    cin >> b ;
    cin >> c ; 
    cin >> d ;

    // compare a and b
    if(a > b){
        large1 = a ;
        small1 = b ;
    }
    else {
        large1 = b ;
        small1 = a ;
    }

    //compare c and d
    if(c>d){
        large2 = c ;
        small2 = d ;
    }
    else{
        large2 = d ;
        small2 = c ;
    }

    // compare the large and small values
    if(large1 > large2){
        largest = large1 ;
    }
    else{
        largest = large2 ;
    }

    if(small1 < small2){
        smallest = small1 ;
    }
    else{
        smallest = small2 ;
    }

    // display largest and smallest
    cout << "The largest number is " << largest << "\n" ;
    cout << "The smallest number is " << smallest << "\n" ;

return 0 ;
}