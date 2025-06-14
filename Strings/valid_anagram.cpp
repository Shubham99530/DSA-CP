class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> sp;
        unordered_map<char,int> tp;

        if(s.size() != t.size())
        {
            return false;
        }
        for(int i=0; i<s.size(); i++)
        {
            sp[s[i]]++;
            tp[t[i]]++;
        }
        int j=0;
        while(sp[s[j]] == tp[s[j]])
        {
            j++;
            if(j == s.size())
            {
                return true;
            }
        }
        return false;
    }
};