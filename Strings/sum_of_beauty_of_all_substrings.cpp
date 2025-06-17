class Solution {
public:
    int substring(string s)
    {
        int res=0;
        for(int i=0;i<s.size(); i++)
        {   
            unordered_map<char,int>mp;
            for(int j=i; j<s.size(); j++)
            {
                mp[s[j]]++;
                int mini=INT_MAX;
                int maxi=INT_MIN;
                for(auto it:mp)
                {
                    if(it.second == 0)
                    {
                        continue;
                    }
                    maxi = max(maxi,it.second);
                    mini = min(mini,it.second);
                }
                if(mini == INT_MAX) mini = maxi;
                res+=(maxi-mini);
            }
        }
        return res;
    }
    int beautySum(string s) {
        return substring(s);
    }
};