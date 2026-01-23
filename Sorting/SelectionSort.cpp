#include<iostream>
#include<stdlib.h>
using namespace std;

void SelectionSort(int* arr, int n)
{
    for (int i=0; i<n-1; i++)
    {
        int mini = i;
        for (int j=i;j<n-1;j++)
        {
            if (arr[j] < arr[mini])
            {
                mini =j;
            }
        }
        swap(arr[i],arr[mini]);
    }
}

int main()
{
    int arr[5] = {45,2,13,5,67};
    SelectionSort(arr,5);
    for (int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}