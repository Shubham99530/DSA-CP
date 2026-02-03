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
    int countFreq(vector<int>& arr, int target) {
        // code here
        int first = find_first(arr,target);
        int last = find_last(arr,target);
        if(first==-1 && last == -1)
        {
            return 0;
        }
        return last-first+1;
    }
};

// link : https://practice.geeksforgeeks.org/problems/number-of-occurrences2259/1