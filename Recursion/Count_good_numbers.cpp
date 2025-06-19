class Solution {
public:
    const long long MOD = 1e9 + 7;
    long long Pow(long long x, long long n)
    {
        x%=MOD;
        if(n == 0)
        {
            return 1;
        }
        if(n == 1)
        {
            return x;
        }
        if(x == 0 || x == 1)
        {
            return x;
        }
        if(n>0)
        {
            if(n%2 == 0)
            {
                return Pow(x*x,n/2)%MOD;
            }
            else
            {
                return (x*Pow(x,n-1)) % MOD ;
            }
        }
        else
        {
            return Pow(x,-n);
        }
    }
    int countGoodNumbers(long long n) {
        long long even = ((n+1)/2);
        long long odd = (n/2);
        return ((Pow(5,even) * Pow(4,odd))%MOD);
    }
};