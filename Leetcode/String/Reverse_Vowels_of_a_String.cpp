class Solution {
public:
    string reverseVowels(string s) {
    
        int len, i, k = 0;
        len = s.length();
        
        vector<char> a;
            
        for (i = len - 1; i >= 0; i--){
            if (s[i] == 'a' || s[i] == 'i' || s[i] == 'u' || s[i] == 'e' || s[i] == 'o' || s[i] == 'A' || s[i] == 'I' || s[i] == 'U' || s[i] == 'E' || s[i] == 'O'){
                a.push_back(s[i]);
            }
        }
         
        for (i = 0; i < len; i++){
            if (s[i] == 'a' || s[i] == 'i' || s[i] == 'u' || s[i] == 'e' || s[i] == 'o' || s[i] == 'A' || s[i] == 'I' || s[i] == 'U' || s[i] == 'E' || s[i] == 'O'){
                s[i] = a[k];
                k++;
            }
        }
        
        return s;
    }
};
