#include <iostream>
 
using namespace std;
 
int main(){
 
    int n, m, i = 0, j = 0, min = 1000, a;
    cin >> n;
    cin >> m;
 
    while (i < n){
        j = 0;
        while (j < m){
            cin >> a;
            if (min > a){
                min = a;
            }
            j++;
        }
        i++;
    }
 
    cout << min << endl;
 
    return 0;
} 
