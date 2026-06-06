class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        // I am using XOR method in this case first 
        int xor1=0;
        for(auto it:arr)
        {
            xor1^=it;
        }
        int xor2=0;
        for(int i=1;i<=arr.size()+1;i++)
        {
            xor2^=i;  
        }
        return xor1^xor2;
    }
};