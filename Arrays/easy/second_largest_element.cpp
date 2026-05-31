class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int first=-1;
        int second = -1;
        for(auto it: arr)
        {
            if(it>first)
            {
                second = first;
                first = it;
            }
            if(it > second && it < first)
            {
                second = it;
            }
            
        }
        return second;
    }
};