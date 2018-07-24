class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        vector<string> a;
        for (int i = 0; i < paragraph.size(); i++){
            if (paragraph[i] >= 'A' && paragraph[i] <= 'Z'){
                paragraph[i] += 32;
            }
        }
        string str;
        int s = 0;
        for (int i = 0; i < paragraph.size(); i++){
            if (paragraph[i] >= 'a' && paragraph[i] <= 'z'){
                str.push_back(paragraph[i]);
                s++;
            } else {
                 bool checker1 = true;
                for (int j = 0; j < banned.size() && checker1; j++){
                    if (str == banned[j])
                        checker1 = false;
                }
                 if (checker1 && s != 0)
                     a.push_back(str);
                 str.clear();
                 s = 0;
            }           
        }
        a.push_back(str);
        string ans = a[0];
        int max = 0, count = 0, l = 0;
        for (int i = 0; i < a.size(); i++)
            cout << a[i].size() << " ";
        cout << endl;
        for (int i = 0; i < a.size(); i++){
            count = 1;
            for (int j = i + 1; j < a.size(); j++){
                if (a[i] == a[j]){
                    count++;
                }
            }
            if (l == 0){
                max = count;
                ans = a[i];
                cout << ans << endl;
                l++;
            } else {
                if (count > max){
                        max = count;
                        ans = a[i];                
                }               
            }
        }
        return ans;
    }
};
