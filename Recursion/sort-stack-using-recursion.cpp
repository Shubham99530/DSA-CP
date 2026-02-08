class Solution {
  public:
    void sortStack(stack<int> &st) {
        // code here
        if(st.empty())  return;
        int top = st.top();
        st.pop();
        sortStack(st);
        SortedInsert(st,top);
    }
    void SortedInsert(stack<int> &st,int val)
    {
        if(st.empty() || val > st.top())
        {
            st.push(val);
            return;
        }
        int temp = st.top();
        st.pop();
        SortedInsert(st,val);
        st.push(temp);
    }
};

// link : https://practice.geeksforgeeks.org/problems/sort-a-stack/1