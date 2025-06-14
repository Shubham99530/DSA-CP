class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> mp;
        unordered_map<char,char> used;
        if(s.size() != t.size())
        {
            return false;
        }
        for(int i=0; i<s.size(); i++)
        {
            if(mp.find(s[i]) == mp.end())
            {
                mp[s[i]] = i;
                // mp[t[i]] = s[i];
            }
            if(used.find(t[i]) == used.end())
            {
                used[t[i]] = i;
            }
            if(mp[s[i]] != used[t[i]])
            {
                return false;
            }
        }
        return true;
    }
};