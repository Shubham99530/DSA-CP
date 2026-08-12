class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int missing=0;
        int repeated=0;
        int set_sum=0;
        set<int>nums;
        for(auto i: grid)
        {
            for(auto j : i)
            {
                if(nums.find(j) != nums.end())
                {
                    repeated = j;
                }
                else
                {
                    set_sum+=j;
                    nums.insert(j);
                }
            }
        }    
        int n = (grid.size() * grid[0].size());
        int sum = n * ( n + 1) /2;
        cout<<sum<<endl;
        missing = sum - set_sum;
        return {repeated, missing};
    }
};