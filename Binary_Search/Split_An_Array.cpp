class Solution {
public:
    int possibleSum(vector<int>& nums, int k, int p)
    {
        int arr=1;
        int curr_sum=nums[0];
        for(int i=1; i<nums.size(); i++)
        {
            if(nums[i]+curr_sum > p)
            {
                arr++;
                curr_sum=nums[i];
            }
            else curr_sum+=nums[i];
        }
        return arr;
    }
    int splitArray(vector<int>& nums, int k) {
        int maxi=INT_MIN;
        int sum=0;
        if(nums.size()<k)
        {
            return -1;
        }
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            maxi=max(maxi,nums[i]);
        }
        int ans=-1;
        int low=maxi;
        int high=sum;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(possibleSum(nums,k,mid) <= k)
            {
                high=mid-1;
                ans=mid;
            }
            else
            {
                low = mid+1;
            }
        }
        return ans;
    }
};