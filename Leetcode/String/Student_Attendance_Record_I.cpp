class Solution {
public:
    bool checkRecord(string s) {
        int len, max = 0, ans1 = 0, ans2 = 0;
        len = s.length();
        
        bool ans = false;
        
        for (int i = 0; i < len; i++){
            if (s[i] == 'L'){
                ans1++;
            }
            if (s[i] == 'A'){
                ans2++;
                if (ans1 > max){
                    max = ans1;
                }
                ans1 = 0;
            }
            if (s[i] == 'P'){
                if (ans1 > max){
                    max = ans1;
                }
                ans1 = 0;
            }
        }
        
        if (ans1 > max){
            max = ans1;
        }
        
        if (max < 3 && ans2 < 2){
            ans = true;
        }
        
        return ans;
    }
};
