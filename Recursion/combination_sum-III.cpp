class Solution {
public:
    void solve(int k, int n, vector<vector<int>>& ans, vector<int> output, int sum, int num)
    {
        if(sum == n)
        {
            if(output.size() == k)
            ans.push_back(output);
            return;
        }
        if(output.size() > k || num > 9)
        {
            return;
        }
        solve(k,n,ans,output,sum,num+1);
        output.push_back(num);
        sum+=num;
        solve(k,n,ans,output,sum,num+1);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        int sum=0;
        int num=1;
        vector<vector<int>>ans;
        vector<int>output;
        solve(k, n, ans, output, sum, num);
        return ans;
    }
};