#include <iostream>
 
using namespace std;
 
int main(){
 
    int ans_1 = 0, ans_2 = 1, ans_3 = 2, n;
    cin >> n;
 
    int a[n], max;
    for (int i = 0; i < n; i++)
        cin >> a[i];
 
    max = a[0] * a[1] * a[2];
 
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            for (int k = 0; k < n; k++){
                int tmp = a[i] * a[j] * a[k];
                if (i != j && i != k && j != k && max < tmp){
                    max = tmp;
                    ans_1 = i;
                    ans_2 = j;
                    ans_3 = k;
                }
            }
    cout << a[ans_1] << ' ' << a[ans_2] << ' ' << a[ans_3] << endl;
 
    return 0;
}
