#include<bits/stdc++.h>
using namespace std; 
int callMedian(int &median,int element,priority_queue<int>& maxHeap,priority_queue<int,vector<int>,greater<int>>& minHeap)
{
    if(minHeap.size()==maxHeap.size()){
        if(element>median){
            minHeap.push(element);
            median=minHeap.top();
        }else 
        {
            maxHeap.push(element);
            median=maxHeap.top();
        }
    }else if(maxHeap.size() > minHeap.size())
    {
        if(element>median)
        {
         minHeap.push(element);
         median=(minHeap.top() + maxHeap.top())/2;
        }else 
        {
            int temp=maxHeap.top();
            maxHeap.pop();
            minHeap.push(temp);
            maxHeap.push(element);
            median=(minHeap.top()+maxHeap.top())/2;
        }
    }else 
    {
        //maxHeap.size()<minHeap.size()
        if(element>median)
        {
            int temp=minHeap.top();
            minHeap.pop();
            maxHeap.push(temp);
            minHeap.push(element);
            median=(minHeap.top() + maxHeap.top())/2;
        }else 
        {
            maxHeap.push(element);
            median=(minHeap.top() + maxHeap.top())/2;
        }
    }
    return median;
}
int main()
{
    int arr[6]={5,7,2,9,3,8};
    int n=6;
    priority_queue<int> maxHeap;
    priority_queue<int,vector<int>, greater<int> > minHeap;
    int median=0;
    for(int i=0;i<n;i++)
    {
        int element=arr[i];
        median=callMedian(median,element,maxHeap,minHeap);
        cout<<"->"<<median<<" ";
    }cout<<endl;
}