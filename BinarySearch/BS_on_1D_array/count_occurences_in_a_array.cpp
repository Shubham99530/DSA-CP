class Solution {
  public:
    int first(vector<int>& nums, int target)
    {
        int left=0;
        int right = nums.size()-1;
        int first=-1;
        while(left<=right)
        {
            int mid = left + (right - left)/2;
            if(nums[mid] == target)
            {
                first = mid;
                right = mid-1;
            }
            else if ( nums[mid] > target)
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
        return first;
    }
    int last(vector<int>& nums, int target)
    {
        int left=0;
        int right = nums.size()-1;
        int last=-1;
        while(left<=right)
        {
            int mid = left + (right - left)/2;
            if(nums[mid] == target)
            {
                last = mid;
                left = mid+1;
            }
            else if ( nums[mid] > target)
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
        return last;
    }
    int countFreq(vector<int>& arr, int target) {
        // code here
        if (last(arr,target)== -1 && first(arr,target) == -1)
        {
            return 0;
        }
        return last(arr,target) - first(arr,target) + 1;
    }
};
