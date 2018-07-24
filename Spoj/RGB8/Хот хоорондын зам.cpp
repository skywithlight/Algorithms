#include <iostream>
 
using namespace std;
 
int main(){
 
    int n, i, j, l = 0;
    cin >> n;
 
    int a[n][n];
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
 
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            if (a[i][j] == 1 && a[j][i] == 1){
                a[j][i] = 0;
                l++;
            }
        }
    }
 
    cout << l << endl;
 
    return 0;
} 
