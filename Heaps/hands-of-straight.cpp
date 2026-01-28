class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupsize) {
        if(hand.size() % groupsize != 0)
        {
            return false;
        }
        map<int,int>mp;
        for(auto it:hand)
        {
            mp[it]++;
        }
        auto it = mp.begin();
        while(it!=mp.end())
        {
            if(it->second == 0)
            {
                it++;
                continue;
            }
            int start = it->first;
            int count = it->second;
            for(int i=0;i<groupsize;i++)
            {
                if(mp[start + i] < count) return false;
                mp[start+i]-=count;
            }
            it++;
        }
        return true;
    }
};

// link : https://leetcode.com/problems/hand-of-straights/