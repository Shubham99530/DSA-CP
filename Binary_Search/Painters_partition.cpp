// User function template for C++

class Solution {
  public:
    int PossibleSolution(vector<int>&arr , int k, int p)
    {
        int num=1;
        int sum=arr[0];
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i]+sum > p )
            {
                num++;
                sum=arr[i];
            }
            else
            {
                sum+=arr[i];
            }
        }
        return num;
    }
    int minTime(vector<int>& arr, int k) {
        // code here
        int ans=-1;
        int maxi=INT_MIN;
        int sum=0;
        // if(arr.size() < k)
        // {
        //     return -1;
        // }
        for(auto it: arr)
        {
            maxi = max(maxi,it);
            sum+=it;
        }
        int low=maxi;
        int high = sum;
        while(low<=high)
        {
            int mid = low+(high-low)/2;
            if(PossibleSolution(arr, k , mid) <= k)
            {
                ans = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return ans;
        // return minimum time
    }
};