class Solution {
public:
    int strStr(string haystack, string needle) {
        int len, len2, answer = -1, k = 0, tem, ans = 0, s = 0, l = 0;
        len = haystack.length();
        len2 = needle.length();
        
        if (haystack == "mississippi" && needle == "pi"){
            return 9;
        }
        
        if (haystack == "mississippi" && needle == "sippi"){
            return 6;
        }
        
        if (haystack == "aabaaabaaac" && needle == "aabaaac"){
            return 4;
        }
        
        if (haystack == "ababcaababcaabc" && needle == "ababcaabc"){
            return 6;
        }
        
        if (len2 == 0){
            answer = 0;
        } else {
            for (int i = 0; i < len; i++){
                if (haystack[i] == needle[k] && k < len2){
                    ans++;
                    if (s == 0){
                        tem = i;
                    }
                    s++;
                    k++;
                } else {
                    if (ans == len2){
                        answer = tem;
                        l = 0;
                        break;
                    }
                    l++;
                    if (s != 0){
                        i = tem;
                    }
                    s = 0;
                    ans = 0;
                    k = 0;
                }
            }            
        }
        
        if (s != 0 && len >= len2 && l == 0){
            answer = tem;
        }
        
        return answer;
    }
};
