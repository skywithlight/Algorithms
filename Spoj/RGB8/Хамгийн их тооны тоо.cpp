#include <iostream>
#include <vector>
 
using namespace std;
 
int main(){
	
	int n;
	cin >> n;
	
	vector<int> count(50000, 0);
	
	int a[n];
	for (int i = 0; i < n; i++){
		cin >> a[i];
		count[a[i]]++;		
	}
		
	for (int i = 50000; i >= 0; i--){
		if (count[i] != 0){
			cout << count[i] << endl;
			break;				
		}
	}
 
			
	cout << endl;
	
	return 0;
} 
