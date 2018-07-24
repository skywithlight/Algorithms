class Solution {
public:
    bool isHappy(int n) {
        
        int ans = 0, count = 0;
        
        bool checker = false;
        
        do {
            
            count++;
            
            if (count == 100){
                return false;
            }
            
            while (n > 0){
                ans = ans + (n % 10) * (n % 10);
                n = n / 10;
            }
            
            if (ans == 1){
                checker = true;
            }
            
            n = ans;
            ans = 0;
            
            
        } while (checker == false);
        
        return checker;
        
    }
};
