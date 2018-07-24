#include <iostream>
 
using namespace std;
 
int main(){
 
int n, i = 0;
 
    cin >> n;
 
    int a[n];
 
    for (i = 0; i < n; i ++)
        cin >> a[i];
 
        while (i > 0){
            i --;
            cout << a[i] << endl;
        }
    return 0;
} 
