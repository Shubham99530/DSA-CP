class Solution {
public:
    long solve(string s, int i, long ans, int sign)
    {
        if (i == s.size() || isdigit(s[i]) != true)
        {
            return ans;
        }
        ans = ans*10 + s[i] - '0';
        if( ans * sign > INT_MAX && sign == 1) return INT_MAX;
        if( ans * sign < INT_MIN && sign == -1) return INT_MIN;
        return solve(s,i+1,ans,sign);
    }
    int myAtoi(string s) {
        long ans=0;
        int i=0;
        int n= s.size();
        while(i<n && s[i] == ' ')
        {
            i++;
        } 
        if(i == n)
        {
            return 0;
        }
        int sign=1;
        if(s[i] == '-') 
        {
            sign = -1;
            i++;
        }
        else if(s[i] == '+')
        {
            sign =1;
            i++;
        }
        // while(i<n && isdigit(s[i]))
        // {
        //     ans=ans*10+(s[i]-'0');
        //     if( ans * sign > INT_MAX && sign == 1) return INT_MAX;
        //     if( ans * sign < INT_MIN && sign == -1) return INT_MIN;
        //     i++;
        // }
        return (int)(solve(s,i,ans,sign)*sign);
    }
};