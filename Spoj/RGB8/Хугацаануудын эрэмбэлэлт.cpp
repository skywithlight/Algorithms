#include <iostream>
 
using namespace std;
 
int main(){
 
    int n, i, j, t, A, b, c;
    cin >> n;
 
    int a[n];
 
    for (i = 0; i < n; i++){
    cin >> A >> b >> c;
    a[i] = (A * 3600) + (b * 60) + c;        
    }
 
    for (i = 0; i < n; i++){
        j = 0;
        for (j = 0; j < n - 1; j++){
            if (a[j] > a[j + 1]){
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
 
    for (i = 0; i < n; i++){
        cout << a[i] / 3600 << ' ' << (a[i] % 3600) / 60 << ' ' << (a[i] % 60);
        cout << ' ';
    }
 
    cout << endl;
 
    return 0;
} 
