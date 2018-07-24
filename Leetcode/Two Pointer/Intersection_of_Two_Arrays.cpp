class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int len, len2;
        
        len = nums1.size();
        len2 = nums2.size();
        
        vector<int> count(50000, 0);
        vector<int> count2(50000, 0);
        vector<int> ans;
        
        for (int i = 0; i < len; i++){
            count[nums1[i]]++;
        }
        for (int i = 0; i < len2; i++){
            count2[nums2[i]]++;
        }
        
        for (int i = 0; i < 50000; i++){
            if (count[i] > 0 && count2[i] > 0){
                ans.push_back(i);
            }
        }
        
        return ans;
    }
};
