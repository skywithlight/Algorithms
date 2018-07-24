#include <iostream>
 
using namespace std;
 
int main(){
 
    int num, i, j, t;
    cin >> num;
 
    int a[num];
    for (i = 0; i < num; i++){
        cin >> a[i];
    }
 
    i = 0;
    while (num > i){
        j = 0;
        while (j < num - 1){
            if (a[j] > a[j + 1]){
            t = a[j]; 
            a[j] = a[j + 1];
            a[j + 1] = t;
            }
            j++;
        }
        i++;
    }
 
    for (i = 0; i < num; i++){
        cout << a[i] << ' ';
    }
 
    cout << endl;
 
    return 0;
} 
