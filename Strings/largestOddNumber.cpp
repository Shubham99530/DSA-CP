class Solution {
public:
    string largestOddNumber(string num) {
        string odd;
        int i=num.size()-1;
        while(i>=0)
        {
            char ch = num[i];
            int n = ch - '0';
            if(n%2 != 0)
            {
                break;
            }
            i--;
        }
        int j=0;
        while(j<=i)
        {
            odd+=num[j];
            j++;
        }
        return odd;
    }
};

// link : https://leetcode.com/problems/largest-odd-number-in-string/