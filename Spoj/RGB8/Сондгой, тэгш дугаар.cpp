#include <iostream>
 
using namespace std;
 
int main(){
 
    int n, i;
    cin >> n;
 
    int a[n];
    for(i = 1; i < n + 1; i++)
        cin >> a[i];
        for (i = 1; i < n + 1; i++)
            if (i % 2 != 0)
            cout << a[i] << endl;
 
        for (i = 1; i < n + 1; i++)
            if (i % 2 == 0)
            cout << a[i] << endl;
 
    return 0;
} 
