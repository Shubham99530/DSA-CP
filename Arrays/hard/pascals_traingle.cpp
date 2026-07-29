class Solution {
public:
    vector<int>gen_row(int r)
    {
        vector<int>output;
        long long int val = 1;
        output.push_back(val);
        for(int i=1;i<=r;i++)
        {
            val = val * (r-i+1) / i;
            output.push_back(val);
        }
        return output;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int i=0;i< numRows;i++)
        {
            vector<int>out = gen_row(i);
            ans.push_back(out);
        }
        return ans;
    }
};