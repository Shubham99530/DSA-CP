class Solution {
public:
    void solve(string digits,int index,string output,vector<string>&ans,string* mp)
    {
        if(index>=digits.length())
        {
            ans.push_back(output);
            return;
        }
        int n = digits[index] - '0';
        string value = mp[n];
        for(int i=0;i<value.length();i++)
        {
            output.push_back(value[i]);
            solve(digits,index+1,output,ans,mp);
            output.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.length() == 0)
        {
            return ans;
        }
        string output = "";
        int index=0;
        string mp[10]= {"", "" , "abc", "def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(digits,index,output,ans,mp);
        return ans;
    }
};