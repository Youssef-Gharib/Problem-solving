#include <iostream>
using namespace std; 
int main(){
    int i ; 
    cin >> i;
    int first_num = i%10 ; 
    int second_num = int(i/10) ;
    cout <<( first_num % second_num == 0 || second_num % first_num == 0 ? "YES" : "NO");
}