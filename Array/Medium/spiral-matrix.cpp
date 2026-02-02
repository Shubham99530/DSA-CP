class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int m = matrix.size()-1;
        int n = matrix[0].size()-1;
        int start_row=0;
        int start_col=0;
        int count =0;
        int total = (m+1)*(n+1);
        while(count<total)
        {
            for(int i=start_col; count<total && i<=n ;i++)
            {
                ans.push_back(matrix[start_row][i]);
                count++;
            }
            start_row++;
            for(int i=start_row; count<total && i<=m ;i++)
            {
                ans.push_back(matrix[i][n]);
                count++;
            }
            n--;
            for(int i=n;count<total && i>=start_col ;i--)
            {
                ans.push_back(matrix[m][i]);
                count++;
            }
            m--;
            for(int i=m; count<total && i>=start_row ;i--)
            {
                ans.push_back(matrix[i][start_col]);
                count++;
            }
            start_col++;
        }
        return ans;
    }
};

// link : https://leetcode.com/problems/spiral-matrix/