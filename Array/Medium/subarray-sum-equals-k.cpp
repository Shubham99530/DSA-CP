class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> prefix_sum;
        int curr_sum=0;
        int ans=0;
        for(auto it : nums)
        {
            curr_sum+=it;
            if(curr_sum == k)
            {
                ans++;
            }
            int prev_sum = curr_sum-k;
            if(prefix_sum.find(prev_sum) != prefix_sum.end())
            {
                ans+=prefix_sum[prev_sum];
            }
            prefix_sum[curr_sum]++;
        }
        return ans;
    }
};

// link : https://leetcode.com/problems/subarray-sum-equals-k/