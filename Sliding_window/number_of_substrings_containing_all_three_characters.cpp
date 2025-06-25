class Solution {
public:
    int numberOfSubstrings(string s) {
        int k=3;
        return atmost( s, k) - atmost( s,  k-1);
    }
    int atmost(string s, int k)
    {
        int l=0;
        int r=0;
        int count=0;
        int ans=0;
        unordered_map<char,int>mp;
        while(r<s.size())
        {
            mp[s[r]]++;
            while(mp.size() > k && l<=r)
            {
                mp[s[l]]--;
                if(mp[s[l]] == 0)
                {
                    mp.erase(s[l]);
                }
                l++;
            }
            ans+=(r-l);
            r++;
        }
        return ans;
    }
};