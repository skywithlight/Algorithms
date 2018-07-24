class Solution {
public:
    bool judgeCircle(string moves) {
        int len, ans1 = 0, ans2 = 0, ans3 = 0, ans4 = 0;
        len = moves.length();
        
        bool ans = false;
        
        for (int i = 0; i < len; i++){
            if (moves[i] == 'U'){
                ans1++;
            }
            if (moves[i] == 'D'){
                ans2++;
            }
            if (moves[i] == 'R'){
                ans3++;
            }
            if (moves[i] == 'L'){
                ans4++;
            }
        }
        
        if (ans1 == ans2 && ans3 == ans4){
            ans = true;
        }
        
        return ans;
        
    }
};
