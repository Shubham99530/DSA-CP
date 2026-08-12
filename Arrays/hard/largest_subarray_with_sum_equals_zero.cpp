class Solution {
  public:
    int maxLength(vector<int>& arr) {
        // code here
        int max_len=0;
        int curr_sum=0;
        unordered_map<int,int>prefix;
        for(int i=0;i<arr.size();i++)
        {
            curr_sum+=arr[i];
            if(curr_sum == 0)
            {
                max_len = i+1;
            }
            else
            {
                if(prefix.find(curr_sum) != prefix.end())
                {
                    max_len = max(max_len, i-prefix[curr_sum]);
                }
                else
                {
                prefix[curr_sum] = i;
                }
            }
        }
        return max_len;
    }
};