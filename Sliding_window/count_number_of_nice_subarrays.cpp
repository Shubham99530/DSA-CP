class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        return atmost(nums,k) - atmost(nums,k-1);
    }
    int atmost(vector<int>& nums, int k)
    {
        unordered_map<int,int>mp;
        int l=0;
        int r=0;
        int ans=0;
        int count=0;
        while(r<nums.size())
        {
            if(nums[r]%2 != 0)
            {
                count++;
            }
            while(count>k && l<=r)
            {
                if(nums[l]%2 != 0)
                {
                    count--;
                }
                l++;
            }
            ans+=(r-l+1);
            r++;
        }
        return ans;
    }
};