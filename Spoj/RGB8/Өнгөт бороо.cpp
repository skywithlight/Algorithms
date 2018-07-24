#include <iostream>
 
using namespace std;
 
int main(){
 
    int n, ans = 0;;
    cin >> n;
 
    int a[n][n], b[n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++){
        cin >> b[i];
    }
 
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (a[i][j] && a[j][i] == 1){
                if (b[i] != b[j]){
                    ans++;
                    a[i][j] = 2;                }
            }
        }
    }
 
    cout << ans << endl;
 
    return 0;
} 
