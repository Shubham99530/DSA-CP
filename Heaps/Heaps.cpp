#include<iostream>
using namespace std;

class heap
{
    public:
        int arr[100];
        int size;

        heap()
        {
            arr[0] = -1;
            size = 0;
        }
        void insert(int value)
        {
            size+=1;
            int index=size;
            arr[index] = value;
            while(index > 1)
            {
                int parent = index/2;
                if(arr[parent] < arr[index])
                {
                    swap(arr[parent],arr[index]);
                    index= parent;
                }
                else{
                    return;
                }
            }
        }

        void print()
        {
            for(int i=1;i<=size;i++)
            {
                cout<<arr[i]<<" ";
            }
        }

        void deletefromheap()
        {
            swap(arr[1],arr[size]);
            size--;
            int i = 1;
            while(i<size)
            {
                int leftchild = 2 * i;
                int rightchild = 2 * i + 1;
                if(arr[i] < arr[leftchild] && leftchild < size)
                {
                    swap(arr[i],arr[leftchild]);
                    i = leftchild;
                }
                else if(arr[i] < arr[rightchild] && rightchild < size)
                {
                    swap(arr[i],arr[rightchild]);
                    i=rightchild;
                }
                else
                {
                    return;
                }
            }
        }
};

int main()
{
    heap h;
    h.insert(10);
    h.insert(30);
    h.insert(40);
    h.insert(50);
    h.print();
    h.deletefromheap();
    h.print();
    return 0;

}