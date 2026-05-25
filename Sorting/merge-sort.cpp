#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& arr, int left, int mid, int right)
{
    int i = left;
    int j = mid+1;
    vector<int> temp;
    while(i<=mid && j<=right)
    {
        if(arr[i] < arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid)
    {
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=right)
    {
        temp.push_back(arr[j]);
        j++;
    }
    for(int k=left; k<=right; k++)
    {
        arr[k] = temp[k-left];
    }
}

void merge_sort(vector<int>& arr, int left, int right)
{
    if(left < right)
    {
        int mid = left + (right - left) / 2;
        merge_sort(arr, left, mid);
        merge_sort(arr, mid+1, right);
        merge(arr, left, mid, right);
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
    merge_sort(arr, 0, n-1);
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}