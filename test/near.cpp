#include <iostream> 
using namespace std;
int main(){
    int n, K;
    int arr[n] , arr2[n];
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> K;
        arr[i] = K;
    }
    for (int j = 0; j < n; j++){
        for (int s = 1; s < n; s++){
            if(arr[j]<arr[s]){
                arr2[j]=arr[s];
            }
        }
        arr2[j] = -1;
    }
    cout << arr[4] << endl;
}