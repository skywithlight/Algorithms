class Solution {
public:
    int countPrimes(int n) {
        int count = 0;
        vector<bool> a(n, 1);
        
        a[0] = 0;
        a[1] = 0;
        for (int i = 2; i < sqrt(n); i++){
            for (int j = i + i; j < n; j = j + i){
                a[j] = 0;
            }
        }
        for (int i = 0; i < n; i++){
            if (a[i] == 1){
                count++;
            }
        }
        return count;
    }
};
