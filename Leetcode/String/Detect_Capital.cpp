class Solution {
public:
    bool detectCapitalUse(string word) {
        int len, i, ans = 0, ans1 = 0, ans2 = 0;
        len = word.length();
        
        bool answer = false;
        
        if (word[i] >= 65 && word[i] <= 90){
            ans++;
        }
        
        for (i = 0; i < len; i++){
            if (word[i] >= 65 && word[i] <= 90){
                ans1++;
            }
            if (word[i] >= 97 && word[i] <= 122){
                ans2++;
            }
        }
        
        if (ans == 1){
            if (ans1 == 0 || ans1 == len || ans2 == len - 1){
                answer = true;
            }
        } else {
            if (ans1 == len){
                answer = true;
            } else {
                if (ans2 == len){
                    answer = true;
                }
            }
        }
        
        return answer;
    }
};
