#include<bits/stdc++.h>
using namespace std;
void print(priority_queue<int> pq)
{
    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
}
int main()
{
    priority_queue<int> pq1;
    priority_queue<int> pq2;
    pq1.push(5);
    pq1.push(9);
    pq1.push(2);
    pq1.push(3);
    pq1.push(10);

    pq2.push(12);
    pq2.push(7);
    pq2.push(8);


     /*
    //first way of merging the two heaps using priority queue 
    priority_queue<int> ansHeap;
    while(!pq1.empty()){
        int element=pq1.top();
        ansHeap.push(element);
        pq1.pop();
    }

    while(!pq2.empty()){
        int element=pq2.top();
        ansHeap.push(element);
        pq2.pop();
    }

    print(ansHeap);
    */

    //second way of merging two heaps using priority queue 
    while(!pq2.empty())
    {
        pq1.push(pq2.top());
        pq2.pop();
    }
    print(pq1);


    
}