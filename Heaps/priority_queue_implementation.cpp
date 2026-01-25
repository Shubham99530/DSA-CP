#include<iostream>
#include<queue>
using namespace std;

int main()
{
    // this is the implementation for the max heap
    priority_queue<int>max_heap;
    max_heap.push(3);
    max_heap.push(7);
    max_heap.push(1);
    max_heap.push(2);
    max_heap.push(4);
    cout<<"Element at the top :"<<max_heap.top()<<endl;
    max_heap.pop();
    cout<<"Element at the top :"<<max_heap.top()<<endl;
    max_heap.pop();

    // This is the implementation for the min heap
    priority_queue<int,vector<int>,greater<int>> min_heap;
    min_heap.push(3);
    min_heap.push(7);
    min_heap.push(1);
    min_heap.push(2);
    min_heap.push(4);
    cout<<"Element at the top :"<<min_heap.top()<<endl;
    min_heap.pop();
    cout<<"Element at the top :"<<min_heap.top()<<endl;
    min_heap.pop();
    return 0;
}