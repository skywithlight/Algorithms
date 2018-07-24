class Solution {
public:
    int countBinarySubstrings(string s) {
        vector<int> rec;
        int count = 1, ans = 0;;
        for(int i = 1, n = s.size(); i <= n; i++){
            if(s[i] == s[i - 1])
                count++;
            else{
                rec.push_back(count);
                count = 1;
            }
        }
        for(int i = 1, n = rec.size(); i < n; i++)  
            ans += min(rec[i - 1], rec[i]);
        
        return ans;
    }
};
