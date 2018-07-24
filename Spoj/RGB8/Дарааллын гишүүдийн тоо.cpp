#include <iostream>
 
using namespace std;
 
int main(){
 
    int a, n, i;
    
    int b[100];
    cin >> a;
 
    n = 0;
 
    while (a != 0){
        b[n] = a;
        cin >> a;
        n++;
        
    }
 
    cout << n << ' ' << endl;
 
    for (i = 0; i < n; i++)
    cout << b[i] << endl;
 
    return 0;
}
