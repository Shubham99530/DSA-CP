class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max_prod = nums[0];
        int min_prod = nums[0];
        int res = nums[0];
        // int curr_prod = 1;
        for(int i=1;i<nums.size();i++)
        {
            int it = nums[i];
            // cout<<curr_prod<<endl;
            if(it < 0)
            {
                swap(min_prod,max_prod);
            }
            min_prod = min(min_prod*it,it);
            max_prod = max(max_prod*it,it);

            res = max(max_prod,res);
        }    
        return res;
    }
};

// link : https://leetcode.com/problems/maximum-product-subarray/