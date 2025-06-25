class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return atMost(nums,goal) - atMost(nums,goal-1);
    }
    int atMost(vector<int>& nums, int goal)
    {
        int l=0;
        int r = 0;
        int sum=0;
        int count = 0;
        while(r<nums.size())
        {
            sum+=nums[r];
            while(sum > goal && l<=r)
            {
                sum-=nums[l];
                l++;
            }
            count+= r - l + 1;
            r++;
        }
        return count;
    }
};