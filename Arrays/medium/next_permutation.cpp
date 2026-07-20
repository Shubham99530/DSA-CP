class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        vector<vector<int>>all;
        vector<int>temp = nums;
        sort(nums.begin(),nums.end());
        while(true)
        {
            all.push_back(nums);
            if(!next_permutation(nums.begin(),nums.end()))
            {
                break;
            }
        }
        for(int i=0; i<all.size(); i++)
        {
            if (all[i] == temp)
            {
                if(i == all.size()-1)
                {
                    return all[0];
                }
                return all[i+1];
            }
        }
        return nums;
    }
};