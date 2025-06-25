class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int l =0;
        int r =0;
        unordered_map<int,int>mp;
        int ans = 0;
        while(r<fruits.size())
        {
            mp[fruits[r]]++;
            if(mp.size() > 2)
            {
                mp[fruits[l]]-=1;
                if(mp[fruits[l]] == 0)
                {
                    mp.erase(fruits[l]);
                }
                l++;
            }
            r++;
        }
        return r - l;
    }
};