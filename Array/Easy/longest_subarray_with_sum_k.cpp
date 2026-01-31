class Solution {
  public:
    int longestSubarray(vector<int>& nums, int k) {
        // code here
        int max_length=0;
        unordered_map<int,int>prefix_sum;
        int curr_sum=0;
        for(int i=0; i<nums.size();i++)
        {
            curr_sum+=nums[i];
            if(curr_sum == k)
            {
                max_length = max(max_length,i+1);
            }
            int prev_sum = curr_sum - k;
            if(prefix_sum.find(prev_sum) != prefix_sum.end())
            {
                int len = i - prefix_sum[prev_sum];
                max_length = max(max_length,len);
            }
            if(prefix_sum.find(curr_sum) == prefix_sum.end())
            {prefix_sum[curr_sum] = i;}
        }
        return max_length;
    }
};

// link : https://practice.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1