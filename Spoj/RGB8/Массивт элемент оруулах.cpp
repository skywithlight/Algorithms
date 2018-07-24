#include <iostream>
 
using namespace std;
 
int main(){
 
    int n, i, j, t;
    cin >> n;
 
    int a[n + 1];
    for (i = 1; i < n + 1; i++)
    cin >> a[i];
 
    int B, C, k;
    cin >> B;
    cin >> C;
 
    for (k = n; k >= B; k--){
            a[k + 1] = a[k];
    }
    a[B] = C;
 
    for (j = 1; j <= n + 1; j++){
        cout << a[j] << ' ';
    }
 
    cout << endl;
 
    return 0;
} 
