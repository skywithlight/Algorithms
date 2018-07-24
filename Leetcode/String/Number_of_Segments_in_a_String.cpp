class Solution {
public:
    int countSegments(string s) {
        int len, ans = 0, l = 0;
        len = s.length();
        
        for (int i = 0; i < len; i++){
            if (s[i] != ' ' && l == 0){
                ans++;
                l++;
            } else {
                if (s[i] == ' '){
                    l = 0;
                }
            }
        }
        
        return ans;
    }
};
