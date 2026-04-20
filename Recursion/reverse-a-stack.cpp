class Solution {
  public:
    void insertbottom(stack<int>&st,int val)
    {
        if(st.empty())
        {
            st.push(val);
            return;
        }
        int temp = st.top();
        st.pop();
        insertbottom(st,val);
        st.push(temp);
    }
    void reverseStack(stack<int> &st) {
        // code here
        if(st.empty())
        {
            return;
        }
        int temp = st.top();
        st.pop();
        reverseStack(st);
        insertbottom(st,temp);
    }
};

// link : https://practice.geeksforgeeks.org/problems/reverse-a-stack/1