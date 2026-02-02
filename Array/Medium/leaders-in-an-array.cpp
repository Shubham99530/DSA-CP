

class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        // code here
        int leader = arr[arr.size()-1];
        vector<int>ans;
        ans.push_back(leader);
        for(int i=arr.size()-2;i>=0;i--)
        {
            if(arr[i] >= leader)
            {
                ans.push_back(arr[i]);
                leader = arr[i];
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

// link : https://practice.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1