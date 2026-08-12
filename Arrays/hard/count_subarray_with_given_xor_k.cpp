class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        // code here
        int ans=0;
        int curr_xor = 0;
        unordered_map<int,int>mp;
        mp[0]=1;
        for(int i=0;i<arr.size();i++)
        {
            curr_xor^=arr[i];
            int prefix_xor = curr_xor ^ k;
            if(mp.find(prefix_xor) != mp.end())
            {
                ans+=mp[prefix_xor];
            }
            mp[curr_xor]++;
        }
        return ans;
    }
};