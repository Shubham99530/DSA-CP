class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int maxi = INT_MIN;
        for(auto it:arr)
        {
            if(maxi < it)
            {
                maxi = it;
            }
        }
        return maxi;
    }
};
