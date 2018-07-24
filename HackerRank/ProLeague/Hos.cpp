#include <iostream>
#include <set>
#include <vector>
#include <cmath>

using namespace std;

int main(){

    int n, num, ans = -1, tem = -1;
    cin >> n;
    
    vector < vector<int> > a(1000000);
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> num;
            a[num].push_back(i);
            a[num].push_back(j);
        }
    }

    // for (int i = 0; i < 1000000; i++){
    //     for (int j = 0; j < a[i].size(); j += 2){
    //         cout << i << " " << a[i][j] << " " << a[i][j + 1] << endl;
    //     }
    // }

    for (int i = 0; i < 1000000; i++){
        for (int j = 0; j < a[i].size(); j += 2){
            for (int k = j + 2; k < a[i].size(); k += 2){
                if (((abs(a[i][j] - a[i][k]) + abs(a[i][j + 1] - a[i][k + 1])) < ans) || (ans == - 1)){
                    ans = (abs(a[i][j] - a[i][k]) + abs(a[i][j + 1] - a[i][k + 1]));
                    tem = i;
                }
            }
        }
    }

    cout << ans << " " << tem << endl;

    return 0;
}
