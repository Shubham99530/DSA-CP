class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int first=0;
        int second=0;
        while(second<nums.size())
        {
            if(nums[second] != 0)
            {
                swap(nums[first],nums[second]);
                first++;
            }
            second++;
        }   
    }
};