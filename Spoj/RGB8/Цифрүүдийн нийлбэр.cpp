#include <iostream>
 
using namespace std;
 
int main(){
     
    int n, x = 0, s = 0;
 
    cin >> n;
 
    while (n > 0){
        x = n % 10;
        n = n / 10;
        s = s + x;
    }
    cout << s << endl;
    return 0;
} 
