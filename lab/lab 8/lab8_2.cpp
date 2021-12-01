// Madeleine Saucier
// CSCI 1010 Section 001
// Lab 8 Question 2
// Convert a two digit number into word form

#include<iostream>
#include<string>

using namespace std ;

int main(){

    // Create variables
    int number ;
    int digit1 ;
    int digit2 ;
    string word1 ;

    // ask for number
    cout << "Enter a two-digit number that is greater than or equal to 20 " ;
    cin >> number ;

    // break number into 2 digits
    digit2 = number % 10 ;
    digit1= number / 10 ;

    // convert number to words
    switch(digit1){

        case 2 :
        word1 = "twenty" ;
        break;

        case 3 :
        word1 = "thirty" ;
        break;

        case 4 :
        word1 = "fourty" ;
        break;

        case 5 :
        word1 = "fifty" ;
        break;

        case 6 :
        word1 = "sixty" ;
        break;

        case 7 :
        word1 = "seventy" ;
        break;

        case 8 :
        word1 = "eighty" ;
        break;

        case 9 :
        word1 = "ninety" ;
        break;

    }

    switch(digit2){

        case 0 :
        cout << word1 << "\n" ;
        break;

        case 1 : 
        cout << word1 << "-one \n" ;
        break;

        case 2 : 
        cout << word1 << "-two \n" ;
        break;

        case 3 : 
        cout << word1 << "-three \n" ;
        break;

        case 4 : 
        cout << word1 << "-four \n" ;
        break;

        case 5 : 
        cout << word1 << "-five \n" ;
        break;

        case 6 : 
        cout << word1 << "-six \n" ;
        break;

        case 7 : 
        cout << word1 << "-seven \n" ;
        break;

        case 8 : 
        cout << word1 << "-eight \n" ;
        break;

        case 9 : 
        cout << word1 << "-nine \n" ;
        break;

    }

return 0 ;
}
