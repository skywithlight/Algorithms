#include <iostream> 
 
using namespace std;
 
int main(){
 
    int n, i, min, max;
    cin >> n;
 
    int p, k;
    cin >> p >> k;
 
    i = 1;
    max = p;
    min = k;
 
    while (i < n){
        int p, k;
        cin >> p >> k; 
        if (max < p){
        max = p;
    }
    if (min > k){
        min = k;
    }
    i++;
}
    if (min > max){
        cout << min - max << endl;
    } else {
        cout << 0 << endl;
    }
 
 
    return 0;
}  
