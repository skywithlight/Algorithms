#include <iostream>
 
using namespace std;
 
int main(){
	
	int n, ans = 0;
	cin >> n;
	
	int a[n];
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	
	for (int i = 1; i < n; i++){
		ans = ans + i;
	}
	
	cout << ans << endl;
	
	return 0;
} 
