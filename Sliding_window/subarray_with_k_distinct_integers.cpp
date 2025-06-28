class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atmost(nums,k)-atmost(nums,k-1);
    }
    int atmost(vector<int>& nums, int k)
    {
        int r=0;
        int l=0;
        unordered_map<int,int>mp;
        int ans=0;
        while(r<nums.size())   
        {
            mp[nums[r]]++;
            while(mp.size() > k && l<=r)
            {
                mp[nums[l]]--;
                if(mp[nums[l]] == 0)
                {
                    mp.erase(nums[l]);
                }
                l++;
            }
            ans+=(r-l);
            r++;
        }
        return ans;
    }
};