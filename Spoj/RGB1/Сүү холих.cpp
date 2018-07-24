#include <iostream>
#include <vector>
 
using namespace std;
 
int main(){
	
	unsigned long long n, m, ans = 0;
	cin >> n >> m;
	
	vector< pair <long long, long long> > a(m);
	for (int i = 0; i < m; i++){
		cin >> a[i].first >> a[i].second;
	}
	
//	sort (a.begin(), a.end());
	
	bool swapped;
    unsigned long long len;
    len  = m;
 
    do {
        swapped = false;
        for (int i = 1; i < len; i++){
            if (a[i - 1].first > a[i].first){
                swap(a[i - 1], a[i]);
            }
            swapped = true;
        }
        len--;
    } while (swapped == true);
	
	
	int i = 0;
	while (n > 0){
		if (a[i].second <= n){
			n = n - a[i].second;
			ans += (a[i].first * a[i].second);
		} else {
			ans += (a[i].first * n);
			n = 0;
		}
		i++;
	}
	
	cout << ans << endl;
	
	return 0;
}
