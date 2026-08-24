class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max_prod = nums[0];
        int min_prod = nums[0];
        int res=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            int p = nums[i];
            if(p < 0)
            {
                swap(max_prod,min_prod);
            }
            max_prod = max(p,max_prod*p);
            min_prod = min(p,min_prod*p);
            res = max(res,max_prod);
        }    
        return res;
    }
};