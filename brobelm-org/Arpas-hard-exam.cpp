#include <iostream>
using namespace std; 
int main (){
    long long n ; 
    cin >> n ;

    if (n==0){
        cout<< 1 << endl;
    }

    else{
        int arr[]={8,4,2,6};
        n=(n-1)%4;
        cout << arr[n] << endl;
    }
}