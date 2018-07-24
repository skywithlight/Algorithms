#include <iostream>
using namespace std;


int main() {
    int n;
    cin >> n;
    
    int tmp, result = -1, setb = -1;
    
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        if (__builtin_popcount(tmp) > setb || (__builtin_popcount(tmp) == setb && tmp > result)) {
            result = tmp;
            setb = __builtin_popcount(tmp);
        }
    }
    
    cout << result << endl;
    return 0;
}
