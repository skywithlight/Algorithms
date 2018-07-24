#include <iostream>
 
using namespace std;
 
int main(){
 
    int n, t, i, j, k;
    cin >> n;
 
    int a[n], b[n];
    j = 1;
    for (i = 0; i < n; i++){
        cin >> a[i];
        b[i] = j;
        j++;
    }
 
    for (i = 0; i < n; i++){
        t = a[0];
        j = 0;
        for (k = 0; k < n; k++){
            if (a[k] > t){
                t = a[k];
                j = k;
            }
        }
        cout << b[j] << ' ';
        a[j] = -1;
    }
 
    cout << endl;
 
    return 0;
}
