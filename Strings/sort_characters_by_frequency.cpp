class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(auto i:s)
        {
            mp[i]++;
        }
        vector<pair<int,char>>p;
        for(auto it:mp)
        {
            p.push_back({it.second,it.first});
        }
        sort(p.begin(),p.end());
        string ans = "";
        for(int i=p.size()-1;i>=0;i--)
        {
            for(int j=0;j<p[i].first;j++)
            {
                ans+=p[i].second;
            }
        }
        return ans;
    }
};