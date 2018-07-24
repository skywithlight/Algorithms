class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> a;
        for (int i = left; i <= right; i++){
            int tem = i;
            bool checker = true;
            while (tem > 0 && checker){
                if (tem % 10 == 0){
                    checker = false;            
                } else {
                    if (i % (tem % 10) != 0){
                        checker = false;
                    }  
                }
                tem /= 10;
            }
            if (checker){
                a.push_back(i);
            }
        }
        return a;
    }
};
