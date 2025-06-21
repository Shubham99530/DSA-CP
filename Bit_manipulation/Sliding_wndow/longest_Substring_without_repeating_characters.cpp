class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left =0;
        int ans =0;
        unordered_map<char,int>mp;
        for(int right =0; right<s.size(); right++)
        {
            char c = s[right];
            mp[c]++;
            while(mp[c] > 1)
            {
                char lc = s[left];
                mp[lc]--;
                left++;
            }
            ans = max(ans,right-left+1);
        }
        return ans;
    }
};