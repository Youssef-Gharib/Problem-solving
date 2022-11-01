#include <iostream>
#include <cmath>
using namespace std; 
int main (){

    int n , m , q ; 
    cin >> n >> m >> q ; 
    char dotArr[n][m]; 
    for (int i = 0 ; i < n ; i++) {
        for(int  k = 0 ; k < m ; k++){
            dotArr[i][k]= '.' ; 
        }
    }

    while(q--){
        int r1 , c1 , r2 , c2 ; 
        char c ; 
        cin >> r1 >> c1 >> r2 >> c2 >> c ; 

        for(int i = min(r1,r2)-1 ; i <= max(r2,r1)-1 ; i++){
            for(int j = min(c1,c2)-1 ; j <= max(c2,c1)-1 ; j++){ 
                dotArr[i][j]= c ; 
            }
        }
    }   

    for(int i = 0; i < n; i++){
        for(int k = 0 ; k < m ; k++){
            cout << dotArr[i][k] ;
        }
        cout<< endl;
    }      

}