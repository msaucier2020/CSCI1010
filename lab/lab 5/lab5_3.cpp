#include <iostream>

using namespace std ;

int main()
{

    int hours ;
    double pay ;
    double ssTax ;
    double fedTax ;
    double stateTax ;
    double income ;

    cout << "Enter the work hours from one week: " ;
    cin >> hours ;

    pay = (40 * 16.78) + ((hours - 40) * (16.78 *1.5)) ;
    cout << "Gross Pay: $" << pay << "\n" ;

    ssTax = pay * 0.06 ;
    cout << "Social Security Tax is: $" << ssTax << "\n" ;

    fedTax = pay * 0.14 ;
    cout << "Federal Income Tax is: $" << fedTax << "\n" ;

    stateTax = pay * 0.05 ;
    cout << "State Income Tax is: $" << stateTax << "\n" ;

    cout << "Union Dues are: $10 \n";

    income = pay - ssTax - fedTax - stateTax - 10 ;

    cout << "Net Income from the week is: $" << income << "\n";

return 0 ; 

}