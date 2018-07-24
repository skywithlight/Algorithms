#include <iostream>
 
using namespace std;
 
int main(){
    
    int n, j, max, i, b, x;
 
    cin >> n;
 
    i = 1;
 
    x = 0;
 
    max = 1;
 
    b = 0;
 
    while (i <= n){
        j = 1;
        while (j <= i){
            if (i % j == 0){
            x = x + j;                
            }
            j = j + 1;
        }
        if (max <= x){
            max = x;
            b = i;
        }
            x = 0;
            i = i + 1;
    }
    cout << b << endl;
    return 0;
} 
