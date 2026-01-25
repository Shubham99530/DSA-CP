#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class heap{
    public:
        int arr[100];
        int size=0;
        void insert(int value)
        {
            size = size+1;
            int index = size;
            arr[index] = value;
            while(index > 1)
            {
                int parent = index/2;
                if(arr[parent] < arr[index])
                {
                    swap(arr[parent],arr[index]);
                    index = parent;
                }
                else{
                    return;
                }
            }

        }
        void print()
        {
            for (int i=1;i<=size;i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
        void delete_node_at_top()
        {
            if (size == 0)
            {
                cout<<"No Element is present in the heap to delete"<<endl;
            } 
            arr[1] =arr[size];
            size--;
            int i=1;
            while(i<size)
            {
                int leftchild = 2*i;
                int rightchild = 2*i+1;
                if (leftchild<size && arr[i]<arr[leftchild])
                {
                    swap(arr[i],arr[leftchild]);
                    i=leftchild;
                }
                else if(rightchild < size && arr[i]<arr[rightchild])
                {
                    swap(arr[i],arr[rightchild]);
                    i = rightchild;
                }
                else{
                    return;
                }
            }
        }
};

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int leftchild = 2*i;
    int rightchild = 2*i+1;
    if (leftchild < n && arr[leftchild] > arr[largest])
    {
        largest = leftchild;   
    }
    if(rightchild < n && arr[rightchild] > arr[largest])
    {
        largest = rightchild;
    }
    if(largest != i)
    {
        swap(arr[i],arr[largest]);
        heapify(arr,n,largest);
    }
}

int main()
{
    heap h;
    h.insert(10);
    h.insert(20);
    h.insert(30);
    h.insert(40);
    h.insert(50);
    h.print();

    h.delete_node_at_top();
    h.print();

    int arr[6] = {-1,10, 30, 50, 40, 20};
    int n=5;
    for(int i=n/2;i>=1;i--)
    {
        heapify(arr,n,i);
    }
    for(int i=1;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}