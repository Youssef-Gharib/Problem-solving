#include <iostream>
using namespace std; 
int main (){
    int count = 0;
    cin >> count;
    int m ; 
    int even=0, pos=0, neg=0; 
    for(int i = 0; i < count;i++){
        cin >> m ; 
        if(m%2==0){even++;}
        

        if(m>0){pos++;}
        else if(m<0){neg++;}
    }
    
    cout << "Even:" << even <<endl;
    cout << "Odd:" << (count-even) <<endl;
    cout << "Positive:" << pos <<endl;
    cout << "Negative:" << neg <<endl;

}   