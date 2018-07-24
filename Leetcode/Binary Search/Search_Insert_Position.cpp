class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int len, r, ans, l = 0;
        len = nums.size();
        
        r = len - 1;
        while (l <= r){
            int m = (l + r) / 2;
            if (nums[m] == target){
                l = m;
                r = m;
                break;
            }
            if (nums[m] < target)
                l = m + 1;

            if (nums[m] > target)
                r = m - 1;    
        }
        
        if (abs(target -  nums[l]) > abs(target - nums[r]))
            ans = r + 1;
        else 
            ans = l;
        
        return ans;

    }
};
