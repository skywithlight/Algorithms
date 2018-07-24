class Solution {
public:
    int lengthOfLastWord(string s) {
        int len, ans = 0;
        len = s.length();
        
        if (len == 0){
            return 0;
        } else {
            for (int i = 0; i < len; i++){
                if (s[i - 1] == ' ' && i != 0 && s[i] != ' '){
                    ans = 0;
                    ans++;
                } else {
                    if (s[i] != ' '){
                        ans++;                        
                    }
                }
            }
        }
        
        return ans;
        
    }
};
