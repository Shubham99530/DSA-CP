class Solution {
public:
    double solve(double x, long n)
    {
        if(n==0)
        {
            return 1;
        }
        if(n==1)
        {
            return x;
        }
        if(x == 0 || x == 1)
        {
            return x;
        }
        if (n > 0){ 
           if(n%2 != 0) return x*solve(x,n-1);
           else return solve(x*x,n/2); 
           }
        else return 1/( solve(x,-n));    }
    double myPow(double x, int n) {
        long nn = n;
        return (double)(solve(x,nn));
    }
};