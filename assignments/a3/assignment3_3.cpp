#include <iostream>

using namespace std ;
 
 int main() {
     
    double bill ;
    double tip ;
    double people ;
    double final ;

    cout << "Total before tip: " ;
    cin >> bill ;

    cout << "Number of people: " ;
    cin >> people ;

    cout << "Tip percent: " ;
    cin >> tip ;

    tip = (tip * 0.01) + 1 ;
    final = (bill * tip) / people ;

    cout << "Final price per person: $" << final << "\n" ;

return 0 ;

 }