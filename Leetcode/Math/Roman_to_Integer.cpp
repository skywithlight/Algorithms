class Solution {
public:
    int romanToInt(string s) {
        int len = s.length(), prev, tmp = 0, ans = 0, check = 1;

        vector <pair<char, int> > rom(7);

        rom[0].first = 'I';
        rom[1].first = 'V';
        rom[2].first = 'X';
        rom[3].first = 'L';
        rom[4].first = 'C';
        rom[5].first = 'D';
        rom[6].first = 'M';
        rom[0].second = 1;
        rom[1].second = 5;
        rom[2].second = 10;
        rom[3].second = 50;
        rom[4].second = 100;
        rom[5].second = 500;
        rom[6].second = 1000;
        
        for (int i = len - 1; i >= 0; i--){
            for(int j = 0; j < 7; j++)
                if (s[i] ==rom[j].first){
                    tmp = j;
                    if (check == 0){
                        prev = rom[tmp].second;
                        check = 1;
                    }
                    break;
                }
            if (i != len - 1){
                if(rom[tmp].second < prev && check == 1){
                    ans = ans - rom[tmp].second;
                    check = 0;
                }
                else
                    ans = ans + rom[tmp].second;
            }
            else    
                ans = ans + rom[tmp].second;
                cout << ans << endl;
            prev = rom[tmp].second;
        }
   
        return ans;
    }
};
