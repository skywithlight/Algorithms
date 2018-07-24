class Solution {
public:
    string reverseStr(string s, int k) {
        int l = 0;
        
        while (l < s.length()){
            int tmp_l = l;
            int tmp_r = l + k - 1;
            
            if (l + k >= s.length()){
                tmp_l = l;
                tmp_r = s.length() - 1;
                
                while (tmp_l < tmp_r){
                    swap(s[tmp_l], s[tmp_r]);

                    tmp_l++;
                    tmp_r--;
                }
            }
            else if (l + k + k >= s.length()){
                tmp_l = l;
                tmp_r = l + k - 1;
                
                while (tmp_l < tmp_r){
                    swap(s[tmp_l], s[tmp_r]);

                    tmp_l++;
                    tmp_r--;
                }
            }
            else {
                while (tmp_l < tmp_r){
                    swap(s[tmp_l], s[tmp_r]);

                    tmp_l++;
                    tmp_r--;
                }
            }
            l += k + k;
        }
        
        return s;
    }
};
