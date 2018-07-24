#include <iostream>
 
using namespace std;
 
int main(){
 
    int a, a1, b, b1;
 
    cin >> a >> a1 >> b >> b1;
    
    a = a + a1;
 
    b = b + b1;
 
    if (a % 2 == b % 2){
    cout << "YES" << endl;
    }
    else{
    cout << "NO" << endl;
    }
    return 0;
} 
