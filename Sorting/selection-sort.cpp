#include<iostream>
#include<vector>
using namespace std;

void selectionsort(vector<int>& arr)
{
    int size = arr.size()-1;
    for(int i=0; i<=size; i++)
    {
        for(int j=i+1; j <=size; j++)
        {
            if(arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
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
    selectionsort(arr);
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
