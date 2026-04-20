class Solution {
public:
    void solve(vector<string>&ans, string s, int n, int i, int j)
    {
        if(i == j && i+j ==2*n)
        {
            ans.push_back(s);
            return;
        }
        if ( i < n) solve(ans,s+"(", n, i+1, j);
        if(j<i) solve(ans,s+")",n,i,j+1);
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string s;
        solve(ans,s,n,0,0);
        return ans;
    }
};

// link : https://leetcode.com/problems/generate-parentheses/description/