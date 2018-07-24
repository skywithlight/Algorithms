#include <iostream> 
 
using namespace std; 
 
int main() 
{ 
    int n, j, b, c; 
    cin >> n; 
    int a[n]; 
    for (int i = 1; i < n + 1; i++){ 
    cin >> a[i]; 
    } 
 
    cin >> b; 
    for (j = b; j < n + 1; j++){
    a[j] = a[j+1]; 
    } 
    for (c = 1; c < n; c++){ 
    cout << a[c]<< " "; 
    } 
    return 0; 
} 
