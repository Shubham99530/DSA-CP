class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        int j=0;
        while(j<nums.size())
        {
            if(nums[i]!=nums[j])
            {
                i+=1;
                swap(nums[i],nums[j]);
            }
            j+=1;
        }
        return i+1;
    }
};