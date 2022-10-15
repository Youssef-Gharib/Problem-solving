#include <iostream>
using namespace std; 

int main (){
    double n , k , a ; 
    cin >> n >> k >> a ;
    double result = (n*k)/a; 
    long long result2 = result;

    if ((result - result2) != 0 ){
        cout << "double" << endl; 
    }

    else if (result<=(2147483647) ){
        cout << "int" << endl;
    }

    else{
        cout << "long long" << endl;
    }
}
