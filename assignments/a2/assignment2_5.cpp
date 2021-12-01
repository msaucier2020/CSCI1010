#include <iostream>

using namespace std;

int main()
{
    double miles;
    double km;

    cout << "Please enter number of miles: ";
    cin >> miles;

    km = miles * 1.6 ;

    cout << "The equivalent distance in kilometers is: " << km << "\n";

return 0 ;

}