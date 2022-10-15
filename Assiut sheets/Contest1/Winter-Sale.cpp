#include <iostream> 
#include <cstdio> 
using namespace std; 
int main (){
    double x , p ;
    cin >> x >> p ; 
    double r = (p/((100/x)-1)); 
    printf("%.2f\n", (r+p));
}