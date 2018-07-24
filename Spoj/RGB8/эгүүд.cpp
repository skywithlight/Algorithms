#include <iostream>
 
using namespace std;
 
int main(){
 
    int n, m, a, i, j, t, k, c;
    cin >> n;
    cin >> m;
 
    c = 0;
    while (i < n){
        j = 0;
        while (j < m){
            cin >> a;
            if (a == 0 && c == 0){
                t = i;
                k = j;
                c = c + 1;
            }
            j++;
        }
        i++;
    }
 
    cout << t + 1 << ' ' << k + 1 << endl;
 
    return 0;
} 
