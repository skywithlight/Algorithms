class Solution {
public:
    int firstUniqChar(string s) {
        int len = s.length(), ans = -1;
        
        vector<int> count(50000, 0);
        
        for (int i = 0; i < len; i++){
            count[s[i]]++;
        }
        
        for (int i = 0; i < len; i++){
            if (count[s[i]] == 1){
                ans = i;
                i = len;
            }
        }
        
        return ans;
        
    }
};
