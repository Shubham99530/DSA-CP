class Solution {
  public:
    int kthSmallest(vector<int> &arr, int k) {
        // code here
        priority_queue<int>q;
        int i=0;
        while(i<k)
        {
            q.push(arr[i++]);
        }
        int n=arr.size();
        while(i<n)
        {
            if(arr[i]<q.top())
            {
                q.pop();
                q.push(arr[i]);
            }
            i++;
        }
        return q.top();
    }
};

// question link : https://www.geeksforgeeks.org/problems/kth-smallest-element5635/1