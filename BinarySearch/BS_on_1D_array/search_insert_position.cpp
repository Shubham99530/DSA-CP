class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left=0;
        int right=nums.size()-1;
        int index=nums.size();
        while(left<=right)
        {
            int mid = left + (right - left)/2;
            if(nums[mid] < target)
            {
                left = mid + 1;
            }
            else
            {
                index = mid;
                right = mid - 1;
            }
        }    
        return index;
    }
};