#include <iostream>
 
using namespace std;
 
int main(){
 
    int k, i = 0, n, l = 0;
 
    cin >> k;
 
    int A[1000];
 
    fill (A, A + 1000, 0);
    
    do{
        n = k;
        while(n > 0){
            cin >> k;
            A[i] = A[i] * 10 + k;
            n--;
        }
        cin >> k;
        l++; 
        i++;
    }while (k != 0);
    
    cout << l;
 
    for (i = 0; i < l; i++)
        cout << " " << A[i];
    
    
    cout << endl;
 
    return 0;
}   
