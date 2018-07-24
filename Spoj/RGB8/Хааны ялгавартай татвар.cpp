#include <iostream>
 
using namespace std;
 
int main(){
	
	int n, max_dig = 0;
	cin >> n;
	float max = 0, m;
	
	float a[n], b[n];
	
	for (int i = 0; i < n; i++)
		cin >> a[i];
 
	for (int i = 0; i < n; i++)
		cin >> b[i];
	
	for (int i = 0; i < n; i++){
		m = a[i] * b[i] / 100;
		if (m > max){
			max_dig = i;
			max = m;
		}
	}
	
	cout << max_dig + 1 << endl;
	
	return 0;
} 
