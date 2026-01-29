class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int first=INT_MIN;
        int second = first;
        for(auto it:arr)
        {
            if(second < it && first != it)
            {
                second = it;
            }
            if(first < it)
            {
                second = first;
                first = it;
            }
            
        }
        if(second  == INT_MIN)
        {
            return -1;
        }
        return second;
        
    }
};