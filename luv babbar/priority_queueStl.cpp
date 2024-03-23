#include<bits/stdc++.h>
using namespace std; 
int main()
{
    priority_queue<int> pq;
    pq.push(2);
    pq.push(3);
    pq.push(5);
    pq.push(1);
    cout<<"Top Element "<<pq.top()<<endl;
    pq.pop();
    cout<<"Top Element "<<pq.top()<<endl;
    pq.pop();
    cout<<"Top Element "<<pq.top()<<endl;
    pq.pop();
    cout<<"Size "<<pq.size()<<endl;
    if(pq.empty())
    {
        cout<<"Max heap is empty "<<endl;
    }else 
    {
        cout<<"Max heap is not empty "<<endl;
    }


    //min-heap 
    cout<<endl<<endl<<endl;
    priority_queue<int,vector<int>,greater<int> > minHeap;
    minHeap.push(4);
    minHeap.push(9);
    minHeap.push(10);
    minHeap.push(5);
    minHeap.push(2);
    minHeap.push(8);
    cout<<"top Element "<<minHeap.top()<<endl;
    minHeap.pop();
    cout<<"Size:"<<minHeap.size()<<endl;
    cout<<"Top Element "<<minHeap.top()<<endl;
    minHeap.pop();
    cout<<"Top Element "<<minHeap.top()<<endl;
    minHeap.pop();

}