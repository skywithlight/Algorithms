#include <bits/stdc++.h>

using namespace std;

int introTutorial(int V, vector <int> arr) {
    int tem = 0;
    for (int i = 0; i < arr.size(); i++){
        if (arr[i] == V){
            tem = i;
        }
    }
    return tem;
}

int main() {
    int V;
    cin >> V;
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
    	cin >> arr[arr_i];
    }
    int result = introTutorial(V, arr);
    cout << result << endl;
    return 0;
}
