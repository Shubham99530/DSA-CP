class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        long long prefix_sum=0;
        long long curr_sum=0;
        int max_len = 0;
        unordered_map<long long int,int>mp;
        for(int i=0;i<arr.size();i++)
        {
            curr_sum+=arr[i];
            if(curr_sum == k)
            {
                max_len = i+1;
            }
            else
            {
                prefix_sum = curr_sum-k;
                if(mp.find(prefix_sum)!= mp.end())
                {
                    max_len = max(max_len, i-mp[prefix_sum]);
                }
                if (mp.find(curr_sum) == mp.end())
                {
                    mp[curr_sum] = i;
                }
            }
        }
        return max_len;
    }
};