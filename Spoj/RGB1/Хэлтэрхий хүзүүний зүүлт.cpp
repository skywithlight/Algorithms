/*
ID: ntselme
LANG: C++
TASK: beads
*/
#include <iostream>
#include <string>
#include <vector>
#include <cstdio>
 
using namespace std;
 
int main(){
	
//	freopen ("beads.in","r", stdin);
//	freopen ("beads.out","w", stdout);
	
	int n, count, count2, j, max = 0, l, tem, k, s = 0, s1 = 0;
	cin >> n;
	
	bool checker;
	
	char vrb1, vrb, vrb2;
	
	vector<char> a;
	
	for (int i = 0; i < n; i++){
		cin >> vrb1;
		a.push_back(vrb1);
		if (vrb1 == 'r'){
			s++;
		}
		if (vrb1 == 'b'){
			s1++;
		}
	}
	
	if (s == 0 || s1 == 0){
		cout << a.size() << endl;
		return 0;
	}
 
	for (int i = 0; i < a.size(); i++){
		checker = true;
		if (i == a.size() - 1){
			j = 0;
		} else {
			j = i + 1;			
		}
		count = 1;
		count2 = 1;
		vrb = a[i];
		tem = -1;
		while (checker == true && j < a.size()){
			if (vrb == a[j] || a[j] == 'w'){
				count++;
			} else {
				if (vrb == 'w'){
					vrb = a[j];	
					count++;
				} else {
					tem = j - 1;
					checker = false;					
				}
			}
			j++;
		}
		if (tem == -1){
			tem = a.size() - 1;
		}
		checker = true;
		if (i == 0){
			l = a.size() - 1;
			k = a.size() - 2;
		} else {
			l = i - 1;
			if (i == 1){
				k = a.size() - 1;
			} else {
				k = l - 1;
			}
		}
		vrb2 = a[l];
		while (checker == true && k != tem && l != tem){
			if (vrb2 == a[k] || a[k] == 'w'){
				count2++;
			} else {
				if (vrb2 == 'w'){
					vrb2 = a[k];
					count2++;
				} else {
					checker = false;					
				}
			}
			if (k == 0){
				k = a.size() - 1;
			} else {
				k--;				
			}
		}
		if (count + count2 > max){
			max = count + count2;
		}
	}
	
	cout << max << endl;
			
	return 0;
}
