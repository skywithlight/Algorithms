class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int len, k = 1, count = 1;
        len = s.length();
        
        string a, tem;
        
        char tem2;
        
        if (len % 2 == 0){
            for (int i = 0; i < len / 2; i++){
                a = s.substr(0, k);
                count = 1;
                for (int l = k; l < len; l = l + k){
                    tem = s.substr(l, k);
                    if (a.length() != tem.length()){
                        count = 0;
                    }
                    if (a == tem){
                        count++;
                    }
                }
                if (count == len / k){
                    return true;
                }
                
                a.clear();
                k++;   
            }  
        } else {
            for (int i = 1; i < len - 1; i = i + 2){
                if (len % i == 0){
                    k = i;
                    a = s.substr(0, k);
                    count = 1;
                    for (int l = k; l < len; l = l + k){
                        tem = s.substr(l, k);
                        if (a == tem){
                            count++;
                        }
                    }
                    if (count == len / k){
                        return true;
                    }
                    a.clear();
                    k = k + i;                      
                }
            }
        }
        
        return false;
    }
};
