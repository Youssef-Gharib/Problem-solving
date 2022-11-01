#include <iostream> 
#include <string>
using namespace std; 
int main(){

    int n ; 
    string s; 
    cin >> n ;
    string arr[n];
    string arr2[n];
    for(int i=0; i<n; i++){
        cin >> s ;
        arr[i] = s ;
        arr2[i] = "OK" ;
    }
    for(int j=0; j<n; j++){
        for(int k=j+1; k<n; k++){
            if (arr[j] == arr[k] ){
                arr[k]+="1" ;
                arr2[k] = arr[k] ;
            }  
            
        }
        
       
        cout << arr2[j]<< endl  ;
    }

    
return 0    ;
}