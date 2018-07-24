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
 
    int x, i, j, s = 0;
    cin >> x;
 
    s = s + a[1][1];
    a[1][1] = 0;
 
    j = 1;
    i = 1;
    for (int k = 0; k < x - 1; k++){
        cin >> A;
        if (A == 1){
            s = s + a[i][j + 1];
            a[i][j + 1] = 0;
            j = j + 1;
        }
        if (A == 2){
            s = s + a[i - 1][j];
            a[i - 1][j] = 0;
            i = i - 1;
        }
        if (A == 3){
            s = s + a[i][j - 1];
            a[i][j - 1] = 0;
            j = j - 1;
        }
        if (A == 4){
            s = s + a[i + 1][j];
            a[i + 1][j] = 0;
            i = i + 1;
        }
    }
 
    cout << s << endl;
 
    return 0;
} 
