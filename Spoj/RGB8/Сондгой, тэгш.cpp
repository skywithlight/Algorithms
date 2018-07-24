#include <iostream>
 
using namespace std;
 
int main(){
 
    int n, i;
 
    cin >> n;
 
    int a[n];
    for(i = 0; i < n; i++)
        cin >> a[i];
 
        for (i = 0; i < n; i++)
            if (a[i] % 2 != 0)
            cout << a[i] << endl;
 
        for (i = 0; i < n; i++)
            if (a[i] % 2 == 0)
            cout << a[i] << endl;
 
     return 0;
} 
