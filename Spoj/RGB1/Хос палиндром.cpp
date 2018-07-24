/*
ID: ntselme
LANG: C++
TASK: dualpal
*/
#include <iostream>
#include <vector>
#include <cstdio>
 
using namespace std;
 
int system(int a1){
	int tem, count = 0, k, ans = 0;
	vector<int> a;
	for (int i = 2; i <= 10; i++){
		tem = a1;
		while (tem > 0){
			a.push_back(tem % i);
			tem = tem / i;
		}
		k = a.size() - 1;
		for (int i = 0; i < a.size() / 2; i++){
			if (a[i] != a[k]){
				count++;
			}
			k--;
		}
		
		if (count == 0){
			ans++;	
		}		
		a.clear();
		count = 0;
	}
 
	return ans;
}
 
int main(){
	
//	freopen ("dualpal.in","r", stdin);
//	freopen ("dualpal.out","w", stdout);
	
	int n, m, i = 0;
	cin >> n >> m;
 
	while (i < n){
		if (system(m + 1) >= 2){
			cout << m + 1 << endl;
			i++;
		}
		m++;
	}
	
	return 0;
}
