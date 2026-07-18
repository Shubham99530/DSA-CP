class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ans(nums.size());
        int pos=0;
        int neg=1;
        for(auto it:nums)
        {
            if(it < 0)
            {
                ans[neg] = it;
                neg+=2;
            }
            else
            {
                ans[pos] = it;
                pos+=2;
            }
        }    
        return ans;
    }
};