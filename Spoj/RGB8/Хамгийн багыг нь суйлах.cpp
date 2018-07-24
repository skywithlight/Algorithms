#include <iostream>
 
using namespace std;
 
int main(){
 
    int n, i, k, t, min;
    cin >> n;
 
    int a[n];
    for (i = 0; i < n; i++){
        cin >> a[i];
    }
 
    min = a[0];
    for (i = 1; i < n; i++){
        if (min > a[i]){
            min = a[i];
            t = i;
        }
    }
 
    if (i != 0){
    k = a[t];
    a[t] = a[0];
    a[0] = k; 
    }
 
    for (i = 0; i < n; i++){
        cout << a[i] << ' ';
    }
 
    cout << endl;
 
    return 0;
} 
