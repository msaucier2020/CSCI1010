// Madeleine Saucier
// CSCI 1010 Section 001
// Lab 9 Question 3
// ask user for 3 integers and find the smallest one

#include<iostream>
using namespace std ;
int main(){

    // create variables and ask user to enter
    int a, b, c ;
    
    cout << "Please enter 3 integers: \n" ;
    cin >> a ;
    cin >> b ;
    cin >> c ;

    // compare values and find the smallest one
    if (a > b){
        if (c > b){
            cout << b << " is the smallest. \n" ;
        }
        else {
            cout << c << " is the smallest. \n" ;
        }
    }
    else{
        if (c > a){
            cout << a << " is the smallest. \n" ;
        }
        else {
            cout << c << " is the smallest. \n" ;
        }
    }

return 0 ;
}