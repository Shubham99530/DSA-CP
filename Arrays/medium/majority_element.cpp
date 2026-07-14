class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int element = nums[0];
        for(auto it : nums)
        {
            if (count == 0)
            {
                element = it;
            }
            if(element == it)
            {
                count++;
            }
            else
            {
                count--;
            }
        }    
        return element;
    }
};