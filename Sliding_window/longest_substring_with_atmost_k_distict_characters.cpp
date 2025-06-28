#include<unordered_map>
int atmost(string &s, int k)
    {
        unordered_map<char,int>mp;
        // int count=0;
        int ans=-1;
        int r=0;
        int l=0;
        while(r<s.size())
        {
            mp[s[r]]++;
            while(mp.size() > k && l<=r)
            {
                mp[s[l]]--;
                // l++;
                if(mp[s[l]]==0)
                {
                    mp.erase(s[l]);
                }
                l++;
            }
            r++;
            if(mp.size() <= k)
            {
                ans = max(ans,r-l);
            }
        }
        return ans;
    }
int kDistinctChars(int k, string &str)
{
    // Write your code here
    return atmost(str,k);
}



