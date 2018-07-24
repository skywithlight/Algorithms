class Solution {
public:
    string reverseWords(string s) {
        int len, count = 0, k, tem, tem2 = 0;
        len = s.length();
        
        string a;
        
        for (int i = 0; i < len; i++){
            if (count == 0){
                tem = i;
                count++;                
            }
            if (s[i] == ' ' || i == len - 1){
                if (i == len - 1){
                    tem2 = 1;
                }
                for (int j = tem; j < i + tem2; j++){
                    a.push_back(s[j]);
                }
                k = a.length();
                for (int j = tem; j < i + tem2; j++){
                    s[j] = a[k - 1];
                    k--;
                }
                a.clear();
                count = 0;
            }
        }
        
        return s;
        
    }
};
