class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int ans=0;
        int sum=0;
        for(int i=0;i<k;i++)
        {
            sum+=cardPoints[i];
        }
        ans= sum;
        for(int i=k-1;i>=0;i--)
        {
            sum-=cardPoints[i];
            sum+=cardPoints[cardPoints.size() - k + i];
            ans = max(ans,sum);
        }
        return ans;
    }
};