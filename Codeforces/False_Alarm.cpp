#include<iostream>
using namespace std;

int main()
{
    int test_cases;
    cin >> test_cases;
    for(int i = 0; i < test_cases; i++)
    {
        int n, k;
        cin >> n >> k;
        int doors[n];
        for(int j = 0; j < n; j++)
        {
            cin >> doors[j];
        }
        bool output = true;
        bool flag = false;
        for(int j=0;j<n;j++)
        {
            // cout<<" "<<doors[j]<<" "<<k<<endl;
            if(doors[j]==1 && k > 0)
            {
                flag = true;
            }
            if(doors[j]==1 && k <= 0)
            {
                output = false;
                break;
            }
            if(flag == true)
            {
                k--;
            }
        }
        if(output)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}