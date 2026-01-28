class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        if (nums.size()%k != 0)
        {
            return false;
        }
        map<int,int>mp;
        for(auto it:nums)
        {
            mp[it]++;
        }
        auto it = mp.begin();
        while(it != mp.end())
        {
            if (it->second == 0)
            {
                ++it;
                continue;
            }
            int groupsize = k;
            int start = it->first;
            int count = it->second;
            for(int i=0; i<groupsize; i++)
            {
               if (mp[start+i] < count) return false;
               mp[start+i] -= count;
            }
            it++;
        }
        return true;
    }
};

// link : https://leetcode.com/problems/divide-array-in-sets-of-k-consecutive-numbers/