#include <iostream>
 
using namespace std;
 
int main(){
 
    int n, m;
    cin >> n;
    cin >> m;
 
    if (n == 1 && m == 1){
        cout << 1 << endl;
    } else {
    int a[n][m];
    for (int i = 0; i < n; i++){
        a[i][0]= 1;
    }
    for (int i = 0; i < m; i++){
        a[0][i] = 1;
    }
 
    for (int i = 1; i < n; i++){
        for (int j = 1; j < m; j++){
            a[i][j] = a[i][j - 1] + a[i - 1][j]; 
        }
    }
 
    cout << a[n - 1][m - 1] << endl;
    }
 
    return 0;
} 
