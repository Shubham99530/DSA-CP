int floorSqrt(int n) {
    // Your code goes here
    int start=0;
    int end = n;
    int ans=-1;
    while(start <= end)
    {
        int mid = start + (end - start)/2;
        if(mid*mid <= n)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid-1 ;
        }
    }
    return ans;
}

// link = https://practice.geeksforgeeks.org/problems/square-root/1