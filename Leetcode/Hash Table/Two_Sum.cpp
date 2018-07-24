class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int len;
        len = nums.size();
        vector<int> two_sums;
        
        for (int i = 0; i < len - 1; i++){
            for (int j = i + 1; j < len; j++){
                if (nums[i] + nums[j] == target){
                    two_sums.push_back(i);
                    two_sums.push_back(j);
                }
            }
        }
        
        return two_sums;
    }
};
