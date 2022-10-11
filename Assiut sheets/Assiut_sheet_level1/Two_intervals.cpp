#include <iostream> 
using namespace std; 

int main (){
    int a , b , c , d; 
    cin >> a >> b >> c >> d; 

    if (a >= c && d >=b){
        cout <<a ;
        cout << " ";
        cout << b << endl;
    }
    else if (a <= c && d <= b){
        cout << c ;
        cout << " " ;
        cout << d << endl;
    }
    else if (a < c && b < d && b >= c){
        cout <<c ;
        cout <<" " ;
        cout <<b ;

    }
    else if (c < a && d < b && d >= a){
        cout <<a ;
        cout <<" " ;
        cout <<d ;
    }
    else{
        cout << "-1"<< endl;
    }
    
}