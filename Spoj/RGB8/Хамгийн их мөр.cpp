#include <iostream>
 
using namespace std;
 
int main(){
 
    int n, m, a, i, j, t, s, max;
    cin >> n;
    cin >> m;
 
    t = 0;
    i = 0;
    while (i < n){
        j = 0;
        s = 0;
        while (j < m){
            cin >> a;
            s = s + a;
            j++;
        }
        if (i == 0){
            max = s;
        }
        if (s >= max){
            t = i;
            max = s;
        }
        i++;
    }
 
    cout << t + 1 << endl;
 
    return 0;
} 
