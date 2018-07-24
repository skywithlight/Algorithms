#include <iostream>

using namespace std;

int main(){
    
    int n, m, ans = 0;
    cin >> n >> m;
    
    for (int i = n; i <= m; i++){
        int tem = i, pal = 0;
        while (tem > 0){
            pal = pal * 10 + (tem % 10);
            tem /= 10;
        }
        if (pal == i)
            ans += i;
    }
    
    cout << ans << endl;
    
    return 0;
}
