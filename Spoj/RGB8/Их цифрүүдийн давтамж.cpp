#include <iostream>
 
using namespace std;
 
int main(){
 
    int  n, count = 0, number, j, i, s = 0;
    int a[100001];
    cin >> number;
    a[count] = number;
    count ++;
 
    do {
        cin >> number;
        a[count] = number;
        count ++;
    } while (number != 0);
 
    n = count - 1;
 
    j = 1;
    while (j < 10){
        s = 0;
        i = 0;
        while (i < n){
            if (j == a[i]){
                s = s + 1;
            }
            i++;
        }
        cout << s << endl;        
        j++;
    }
    
    return 0;
} 
