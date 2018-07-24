class Solution {
public:
    bool isPalindrome(string s) {
        int len, len2 = 0, count = 0, j, l;
        len = s.length();
        
        string a;
        string b;
        
        for (int i = 0; i < len; i++){
            if (s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z' || s[i] >= '0' && s[i] <= '9'){
                a.push_back(s[i]);
            }
        }
        
        for (int i = len - 1; i >= 0; i--){
            if (s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z' || s[i] >= '0' && s[i] <= '9'){
                b.push_back(s[i]);
            }
        }
        
        len2 = b.length();
        
        for (int i = 0; i < len2; i++){
            if (a[i] >= 'A' && a[i] <= 'Z'){
                a[i] = a[i] + 32;
            }
            if (b[i] >= 'A' && b[i] <= 'Z'){
                b[i] = b[i] + 32;
            }
            if (a[i] != b[i]){
                return false;
            }
        }
        
        return true;
    }
};
