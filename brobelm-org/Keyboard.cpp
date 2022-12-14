#include <iostream>
#include <string>
using namespace std; 
int main (){
    char c;
    string s;  
    cin >> c >> s;

    string st = "qwertyuiopasdfghjkl;zxcvbnm,./" ;
    string st2;
    if(c=='R'){
        for(int i=0; i<s.length();i++){
            st2 += st[st.find(s[i])-1];
            cout << st2[i] ;
        }
    }
    else{
        for(int i=0; i<s.length();i++){
            st2 += st[st.find(s[i])+1];
            cout << st2[i] ;
        }
    }
    
    
    
        
        




} 