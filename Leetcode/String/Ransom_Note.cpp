class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int len, len2, i = 0, ans2 = 0, tem;
        len = ransomNote.length();
        len2 = magazine.length();
        
        bool ans = false;
        
        while (i < len){
            tem = ans2;
            for (int j = 0; j < len2; j++){
                if (ransomNote[i] == magazine[j]){
                    ans2++;
                    magazine[j] = 0;
                    j = len2;
                }
            }
            if (tem == ans2){
                i = len;
            }
            i++;
        }
        
        if (ans2 == len){
            ans = true;
        }
        
        return ans;
        
    }
};
