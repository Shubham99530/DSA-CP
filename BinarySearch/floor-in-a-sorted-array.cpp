class Solution {
  public:
    int findFloor(vector<int>& arr, int x) {
        // code here
        int start=0;
        int end = arr.size()-1;
        int ans=-1;
        while(start<=end)
        {
            int mid = start+(end - start)/2;
            if(arr[mid] <= x)
            {
                ans = mid;
                start = mid+1;
            }
            else
            {
                end = mid-1;
            }
        }
        return ans;
    }
};


// link : https://practice.geeksforgeeks.org/problems/floor-in-a-sorted-array-1587115620/1