class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0)
        {
            return 0;
        }
        unordered_set<int>s;
        for(int i = 0; i < nums.size(); i++)
        {
            s.insert(nums[i]);
        }
        int cnt=1;
        for(auto it:s)
        {
            if(s.find(it-1) == s.end())
            {
                int curr=it;
                int curr_cnt=1;
                while(s.find(curr+1) != s.end())
                {
                    curr_cnt+=1;
                    curr+=1;
                }
                cnt = max(cnt,curr_cnt);
            }
        }
        return cnt;

    }
};