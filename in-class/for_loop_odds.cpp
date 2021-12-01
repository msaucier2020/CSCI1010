// 1 + 3 + 5 + ... + n

#include<iostream>
using namespace std ;
int main(){

    int sum = 0 ;
    int n ;
    int i ;

    cin >> n ;
    
    for( i = 1 ; i <= n ; i += 2){

        sum += i ;
    }
    cout << sum << endl ;

return 0 ;
}