#include <iostream>
 
using namespace std;
 
int main(){
 
    int n, i, x, j;
    cin >> n;
 
    int a[n];
    for (i = 0; i < n; i++)
        cin >> a[i];
 
    i = 0;
    x = 0;
    while (i < n && x == 0){
        j = i + 1;
        while (j < n && a[i] != a[j]){
            j++;
        }
        if (j < n){
            x = x + 1;
            cout << i + 1 << " " << j + 1 << endl;
        } 
        i++;
    }
    if (x == 0)
        cout << 0 << " " << 0 << endl;
    return 0;
} 
