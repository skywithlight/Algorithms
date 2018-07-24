#include <iostream>
 
using namespace std;
 
int main(){
 
    int n, i, j;
    cin >> n;
 
    int a[n];
 
    a[0] = 1;
 
    for (i = 1; i <= n; i++){
        if (i == 1){
            cout << a[0] << endl;
        } else {
            cout << a[0] << ' ';
        }
        for (j = i - 1; j > 1; j--){
            a[j] = a[j] + a[j - 1];
            cout << a[j] << ' ';
        }
        a[i] = 1;
        if (i != 1){
            cout << "1" << endl;
        }
    }
 
    return 0;
} 
