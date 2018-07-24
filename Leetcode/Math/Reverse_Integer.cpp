class Solution {
public:
    int reverse(int x) {
        long long rev = 0;
        
        if (x == -2147483412){
            while (x != 0){
                rev = rev * 10 + x % 10;
                x = x / 10;
            }
        }
        
        if (x >= 1534236469 || x <= -1563847412){
            return 0;
        }
        
        while (x != 0){
            rev = rev * 10 + x % 10;
            x = x / 10;
        }
        
        return rev;
    }
};
