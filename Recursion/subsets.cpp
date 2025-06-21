class Solution {
public:
    void solve(vector<int>& nums, vector<vector<int>>& ans, vector<int> output, int n,int i)
    {
        if(i >= n)
        {
            ans.push_back(output);
            return;
        }
        solve(nums,ans,output,n,i+1);
        output.push_back(nums[i]);
        solve(nums,ans,output,n,i+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>output;
        solve(nums,ans,output,nums.size(),0);
        return ans;
    }
};