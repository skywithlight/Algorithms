#include <iostream>
#include <cmath>
 
using namespace std;
 
int main(){
 
    int n, m, i, temp, temp_2, temp_3;
    cin >> n;
 
    int a[n];
    for (i = 0; i < n; i++){
        cin >> a[i];
    }
 
    cin >> m;
 
    temp = 0;
    temp_2 = a[0] - m;
    temp_3 = a[0];
    for (i = 1; i < n; i++){
        if (abs(a[i] - m) < abs(temp_2)){
            temp = i;
            temp_2 = a[i] - m;
            temp_3 = a[i];
        } else {
                if (abs(a[i] - m) == abs(temp_2)){
                    if (a[i] > temp_3){
                        temp = i;
                        temp_2 = a[i] - m;
                        temp_3 = a[i];
                    }
                }   
        }
    }
 
    cout << temp + 1 << endl;
 
    return 0;
} 
