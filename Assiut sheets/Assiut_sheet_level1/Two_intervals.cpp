#include <iostream> 
#include <string>
using namespace std; 

int main (){
    int a , b , c , d; 
    cin >> a >> b >> c >> d; 

    if (a >= c && d >=b){
        cout << a << " " << b;
    }
    else if (a <= c && d <= b){
        cout << c << " " << d;
    }
    else if (a<c && b<d && b>=c){
        cout <<c << " " << b ;
    }
    else if (c<a && d<b && d>=a){
        cout <<a << " " << d ;
    }
    else{
        cout << "-1"<< endl;
    }
    return 0; 
}
