class Solution {
public:
    string largestOddNumber(string num) {
        string ans="";
        int i=num.size()-1;
        while( i>=0 && ((int)(num[i]) %2 == 0))
        {
            i--;
        }
        for(int j=0;j<=i;j++)
        {
            ans+=num[j];
        }
        return ans;
    }
};