#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
    int n, k, q, sum = 0;
    cin >> n >> k;
    
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }
    cin >> q;
    sum -= a[k];
    sum /= 2;
    
    if (sum == q)
        cout << "Bon Appetit" << endl;
    else 
        cout << q - sum << endl;
    
    return 0;
}
