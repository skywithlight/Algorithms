#include <iostream>
 
using namespace std;
 
int main(){
 
    int a, b, x, y;
 
    cin >> a >> b;
 
    x = a;
    y = b;
 
    while (a > 0 && b > 0){
        if (a > b){
            a = a % b;
        }
        else {
            b = b % a;
        }
    }
    if (a + b == 0)
        cout << 0 << endl;
    else
        cout << x * y / (a + b) << endl;
    return 0;
} 
