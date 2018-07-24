#include <iostream>
 
using namespace std;
 
int main(){
 
    int n, x = 0, i;
 
    cin >> n;
 
    int a[n];
 
    for (i = 0; i < n; i++)
        cin >> a[i];
 
    i = 0;
 
    while (i < n -1){
        if (a[i] == a[i + 1]){
            x = x + 1;
        }
        i++;
    }
    cout << x << endl;
    return 0;
} 
