#include<iostream>

using namespace std ;

int main(){
 
 int total ;
 int b20 ;
 int b10 ;
 int b5 ;
 int b1 ;

cout << "Enter amount in U.S. dollars: " ;
cin >> total ;

b20 = total / 20 ;
b10 = (total % 20) / 10 ;
b5 = (total % 10) / 5 ;
b1 = (total % 5) ;

cout << "Number of $20 bills: " << b20 << "\n" ;
cout << "Number of $10 bills: " << b10 << "\n" ;
cout << "Number of $5 bills: " << b5 << "\n" ;
cout << "Number of $1 bills: " << b1 << "\n" ;

return 0 ; 

}