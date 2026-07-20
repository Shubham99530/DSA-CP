class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        // code here
        int n = arr.size();
        int curr_max = arr[n-1];
        vector<int>leaders;
        leaders.push_back(curr_max);
        for(int i=n-2;i>=0;i--)
        {
            if(arr[i] >= curr_max)
            {
                curr_max = arr[i];
                leaders.push_back(curr_max);
            }
        }
        reverse(leaders.begin(),leaders.end());
        return leaders;
    }
};