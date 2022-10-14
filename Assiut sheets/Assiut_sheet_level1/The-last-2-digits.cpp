#include <iostream>
using namespace std;  


int main() 
{
    long a, b, c, d; 
    cin >> a>> b >>  c >> d ;
    long mult = (a*b*c*d);
    int  last_digit = mult%100;
    cout << last_digit << endl;
}