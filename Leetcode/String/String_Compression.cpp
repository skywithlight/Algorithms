class Solution {
public:
    int compress(vector<char>& chars) {
        int len = chars.size(), count = 1, s = 0, rev, tem2;
        
        vector<char> a;
        
        char tem;
        
        for (int i = 0; i < len; i++){
            if (s == 0){
                tem = chars[i];
                s++;
            } else {
                if (tem == chars[i]){
                    count++;
                } else {
                    a.push_back(tem);
                    if (count != 1){
                        rev = 0;
                        tem2 = count;
                        while (count > 0){
                            rev = rev * 10 + count % 10;
                            count = count / 10;
                        }
                        while (rev > 0){
                            a.push_back((rev % 10) + 48);
                            rev = rev / 10;
                        }
                        if (tem2 % 10 == 0){
                            a.push_back(0 + 48);
                        }
                    }
                    i--;
                    count = 1;
                    s = 0;
                }
            }
        }
        
        if (s != 0){
            a.push_back(tem);
            if (count != 1){
                rev = 0;
                tem2 = count;
                while (count > 0){
                    rev = rev * 10 + count % 10;
                    count = count / 10;
                }
                while (rev > 0){
                    a.push_back((rev % 10) + 48);
                    rev = rev / 10;
                }                   
            }
            if (tem2 % 10 == 0){
                a.push_back(0 + 48);
            }
        }
        
        chars = a;
        
        return a.size();
        
    }
};
