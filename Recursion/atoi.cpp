class Solution {
public:
    int solve(string s, int i, long long res, int sign)
    {
        if(!isdigit(s[i]) || i>=s.size())
        {
            return (int)(sign*res);
        }
        int num = s[i] - '0';
        res = res*(10) + num;
        if (sign*res >= INT_MAX) return INT_MAX;
        if (sign*res <= INT_MIN) return INT_MIN;
        return solve(s,i+1,res,sign);
    }
    int myAtoi(string s) {
        int n = s.size();
        int i=0;
        while(i<=n)
        {
            if(s[i] == ' ')
            {
                i++;
            }
            else break;
        }  
        int sign = 1;  
        if(i<n && (s[i] == '-' || s[i] == '+'))
        {
            if(s[i] == '-')
            {
                sign = -1;
            }
            else
            {
                sign = 1;
            }
            i++;
        }
        return solve(s,i,0,sign);
    }
};

// link : https://leetcode.com/problems/string-to-integer-atoi/description/