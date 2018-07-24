#include <bits/stdc++.h>

using namespace std;

int solve(int n, vector < int > s, int d, int m){
    if (n == 1 && m == 1 && s[0] == d){
        return 1;
    }
    int ans = 0;
    for (int i = 0; i <= n - m; i++){
        int sum = s[i], count = 1;
        for (int j = i + 1; j < n && count < m; j++){
            sum += s[j];
            count++;
        }
        if (sum == d)
            ans++;
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for(int s_i = 0; s_i < n; s_i++){
       cin >> s[s_i];
    }
    int d;
    int m;
    cin >> d >> m;
    int result = solve(n, s, d, m);
    cout << result << endl;
    return 0;
}
