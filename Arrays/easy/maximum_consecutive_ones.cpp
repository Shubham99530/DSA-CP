class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_count=0;
        int count=0;
        for(auto it : nums)
        {
            if(it == 0)
            {
                max_count = max(max_count,count);
                count=0;
            }
            else
            count++;
        }    
        return max(max_count,count);
    }
};