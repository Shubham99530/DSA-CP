class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ans(nums.size(),0);
        int posindex =0;
        int negindex=1;
        for(auto it:nums)
        {
            if(it>=0)
            {
                ans[posindex] = it;
                posindex+=2;
            }
            else
            {
                ans[negindex] = it;
                negindex+=2;
            }
        }
        return ans;
    }
};

// link : https://leetcode.com/problems/rearrange-array-elements-by-sign/