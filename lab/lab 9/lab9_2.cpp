// Madeleine Saucier
// CSCI 1010 Section 001
// Lab 9 Question 2
// determine who wins a game of rock, paper, scissors

#include<iostream>
using namespace std;
int main(){

    // create variables
    char p1 ;
    char p2 ;

    // allow user to enter their choices
    cout << "Player 1, enter your choice: " ;
    cin >> p1 ;

    cout << "Player 2, enter your choice: " ;
    cin >> p2 ;

    // compare values to find out who wins
    if ((p1 == 'p' || p1 == 'P') && (p2 == 's' || p2 == 'S')){
        cout << "Player 2 wins! \n" ;
    }
    else if ((p1 == 'p' || p1 == 'P') && (p2 == 'r' || p2 == 'R')){
        cout << "Player 1 wins! \n" ;
    }
    else if ((p1 == 'p' || p1 == 'P') && (p2 == 'p' || p2 == 'P')){
        cout << "It is a tie. \n" ;
    }
    else if ((p1 == 'r' || p1 == 'R') && (p2 == 'p' || p2 == 'P')){
        cout << "Player 2 wins! \n" ;
    }
    else if ((p1 == 'r' || p1 == 'R') && (p2 == 'r' || p2 == 'R')){
        cout << "It is a tie. \n" ;
    }
    else if ((p1 == 'r' || p1 == 'R') && (p2 == 's' || p2 == 'S')){
        cout << "Player 1 wins! \n" ;
    }
    else if ((p1 == 's' || p1 == 'S') && (p2 == 'p' || p2 == 'P')){
        cout << "Player 1 wins! \n" ;
    }
    else if ((p1 == 's' || p1 == 'S') && (p2 == 'r' || p2 == 'R')){
        cout << "Player 2 wins! \n" ;
    }
    else if ((p1 == 's' || p1 == 'S') && (p2 == 's' || p2 == 'S')){
        "It is a tie. \n" ;
    }

return 0 ;

}