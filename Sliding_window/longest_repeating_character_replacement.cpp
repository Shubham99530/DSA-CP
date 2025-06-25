class Solution {
public:
    int characterReplacement(string s, int k) {
        int l =0;
        int r =0;
        int maxi=0;
        int ans=0;
        unordered_map<char,int>mp;
        while(r<s.size())
        {
            mp[s[r]]++;
            maxi = max(maxi,mp[s[r]]);
            if((r-l+1) - maxi > k)
            {
                mp[s[l]]--;
                l++;
            }
            ans = max(ans,r-l+1);
            r++;
        }
        return ans;
    }
};