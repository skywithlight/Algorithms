class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int len = nums.size(), j = 0, tmp1, tmp2, tmp3, tmp4;

        vector <int> count(2001, 0);
        vector <int> element(len);

        for (int i = 0; i < len; i++)
            count[nums[i] + 1000]++;

        for (int i = 0; i < 2001; i++){
            if (count[i] > 0)
                while (count[i] > 0){
                    element[j] = i - 1000;
                    j++;
                    count[i]--;
                }
        }
        tmp1 = element[len - 1] * element[len - 2] * element[len - 3];
        tmp2 = element[len - 1] * element[len - 2] * element[0];
        tmp3 = element[len - 1] * element[1] * element[0];
        tmp4 = element[2] * element[1] * element[0];
        tmp1 = max (tmp1, tmp2);
        tmp3 = max (tmp3, tmp4);
        tmp1 = max (tmp1, tmp3);
        return tmp1;
    }
};
