#include <iostream>
 
using namespace std;
 
int main(){
 
    int n, m, x, y;
    cin >> n;
    cin >> m;
 
    int a[n];
 
    for (int i = 1; i <= n; i++){
        a[i] = 0;
    }
 
    for (int i = 0; i < m; i++){
        cin >> x;
        cin >> y;
        a[x]++;
        a[y]++;
    }
 
    for (int i = 1; i <= n; i++){
        cout << a[i] << ' ';
    }
 
    cout << endl;
 
    return 0;
} 
