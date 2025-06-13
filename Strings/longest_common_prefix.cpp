class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        sort(strs.begin(),strs.end()); // Sort the strings lexicographically
        int s = strs.size();
        string n = strs[0] , m = strs[s-1]; // Get the first and last strings after sorting
        for(int i=0; i<n.size() ; i++) 
        {
            if(n[i] == m[i]) // Compare characters of the first and last strings
            {
                ans+=n[i]; // If they match, add to the answer
            }
            else break;
        }
        return ans;
    }
};