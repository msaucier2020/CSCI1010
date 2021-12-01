#include <iostream>

using namespace std;

int main()
{
    int dimes;
    int nickels;
    int quarters;
    int total;

    cout << "Number of quarters: ";
    cin >> quarters;

    cout << "Number of dimes: ";
    cin >> dimes;

    cout << "Number of nickels: ";
    cin >> nickels;

    total = (quarters * 25) + (dimes * 10) + (nickels * 5);

    cout << "There are " << total << " cents in total.\n";
    
    return 0;

}