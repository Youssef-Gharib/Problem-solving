#include <iostream>
using namespace std; 

int main(){
    int a , b , c ; 
    char e , d ;

    cin >> a >> e >> b >> d >> c ; 
    
    switch (e)
    {
    case '+':
        if ((a + b)==c){
            cout << "Yes" ;
        }
        else {
            cout << (a + b) << endl;
        }
        break;
    case '-':
        if ((a - b)==c){
            cout << "Yes" ;
        }
        else {
            cout << (a - b) << endl;
        }
        break;
    case '*':
        if ((a * b)==c){
            cout << "Yes" ;
        }
        else {
            cout << (a * b) << endl;
        }
        break;
    
    default:
        break;
    }
}