class Solution {
  public:
    int minCost(vector<int>& arr) {
        // code here
        priority_queue<int,vector<int>,greater<int>> q;
        int i=arr.size()-1;
        int ans=0;
        for(auto i:arr)
        {
            q.push(i);
        }
        while(i>=1)
        {
            int a = q.top();
            q.pop();
            int b = q.top();
            q.pop();
            int c =(a+b);
            q.push(c);
            // cout<<c<<endl;
            ans+=c;
            // cout<<ans<<endl;
            i--;
        }
        return ans;
    }
};

// link : https://www.geeksforgeeks.org/problems/minimum-cost-of-ropes-1587115620/1