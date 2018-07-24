class Solution {
public:
    int repeatedStringMatch(string A, string B) {
        int len, len2, i = 0, count = 1, tem;
        len = A.length();
        len2 = B.length();
       
        string a;
        a = A;
        
        tem = len;
        
        while (len < len2){
            A += a;
            len = A.length();
            count++;
        }
        
        while (i < tem){
            for (int j = 0; j <= len - len2; j++){
                if (A.substr(j, len2) == B){
                    return count;
                }
            }
            A += a;
            len = A.length();
            count++;
            i++;
        }
        
        return -1;
    }
};
