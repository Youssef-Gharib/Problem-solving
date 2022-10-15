#include <iostream>
using namespace std;
 
int main()
{
    int a, b, c;
    cin>> a>> b>> c;
 
    if (a>=b&& a>=c){
        if(b>=c){
            cout<<c<< "\n" << b << "\n" << a <<endl;
        }
        else{
            cout<<b<< "\n" << c << "\n" << a <<endl;
        }
    }
 
    else if (b>=a&& b>=c){
        if(a>=c){
            cout<<c<< "\n" << a << "\n" << b <<endl;
        }
        else{
            cout<<a<< "\n" << c << "\n" << b <<endl;
        }
    }
 
    else {
        if(b>=a){
           cout<< a << "\n" << b << "\n" << c <<endl;
        }
        else{
            cout<< b << "\n" << a << "\n" << c <<endl;
        }
    }
    cout<<endl;
    cout<< a << "\n" << b << "\n" << c <<endl;
 
return 0;
 
}