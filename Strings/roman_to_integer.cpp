class Solution {
public:
    int romanToInt(string s) {
       unordered_map<char,int>mp = {{'I' , 1}, {'V', 5}, {'X',10}, {'L',50}, {'C',100},{'D',500}, {'M',1000}};
       int p,q = 0;
       int ans=0;
       for(auto i : s)
       {
            q = p;
            p = mp[i];
            if(p > q)
            {
                ans = ans+(p - 2*q);
            }
            else
            {
                ans+=p;
            }
       }
       return ans;
    }
};