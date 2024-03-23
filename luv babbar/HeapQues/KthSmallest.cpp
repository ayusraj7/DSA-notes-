#include<bits/stdc++.h>
using namespace std;

//by sorting fuction t.c O(logn)
int kSmallestNo(int arr[],int k,int n)
{
    sort(arr,arr+n);
    return arr[k-1];
} 

int kSmallestNo2(int arr[],int k,int n)
{
    priority_queue<int,vector<int>,greater<int> > pq;
    for(int i=0;i<n;i++)
    {
        pq.push(arr[i]);
    }
    int i=1;
    while(i<k)   
    {
       
        i++;
        pq.pop();
     
    }
    return pq.top();
}

int kSmallest(int arr[],int k,int n)
{
    //using max heap 
    priority_queue<int>  pq;
    for(int i=0;i<k;i++)
    {
        pq.push(arr[i]);
    }
    int i=k;
    while(i<n)
    {
        if(arr[i]<pq.top())
        {
            pq.pop();
            pq.push(arr[i]);
        }
        i++;
    }
    return pq.top();
}
int main()
{
    int arr[]={3,11,6,9,4,12,2,8};
    int k=4;
    int n=8;
    //cout<<"Smallest K no in array is "<<kSmallestNo(arr,k,n);
    //cout<<"Smallest K now in array by min-heap is "<<kSmallestNo2(arr,k,n);
    cout<<"Smallest K now in array by max-heap is "<<kSmallest(arr,k,n);
}