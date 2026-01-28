class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>>min_heap;
        int i=0;
        while(i<k)
        {
            min_heap.push(nums[i]);
            i++;
        }
        while(i<nums.size())
        {
            if(nums[i] > min_heap.top())
            {
                min_heap.pop();
                min_heap.push(nums[i]);
            }
            i++;
        }
        return min_heap.top();
    }
};

// link : https://leetcode.com/problems/kth-largest-element-in-an-array/