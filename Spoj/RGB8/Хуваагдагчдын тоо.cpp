#include <iostream>
 
using namespace std;
 
int main(){
 
    int n, m, s, i, j, x, k;
 
    cin >> n >> k;
 
    int A[n];
 
    for (i = 0; i < n; i++)
        cin >> A[i];
        
        i = 1;
 
        m = 0;
 
        while (i <= n){
            j = i;
            x = 0;
            s = 0;
            while (j > 0){
                x = j % 10;
                s = s + x;
                j = j / 10;
            }
            if (s % k == 0)     
            m = m + 1;
            i = i + 1;
        }
 
        cout << m << endl;
 
    return 0;
} 
