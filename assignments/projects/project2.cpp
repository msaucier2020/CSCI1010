// Madeleine Saucier
// CSCI 1010 Section 001
// Project 2
// Student Information Management System

#include <iostream>
#include <string>

using namespace std ;

char opt;
int used = 0;
int id;
string name[100];
int grade[100];

void display_menu();


int main ()
{
    // display menu and allow user to enter option
    while (true)
    {
        display_menu ;

        // follow command from user
        if(opt == '1')
        {

        }

        else if(opt == '2')
        {

        }

        else if(opt == '3')
        {
            
        }

        else if(opt == '4')
        {
            
        }

        else if(opt == '5')
        {
            
        }

        else if(opt == '6')
        {
            break;
        }
    }
return 0 ;
}

void display_menu()
{
    cout << "*** CSCI 1010 Student Information Management System ***\n" ;
    cout << "1. Add Student \n" ;
    cout << "2. Search by ID \n" ;
    cout << "3. Grade Statistics\n" ;
    cout << "4. Remove Student\n" ;
    cout << "5. Print All Students\n" ;
    cout << "6. Exit System\n" ;

    cin >> opt ;   
}