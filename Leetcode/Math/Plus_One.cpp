class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int len, k = 1, s = 0;
        len = digits.size();
        
        vector<int> nums(len + 1);
        
        for (int i = len - 1; i >= 0; i--){
            if (digits[i] + k < 10){
                    nums[i + 1] = digits[i] + k;
                    k = 0;                    
            } else {
                if (i == 0){
                    s++;
                }
                nums[i] = 0;
                k = 1;
            }
        }
        
        if (s != 0){
            nums[0] = 1;
        } else {
            if (nums[0] == 0){
                for (int i = 0; i < len; i++){
                    nums[i] = nums[i + 1];
                }
                nums.pop_back();
            }            
        }
        
        return nums;

    }
};
