#include <iostream>
 
using  namespace std;
 
int main ( ) {
 
    int a, p, e = 0 , s = 0 ;
    cin >> a;
 
    p = a;
 
    while  ( e <= 0 ) {
        cin >> a;
        if  ( p == a ) {
            e ++;
        }
        p = a;
        s ++;
        }
 
    s ++;
 
    cout << s << endl;
 
    return  0 ;
}
 
