#include <iostream>
using namespace std;

int main(){
    float x ;
    cin>> x;

    if (x-int(x)==0){
        cout<<"int "<< int(x) <<endl;
    }
    else {
        cout<<  "float "<<int(x)<<" "<< (x-int(x)) <<endl ;
    }

    return 0;
}