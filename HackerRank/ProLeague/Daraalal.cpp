#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main(){
    
    unsigned long long n, k, num, ans = 0;
    cin >> n >> k;
    
    vector<int> a;    
    
    for (int i = 0; i < n; i++){
        cin >> num;
        a.push_back(num);
    }
    
    for (int i = 0; i <= n - k; i++){
        int count = 1;
        map <int, int> b;
        b.insert(make_pair(a[i], 1));
        for (int j = i + 1; j < n; j++){
            if (b.find(a[j]) == b.end()){
                count++;
                b.insert(make_pair(a[j], 0));
            }
            if (count >= k){
                ans += n - j;
                break;
            }
        }
    }
    
    cout << ans << endl;
    
    return 0;
}
