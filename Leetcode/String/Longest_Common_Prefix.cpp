class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int size = strs.size(), min_len = 1000000000, min_ind = 0;
        char tmp;
        string ans;
        bool check = true;
        if (size == 0)
            return ans;
        for (int i = 0; i < size; i++){
            if (strs[i].length() < min_len){
                min_ind = i;
                min_len = strs[i].length();
            }
        } 
        for (int i = 0; i < min_len && check; i++){
            check = true;
            tmp = strs[min_ind][i];
            for (int j = 0; j < size && check; j++){
                if (strs[j][i] != tmp)
                    check = false;
            }
            if (check)
                ans += tmp;
        }

        return ans;
    }
};
