#include <bits/stdc++.h>

using namespace std;

int beautifulDays(int i, int j, int k) {
    int ans = 0;
    for (int l = i; l <= j; l++){
        int tem = l, rev = 0;
        while (tem > 0){
            rev = rev * 10 + (tem % 10);
            tem /= 10;
        }
        tem = (abs(l - rev)) / k;
        if (tem * k == (abs(l - rev)))
            ans++;
    }
    return ans;
}

int main() {
    int i;
    int j;
    int k;
    cin >> i >> j >> k;
    int result = beautifulDays(i, j, k);
    cout << result << endl;
    return 0;
}
