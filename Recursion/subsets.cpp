class Solution {
public:
    void solve(vector<vector<int>>&ans,vector<int> s,vector<int> out,int n)
    {
        if(n == s.size())
        {
            ans.push_back(out);
            return;
        }
        solve(ans,s,out,n+1);
        out.push_back(s[n]);
        solve(ans,s,out,n+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>output;
        solve(ans,nums,output,0);
        return ans;    
    }
};

