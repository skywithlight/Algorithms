#include <iostream>
 
using namespace std;
 
int main(){
 
    int n, i, j, k, s, a, c, t;
    cin >> n;
 
    k = 0;
    s = 0;
    t = n - 1;
    c = 0;
    while (i < n){
        j = 0;
        while (j < n){
            cin >> a;
            if (k == j){
                s = s + a;
            }
            if (j == t){
                c = c + a;
            }
            j++;
        }
        k++;
        i++;
        t--;
    }
 
    cout << s << ' ' << c << endl;
 
    return 0;
} 
