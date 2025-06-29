class Solution {
public:
    string minWindow(string s, string t) {
        if(s.size() < t.size())
        {
            return "";
        }

        unordered_map<char,int>t_char;
        for(auto it:t)
        {
            t_char[it]++;
        }

        int tchar_len = t.size();
        int minWindow[2] = {0,INT_MAX};
        int l=0;
        int r=0;
        while(r<s.size())
        {
            if(t_char.find(s[r]) != t_char.end() && t_char[s[r]] > 0)
            {
                tchar_len--;
            }
            t_char[s[r]]--;
            if(tchar_len == 0)
            {
                while(true)
                {
                    if(t_char.find(s[l])!= t_char.end() && t_char[s[l]] == 0)
                    {
                        break;
                    }
                    t_char[s[l]]++;
                    l++;
                }
                if(r - l < minWindow[1] - minWindow[0])
                {
                    minWindow[0] = l;
                    minWindow[1] = r;
                }
                t_char[s[l]]++;
                tchar_len++;
                l++;
            }
            r++;
        }
        if(minWindow[1] >= s.size())
        {
            return "";
        }
        else
        {
            return s.substr(minWindow[0], minWindow[1] - minWindow[0] + 1);
        }
    }
};