class Solution {
  public:
    bool sub(int n, vector<int>& arr, int sum, int i, int k)
    {
        if(sum > k )
        {
            return false;
        }
        if(i >= n)
        {
            return sum == k;
        }
        sub(n,arr,sum,i+1, k);
        sum+=arr[i];
        sub(n,arr,sum,i+1, k);
    }
    bool checkSubsequenceSum(int n, vector<int>& arr, int k) {
        // Code here
        return sub(n,arr,0,0, k);
    }
};