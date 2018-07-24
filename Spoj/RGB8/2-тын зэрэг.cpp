#include <iostream>
 
using namespace std;
 
int main(){
 
    int n, x = 0;
 
    cin >> n;
 
    while (n > 1){
        if (n % 2 == 0){
            n = n / 2;
        }
        else{
        x = x + 1;
            n = 0;
        }
    }
        if (x == 0){
        cout << "YES" << endl;
        }
        else{
        cout << "NO" << endl;
        }
        return 0;
} 
