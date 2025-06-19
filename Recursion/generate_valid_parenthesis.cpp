class Solution {
public:
    void solve(vector<string>& ans, string output, int n, int i, int j)
    {
        if(i == j && i + j == 2*n)
        {
            ans.push_back(output);
            return;
        }
        
        if (i < n) solve(ans,output+"(",n,i+1, j);
        if (j < i) solve(ans,output+")",n ,i,j+1);
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string output="";
        solve(ans,output,n,0,0);
        return ans;
    }
};