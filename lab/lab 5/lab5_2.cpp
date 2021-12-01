#include <iostream>

using namespace std;

int main(){

    int cheeseburger ;
    int coffee ;
    double price ;
    double total ;

    cout << "How many cheesebugers: " ;
    cin >> cheeseburger ;

    cout << "How many coffees: " ;
    cin >> coffee ;

    price = (cheeseburger * 5.89) + (coffee * 3.99) ;
    total = (price * .07) + price ;

    cout << "The total for the customer is: $" << total << "\n";

    return 0;
}