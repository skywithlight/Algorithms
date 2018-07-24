#include <iostream>
 
using namespace std;
 
int main(){
 
    int n, i, x, j;
 
    cin >> n;
 
    int a[n];
 
    for (i = 0; i < n; i++)
    cin >> a[i];
    
    x = 0;
 
    i = 0;
 
    while (i < n - 1){
        j = 1;
        while (j < n - i) {
            if (a[i] == a[j + i]){
                x = x + 1;
            }
            j++;
        }
        i++;
    }
    cout << x << endl;
    return 0;
} 
