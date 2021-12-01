#include <iostream>
#include <math.h>

using namespace std ;

int main(){

    int year ;
    int month ;
    int date ;
    int w ;
    int a ;
    int x ;
    int b ;

    cout << "Enter a four digit year: " ;
    cin >> year ;
    cout << "Enter a month, using 1 to 12 to represent Jan to Dec: " ;
    cin >> month ;
    cout << "Enter a date using 1 to 31: " ;
    cin >> date ;

    b = month + 12 * ((14 - month) / 12) - 2 ;
    a = year - (14 - month) / 12 ;
    x = a + a / 4 - a / 100 + a / 400 ;
    w = (date + x + (31 * b) / 12) % 7 ;

    cout << "The day of the week is: " << w << "\n" ;

    return 0 ;
}