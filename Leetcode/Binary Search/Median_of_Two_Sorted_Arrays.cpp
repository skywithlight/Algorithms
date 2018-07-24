class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int i = 0, j = 0;
        while (i != nums1.size() && j != nums2.size()){
            if (nums1[i] <= nums2[j]){
                ans.push_back(nums1[i]);
                i++;
            }
            else{   
                ans.push_back(nums2[j]);
                j++;
            }
        }   

        while (j < nums2.size()){
            ans.push_back(nums2[j]);
            j++;
        }
        while (i < nums1.size()){
            ans.push_back(nums1[i]);
            i++;
        }
        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] << ' ';
        cout << endl;
        double sum;
        if (ans.size() % 2 == 0){
            sum += ans[ans.size() / 2];
            cout << sum << endl;
            sum += ans[(ans.size() / 2) - 1];
            cout << sum << endl;
            return sum / 2;
        } else {
            sum += ans[ans.size() / 2];
            return sum;
        }
    }
};
