#include <iostream> 
using namespace std; 
int main()
{
    int n , b , d , a , count=0; 
    cin >> n >> b >> d ; 
    int sum=0; 
    while(n--){
        cin >> a ;
        if (a <= b){
            sum+=a; 
        }
        if(sum>d){
            sum-=d; 
            count++; 
        }
    } 
    cout << count << endl;
    

}



