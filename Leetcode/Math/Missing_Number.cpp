class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int len, sum1 = 0, sum2 = 0;
        len = nums.size();
        
        for (int i = 0; i < len; i++){
            sum1 = sum1 + nums[i];
        }
        
        sum2 = (len) * (len + 1) / 2;
        
        sum2 = sum2 - sum1;
        
        return sum2;
    }
};
