// #include <iostream>
// #include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

int fibonacci_rec(int n)
{
    if (n==0)
    {
        return 0;
    }
    else if (n==1)
    {
        return 1;
    }
    else return fibonacci_rec(n-1)+fibonacci_rec(n-2);
}

int dp[1001];
memset(dp, -1,sizeof(dp));

int fibonacci_memoization(int n)
{
    if (n==0)
    {
        return 0;
    }
    else if (n==1)
    {
        return 1;
    }
    else
    {

    }
}

int main()
{
    
    return 0;
}