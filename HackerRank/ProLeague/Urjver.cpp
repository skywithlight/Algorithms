#include <iostream>
#include <cmath>

#define mod 100000000000000000
#define ull unsigned long long

using namespace std;

int main(){
	
	ull a, b, tem, ans = 0;
	cin >> a >> b;
	
	tem = a;
	
	while (b > 0){
		if (b % 2 == 1){
			ans = (ans + tem) % mod;
		}
		tem = (tem * 2) % mod;
		b = b / 2;
	}
	
	cout << ans << endl;
	
	return 0;
}
