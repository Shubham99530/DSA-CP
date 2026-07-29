class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int>horizontal(m,0);
        vector<int>vertical(n,0);
        for(int i=0; i<m; i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j] == 0)
                {
                    horizontal[i] = 1;
                    vertical[j] = 1;
                }
            }
        }    
        for(int i=0; i<m; i++)
        {
            for(int j=0;j<n;j++)
            {
                if(horizontal[i] || vertical[j] )
                {
                    matrix[i][j] = 0;
                }
            }
        } 
    }
};