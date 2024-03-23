#include<bits/stdc++.h>
using namespace std; 
void print(int arr[],int size)
{
    if(size<=1)
    {
        cout<<arr[0]<<" ";
        return;
    }
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    print(arr,(size+1)/2);
}
void solve2(int *arr,int s,int e)
{
    //base case 
    if(s>=e)
    {
        cout<<arr[s]<<" "; 
        return;
    }
    for(int i=s;i<=e;i++)
    {
      cout<<arr[i]<<" ";
    }cout<<endl;
    int mid=(s+e)/2;
    solve2(arr,s,mid);
}
void solve3(int *arr,int s,int e)
{
    //base case 
    if(s>=e)
    {
        cout<<arr[s]<<" "; 
        return;
    }
    for(int i=s;i<=e;i++)
    {
       cout<<arr[i]<<" ";
    }cout<<endl;
    int mid=(s+e)/2;
    solve3(arr,mid+1,e);
}
int main()
{
  int arr[]={3,2,5,6,7,8,9};
  print(arr,7);
  cout<<"2nd Approach"<<endl;
  solve2(arr,0,6);
  cout<<"Right part"<<endl;
  solve3(arr,0,6);
}