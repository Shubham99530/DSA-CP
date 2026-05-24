#include<iostream>
#include<vector>
using namespace std;

void bubble_sort(vector<int>& arr)
{
    int size = arr.size()-1;
    for(int i=size; i>>=0; i--)
    {
        for(int j=i-1; j>=0; j--)
        {
            if(arr[j] > arr[i])
            {
                swap(arr[j], arr[i]);
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    bubble_sort(arr);
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}