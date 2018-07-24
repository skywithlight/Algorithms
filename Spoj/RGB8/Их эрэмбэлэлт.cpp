#include <iostream>
 
using namespace std;
 
int main(){
 
    int num, i, j;
    cin >> num;
 
    int a[num], digit[100];
    for (i = 0; i < num; i++){
    cin >> a[i];
    }
 
    for (i = 0; i <= 100; i++){
        digit[i] = 0;
    }
 
    for (i = 0; i < num; i++){
        digit[a[i]]++;
    }
 
    i = 0;
    while (i <= 100){
        while (digit[i] > 0){
            cout << i << ' ';
 
            digit[i] = digit[i] - 1;
        }
        i++;
    }
 
    cout << endl;
 
    return 0;
} 
