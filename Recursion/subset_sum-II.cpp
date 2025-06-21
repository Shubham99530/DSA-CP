class Solution {
public:
    void solve(vector<int>& nums, int i,vector<vector<int>>& ans,vector<int>output)
    {
        if(i == nums.size())
        {
            ans.push_back(output);
            return;
        }
        int index = i+1;
        while(index<nums.size() && nums[index] == nums[i])
        {
            index++;
        }
        solve(nums, index, ans, output);
        output.push_back(nums[i]);
        solve(nums,i+1,ans,output);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int>output;
        sort(nums.begin(),nums.end());
        solve(nums,0,ans,output);
        return ans;
    }
};