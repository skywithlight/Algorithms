#include <iostream>
 
using namespace std;
 
int main(){
 
    int n, k, i, t, j;
    cin >> n;
    cin >> k;
 
    int a[n], b, c;
    i = 1;
    while(i <= n){
        a[i] = i;
        i++;
    }
 
    j = 1;
    while (j <= k){
         cin >> b >> c;
         t = a[b];
         a[b] = a[c];
         a[c] = t;
         j++;
    }
 
    i = 1;
    while (i <= n){
        cout << a[i] << ' ';
        i++;
    }
 
    cout << endl;
 
    return 0;
} 
