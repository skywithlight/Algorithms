#include <iostream>
 
using namespace std;
 
int main(){
 
    int n, A, i;
    cin >> n;
 
    int a[2 * (n * n)];
    for (i = 0; i < 2 * (n * n); i++){
        cin >> a[i];       
    }
    for (i = 0; i < n * n; i++){
        cout << a[i] + a[i + (n * n)] << ' ';
    }
 
    cout << endl;
 
    return 0;
} 
