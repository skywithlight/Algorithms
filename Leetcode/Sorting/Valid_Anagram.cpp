class Solution {
public:
    bool isAnagram(string s, string t) {
        
        int len, len2;
        len = s.length();
        len2 = t.size();
        
        vector<int> count1(50000, 0);
        vector<int> count2(50000, 0);
    
        vector<string> ans;
        
        for (int i = 0; i < len; i++){
            count1[s[i]]++;
        }
        for (int i = 0; i < len2; i++){
            count2[t[i]]++;
        }
        for (int i = 0; i < 50000; i++){
            if (count1[i] != count2[i]){
                return false;
            }
        }
        
        return true;
    }
};
