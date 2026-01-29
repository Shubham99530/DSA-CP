class Solution {
public:
    void reverse(vector<int>& nums, int i, int j)
    {
        while(i<j)
        {
            swap(nums[i++],nums[j--]);
        }
    }
    void rotate(vector<int>& nums, int k) {
        k = k%nums.size();
        reverse(nums,nums.size()-k,nums.size()-1);
        reverse(nums,0,nums.size()-k-1);
        reverse(nums,0,nums.size()-1);
    }
};