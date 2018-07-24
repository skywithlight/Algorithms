class Solution {
public:
    int findLUSlength(string a, string b) {
        int len, len2, count  = 0;
        len = a.length();
        len2 = b.length();

        if (len == len2){
            for (int i = 0; i < len; i++){
                if (a[i] == b[i])
                    count++;
            } 
            if (count == len)
                return -1;
        }
        
        if (len >= len2)
            return len;
          else
            return len2;
    }
};
