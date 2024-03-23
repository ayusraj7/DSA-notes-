#include<bits/stdc++.h>
using namespace std; 
int findtarget(int arr[],int index,int size,int target)
{
    if(arr[index]==target)
    {
        return index;
    }
    if(index==size)
    {
        return -1;
    }
    findtarget(arr,index+1,size,target);
}

int findtarget1(int arr[],int index,int size,int target)
{
    if(arr[0]==target)
    {
        return index;
    }
    if(size==0)
    {
        return -1;
    }
    
    findtarget1(arr+1,index+1,size-1,target);
}
void allocc(int arr[],int index,int size,int target,vector<int> &v)
{
    if(index==size)
    {
        return;
    }
    if(arr[index]==target)
    {
        v.push_back(index);
    }
     allocc(arr,index+1,size,target,v);
   
}
void print(int n, int index)
{
    if(index>n)
    {
        return;
    }
    cout<<index<<" ";
    print(n,index+1);
    cout<<index<<" ";
}
int main()
{
    int arr[]={1,5,3,2,5,2};
    cout<<findtarget(arr,0,6,8)<<" ";
    cout<<endl;
    cout<<findtarget1(arr,0,6,8)<<" ";
    cout<<endl;
    vector<int> v;
    allocc(arr,0,6,5,v);
    for(int i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    print(6,1);
}