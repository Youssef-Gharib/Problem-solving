#include <iostream>
using namespace std;  


int main() 
{
    long long a, b, c, d; 
    cin >> a>> b >>  c >> d ;
    int  mult = ((a%100)*(b%100)*(c%100)*(d%100))%100;
    int  last_digit = mult%100;

    if(last_digit==0){
        cout << "00"<< endl;
    }
    else if (last_digit<10){
        cout << "0" << last_digit << endl;
    }
    else{
        cout << last_digit << endl;
    }
}
