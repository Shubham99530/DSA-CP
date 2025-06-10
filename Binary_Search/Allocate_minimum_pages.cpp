class Solution {
  public:
    int possibleAllocation(vector<int>& arr, int k, int p)
    {
        int students =1;
        int curr_pages = 0;
        for(int i=0;i<arr.size();i++)
        {
            if(curr_pages+arr[i] > p)
            {
                students++;
                curr_pages = arr[i];
            }
            else curr_pages+=arr[i];
        }
        return students;
    }
    int findPages(vector<int> &arr, int k) {
        // code here
        int sum=0;
        int maxi=INT_MIN;
        if(arr.size() < k)
        {
            return -1;
        }
        for(int i=0;i<arr.size();i++)
        {
            sum+=arr[i];
            maxi=max(maxi,arr[i]);
        }
        int low=maxi;
        int high=sum;
        // sort(arr.begin(),arr.end());
        int ans=-1;
        while(low<=high)
        {
            int mid = low+(high-low)/2;
            if(possibleAllocation(arr,k,mid) <= k)
            {
                high=mid-1;
                ans=mid;
            }
            else
            {
                low=mid+1;
            }
        }
        return ans;
        
    }
};