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
        int index = i+1;
        while(index<candidates.size() && candidates[index] == candidates[i])
        {
            index++;
        }
        solve(candidates, target, ans, output, index, sum);
        output.push_back(candidates[i]);
        sum+=candidates[i];
        solve(candidates, target, ans, output, i+1, sum);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int>output;
        sort(candidates.begin(),candidates.end());
        solve(candidates, target, ans, output, 0, 0);
        return ans;
    }
};