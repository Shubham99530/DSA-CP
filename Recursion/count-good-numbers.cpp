class Solution {
public:
    const long long MOD = 1e9 + 7;
    long long solve(long long  x, long long n)
    {
        x%=MOD;
        if(x ==0 || x==1)
        {
            return x;
        }
        if(n == 0)
        {
            return 1;
        }
        if(n == 1)
        {
            return x;
        }
        if(n>0)
        {
            if(n%2 == 0 )
            {
                return solve(x*x,n/2)%MOD;
            }
            else
            {
                return x*solve(x,n-1)%MOD;
            }
        }
        else
        {
            return 1/(solve(x,-n));
        }
    }
    int countGoodNumbers(long long n) {
        long long even = (n+1)/2;
        long long odd = (n/2);
        return (solve(5,even) * solve(4,odd))%MOD;   
    }
};

// link : https://leetcode.com/problems/count-good-numbers/description/