// User function Template for C++

class Solution {
  public:
    void solve(int num, int i, vector<string>& ans, string output)
    {
        if(i == num)
        {
            ans.push_back(output);
            return;
        }
        if(i == 0)
        {
            solve(num,i+1,ans,"0");
            solve(num,i+1,ans,"1");
        }
        else
        {
            if(output[i-1] == '0')
            {
                solve(num,i+1,ans,output+'0');
                solve(num,i+1,ans,output+'1');
            }
            else 
            {
                solve(num,i+1,ans,output+'0');
            }
        }
    }
    vector<string> generateBinaryStrings(int num) {
        // Write your code
        vector<string>ans;
        string output="";
        int i=0;
        solve(num,i,ans,output);
        return ans;
    }
};