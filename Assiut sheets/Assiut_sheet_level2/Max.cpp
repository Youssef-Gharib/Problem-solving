#include <iostream> 
using namespace std; 
int main () {
    int n ,max=0; 
    cin >> n; 
    for(int i=0; i<n; i++) {
        int k ; 
        cin >> k; 
        if(max <k){
            max =k; 
        }
    }
    cout << max << endl;
}