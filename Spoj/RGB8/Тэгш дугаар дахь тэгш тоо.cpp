#include <iostream>
 
using namespace std;
 
int main(){
 
    int n, i, x;
 
    cin >> n;
 
    int a[n];
 
    for (i = 0; i < n; i++)
        cin >> a[i];
 
    x = 0;
 
    i = 2;
 
    while (i <= n){
        if (a[i - 1] % 2 == 0){
            x = x + 1;
        }
        i = i + 2;
    }
    cout << x << endl;
    return 0;
}
