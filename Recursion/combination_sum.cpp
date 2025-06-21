class Solution {
public:
    void solve(vector<int>& candidates, int target, vector<vector<int>>& ans,vector<int>output,int i, int sum)
    {
        if(sum == target)
        {
            ans.push_back(output);
            return;
        }
        if(i >= candidates.size() || sum > target)
        {
            return;
        }
        solve(candidates, target, ans, output, i+1, sum);
        output.push_back(candidates[i]);
        sum+=candidates[i];
        solve(candidates, target, ans, output, i, sum);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int>output;
        solve(candidates, target, ans, output, 0, 0);
        return ans;
    }
};