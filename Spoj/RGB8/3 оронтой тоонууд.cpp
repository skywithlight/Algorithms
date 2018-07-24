#include <iostream>
 
using namespace std;
 
int main(){
 
    int i, j, b, c, a;
 
    j = 100;
 
    while (j < 1000){
        i = j;
        a = i % 10;
        i = i / 10;
        b = i % 10;
        c = i / 10;
        i = i % 10;
        if (a != b && b != c && a != c)
            cout << j << endl;
            j++;
        }
 
    return 0;
} 
