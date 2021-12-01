// Madeleine Saucier
//CSCI 1010 Section 001
// Lab 7 Question 1
// Check if a triangle can be formed with the given angles

#include<iostream>

using namespace std ;

int main(){
    
    // Declare variables and ask user to input 3 angles

    int a ;
    int b ;
    int c ;

    cout << "Please enter 3 angles: " ;
    cin >> a ;
    cin >> b ;
    cin >> c ;

    // Determine whether or not it is a triangle

    if(a + b + c == 180){
        cout << "It forms a triangle.\n" ;
    }
    else{
        cout << "It does not form a triangle. \n" ;
    }

return 0 ;
}