#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
	
	int n, ans = 0;
	cin >> n;
	
	string vrb;
	
	vector<string> a;
	
	for (int i = 0; i < n; i++){
		cin >> vrb;
		a.push_back(vrb);
	}
	
	sort (a.begin(), a.end());
	
	for (int i = 0; i < n - 1; i++){
		if (a[i] == a[i + 1]){
			ans++;
		}
	}
	
	cout << ans << endl;
	
	return 0;
}
