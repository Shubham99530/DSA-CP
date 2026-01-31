class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int element=0;
        for(auto it:nums)
        {
            if(count == 0) element = it;
            if(element  == it)
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

// link : https://leetcode.com/problems/majority-element/