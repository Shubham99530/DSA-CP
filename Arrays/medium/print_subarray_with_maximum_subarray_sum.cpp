class Solution {
  public:
    vector<int> findSubarray(vector<int>& arr) {
        // code here
        int ansStart=-1;
        int ansEnd=-1;
        int start = 0;
        int max_len=0; // this condition is also necessary in this case
        vector<int>ans;
        int curr_sum=0;
        int max_sum=INT_MIN;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i] < 0)
            {
                start=i+1;
                curr_sum=0;
            }
            else{
                curr_sum+=arr[i];
                
                if(curr_sum > max_sum || (curr_sum == max_sum && i-start+1 > max_len))
                {
                    ansStart = start;
                    ansEnd = i;
                    max_sum = curr_sum;
                    max_len = ansEnd - ansStart + 1;
                }
            }
            
        }
        for(int i=ansStart;i<=ansEnd;i++)
        {
            ans.push_back(arr[i]);
        }
        
        if(ansStart == -1)
        {
            return {-1};
        }
        return ans;
    }
};