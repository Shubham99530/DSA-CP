class Solution {
  public:
    bool checkKthBit(int n, int k) {
        //  code here
        string num="";
        while(n>0)
        {
            char i = '0' + (n%2);
            num = num + i;
            n = n/2;
        }
        if(k>num.size())
        {
            return false;
        }
        if(num[k] == '1')
        {
            return true;
        }
        return false;
    }
};class Solution {
  public:
    bool checkKthBit(int n, int k) {
        //  code here
        string num="";
        while(n>0)
        {
            char i = '0' + (n%2);
            num = num + i;
            n = n/2;
        }
        if(k>num.size())
        {
            return false;
        }
        if(num[k] == '1')
        {
            return true;
        }
        return false;
    }
};