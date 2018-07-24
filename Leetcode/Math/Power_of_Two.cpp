class Solution {
public:
    bool isPowerOfTwo(int n) {\
        int count = 0;
        bool ans = true;
        
        if (n <= 0)
            return false;
                              
        while (n > 1){
            if (n % 2 != 0)
                count++;
            n = n / 2;
        }
                   
        if (count != 0)
            ans = false;
                              
        return ans;
    }
};
