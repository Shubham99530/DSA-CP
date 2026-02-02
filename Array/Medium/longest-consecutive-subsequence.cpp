class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>s;
        sort(nums.begin(),nums.end());
        if(nums.size() == 0)
        {
            return 0;
        }
        for(auto it:nums)
        {
            s.insert(it);
        }
        int j=0;
        for(auto it:s)
        {
            nums[j++] = it;
        }
        int count=1;
        int ans=1;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i+1] == nums[i]+1)
            {
                count++;
                ans = max(count,ans);
            }
            else
            {
                count = 1;
            }
        }
        return ans;
    }
};

// link : https://leetcode.com/problems/longest-consecutive-sequence/