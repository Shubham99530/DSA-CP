class Solution {
public:
    void merge(vector<int>& nums, int low, int mid, int high)
    {
        vector<int>temp;
        // int count=0;
        int left = low;
        int right = mid+1;
        while(left <= mid && right <= high)
        {
            if(nums[left] < nums[right])
            {
                temp.push_back(nums[left++]);
            }
            else
            {
                temp.push_back(nums[right++]);
            }
        }
        while(left <= mid)
        {
            temp.push_back(nums[left++]);
        }
        while(right<=high)
        {
            temp.push_back(nums[right++]);
        }
        for(int i=low;i<=high;i++)
        {
            nums[i] = temp[i-low];
        }
        // return;
    }
    int count_pairs(vector<int>& nums, int low, int mid, int high)
    {
        int count=0;
        int right = mid+1;
        for(int i=low; i<=mid;i++)
        {
            while(right<= high && nums[i] > 2*(long long)nums[right])
            {
                right++;
            }
            count+=(right - (mid+1));
        }
        return count;
    }
    int mergesort(vector<int>& nums, int low, int high)
    {
        int count=0;
        int mid = low + (high - low) / 2;
        if(low >= high)
        {
            return count;
        }
        count+=mergesort(nums, low, mid);
        count+=mergesort(nums, mid+1, high);
        count+=count_pairs(nums,low,mid,high);
        merge(nums, low, mid, high);
        return count;
    }
    int reversePairs(vector<int>& nums) {
        return mergesort(nums, 0, nums.size()-1);      
    }
};