class Solution {
public:
    int find_first(vector<int>nums , int target)
    {
        int start = 0;
        int end = nums.size()-1;
        int ans=-1;
        while(start <= end)
        {
            int mid = start + (end - start)/2;
            if(nums[mid] == target)
            {
                end = mid-1;
                ans = mid;
            }
            else if(nums[mid] > target)
            {
                end = mid-1;
            }
            else
            {
                start = mid+1;
            }
        }
        return ans;
    }
    int find_last(vector<int>nums , int target)
    {
        int start = 0;
        int end = nums.size()-1;
        int ans=-1;
        while(start <= end)
        {
            int mid = start + (end - start)/2;
            if(nums[mid] == target)
            {
                start = mid+1;
                ans = mid;
            }
            else if(nums[mid] < target)
            {
                start = mid+1;
            }
            else
            {
                end = mid-1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = find_first(nums,target);
        int last = find_last(nums,target);
        return {first,last};   
    }
};

// link : https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/