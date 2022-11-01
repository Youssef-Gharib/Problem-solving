#include <iostream>
#include <cmath>
using namespace std; 
int main(){

    long long n ;
    cin >> n ;  
    int x = 1378 ;
    int last_digit1 = (x%10);
    long long result1 = pow(last_digit1,n);
    int result2 = (result1%10);
    cout << result2  <<endl;

}