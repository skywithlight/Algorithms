#include <iostream>
#include <string>

using namespace std;

int main(){
	
	string name;
	cin >> name;
	
	int tem = 0, ans = 0;
	
	for (int i = 0; i < name.size(); i++){
		if (name[i] >= 48 && name[i] <= 57){
			tem = tem * 10 + (name[i] - 48);
		} else {
			ans += tem;
			tem = 0;
		}
	}
	
	ans += tem;
	
	int n, t, i;

    i = 1;
    t = ans;
    while (ans > i){
        if (t / 2 == i){
            cout << (t / 2) % 2;
            i = t;
            t = ans;
        } else {
            t = t / 2;
        }
    }

    cout << ans % 2 << endl;
	
	return 0;
}
