#include <iostream>
 
using namespace std;
 
int main(){
 
    long long n, m, A;
    cin >> n >> m;
 
    long long a[n + 1][m + 1];
 
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            cin >> A;
            a[i][j] = A; 
        }
    }
 
    long long k, s = 0, b, c;
    cin >> k;
 
    for (int i = 0; i < k; i++){
        cin >> b;
        cin >> c;
        s = s + a[b][c];
        a[b][c] = 0;
    }
 
    cout << s << endl;
 
    return 0;
} 
