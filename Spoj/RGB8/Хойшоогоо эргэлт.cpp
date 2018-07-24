#include <iostream>
 
using namespace std;
 
int main(){
 
    int n, m, i, j, t;
    cin >> n;
    cin >> m;
 
    int a[n];
    for (i = 0; i < n; i++){
        a[i] = i + 1;
    }
 
    j = 0;
    while (j < m){
        t = a[n - 1];
        i = n - 2;
        while (i >= 0){
            a[i + 1] = a[i];
            i--;
        }
        a[0] = t;
        j++;
    }
 
    for (i = 0; i < n; i++){
        cout << a[i] << ' ';
    }
 
    cout << endl;
 
    return 0;
} 
