// 1 + 1/2 + 1/3 + ... + 1/n

#include<iostream>
using namespace std ;
int main(){

    int sum = 0;
    int i ;
    int n ;
    
    cin >> n ;

    for (i = 1 ; i <= n ; i++){

        sum += 1/i ;
    }

    cout << sum << endl ;


return 0 ;
}