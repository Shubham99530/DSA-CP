class Solution {
public:
    bool check(vector<int> piles,int h,int ans)
    {
        int i=0;
        int hours=0;
        while(i<piles.size())
        {
            hours+=((piles[i] + ans -1)/ans);
            if(hours > h)
            {
                return false;
            }
            i++;
        }
        return hours <= h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int start=1;
        int end= -1;
        for(auto it:piles)
        {
            end = max(end,it);
        }
        int ans=0;
        while(start<=end)
        {
            int mid = start + (end - start)/2;
            if(check(piles,h,mid))
            {
                ans = mid;
                end = mid -1;
            }
            else
            {
                start = mid +1;
            }
        }
        return ans;
    }
};

// link = https://leetcode.com/problems/koko-eating-bananas/description/