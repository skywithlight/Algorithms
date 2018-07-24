#include <iostream>
#include <cmath>

using namespace std;

int main(){
    
    unsigned long long n, m, a, b;
    cin >> n >> m >> a >> b;
    
    int x = a, y = b;
    
    while (a > 0 && b > 0){
        if (a > b)
            a = a % b;
        else 
            b = b % a;
    }
    
    a = (x * y) / (a + b);
    
    cout << (m / x - m / a) - ((n - 1) / x - (n - 1) / a) << endl;
    
    return 0;
}
