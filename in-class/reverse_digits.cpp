#include <iostream>

using namespace std;

int main()
{
    int first;
    int reverse1;
    int reverse2;

    cout << "Please enter a two digit number: ";
    cin >> first;

    reverse1 = first % 10;
    reverse2 = first / 10;

    cout << "The reversed number is " << reverse1 << reverse2 << "\n";

    return 0;

}