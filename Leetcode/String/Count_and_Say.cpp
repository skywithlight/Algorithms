class Solution {
public:
    string countAndSay(int n) {
       
        int count = 1, c, l = 0;
        
        string a = "1";
        string b = "1";
               
        for (int i = 1; i < n; i++){
            b.clear();
            c = a[0];
            count = 1;
            for (int j = 1; j < a.length(); j++){
                if (c == a[j]){
                    count++;
                } else {
                    b.push_back(count + 48);
                    b.push_back(c);
                    count = 1;
                    c = a[j];
                    l++;
                }
            }
            if (count == a.length() || l != 0){
                b.push_back(count + 48);
                b.push_back(c);
            }
            a = b;
            l = 0;
        }
        
        return b;
    }
};
