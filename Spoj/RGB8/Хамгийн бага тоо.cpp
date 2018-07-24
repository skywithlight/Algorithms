#include <iostream>
 
using namespace std;
 
int main(){
 
    int n, i;
 
    cin >> n;
    int A[n], min;
 
    for (i = 0; i < n; i++)
        cin >> A[i];
    
    min = A[0];
    for (i = 1; i < n; i++)
        if (min >= A[i])
            min = A[i];
 
    cout << min << endl;  
    return 0;
} 
