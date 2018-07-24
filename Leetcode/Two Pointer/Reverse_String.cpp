class Solution {
public:
    string reverseString(string s) {
        int len, j = 0;
        len = s.length();
        
        string a;
        a = s;
        
        for (int i = len - 1; i >= 0; i--){
            s[j] = a[i];
            j++;
        }
        
        return s;
    }
};
