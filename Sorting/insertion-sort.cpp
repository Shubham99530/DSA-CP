#include<iostream>
#include<vector>
using namespace std;

void insertion_sort(vector<int>& arr)
{
    int size = arr.size()-1;
    for(int i=1; i<=size; i++)
    {
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
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
    insertion_sort(arr);
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}