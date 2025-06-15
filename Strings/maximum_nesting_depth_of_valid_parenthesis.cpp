class Solution {
public:
    int maxDepth(string s) {
        int count=0;
        int max_count=0;
        for(auto i : s)
        {
            if(i == '(')
            {
                count++;
            }
            if(i == ')')
            {
                max_count=max(max_count,count);
                count--;
            }
        }
        return max_count;
    }
};