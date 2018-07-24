#include <bits/stdc++.h>

using namespace std;

int sockMerchant(int n, vector <int> ar){
    int ans = 0;
    sort (ar.begin(), ar.end());
    for (int i = 0; i < n - 1; i++){
        if (ar[i] == ar[i + 1]){
            ans++;
            i++;
        }
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = sockMerchant(n, ar);
    cout << result << endl;
    return 0;
}
