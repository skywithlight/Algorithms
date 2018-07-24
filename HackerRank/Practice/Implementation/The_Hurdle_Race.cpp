#include <bits/stdc++.h>

using namespace std;

int hurdleRace(int k, vector <int> height) {
    int max = height[0];
    for (int i = 1; i < height.size(); i++){
        if (height[i] > max)
            max = height[i];
    }
    if (max - k <= 0)
        return 0;
    return max - k;
}

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> height(n);
    for(int height_i = 0; height_i < n; height_i++){
       cin >> height[height_i];
    }
    int result = hurdleRace(k, height);
    cout << result << endl;
    return 0;
}
