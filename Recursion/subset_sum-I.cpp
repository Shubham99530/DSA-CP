class Solution {
  public:
    void solve(vector<int>& arr, vector<int>& sum, int i, int curr_sum)
    {
        if(i == arr.size())
        {
            sum.push_back(curr_sum);
            return;
        }
        solve(arr,sum,i+1,curr_sum);
        curr_sum+=arr[i];
        solve(arr,sum,i+1,curr_sum);
    }
    vector<int> subsetSums(vector<int>& arr) {
        // code here
        vector<int>sum;
        solve(arr,sum,0,0);
        return sum;
    }
};