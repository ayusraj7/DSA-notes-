#include<iostream>
using namespace std;
int binary(int n,int arr[],int key)
{
    int s=0,e=n-1;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(arr[mid]==key)
        {
          return mid;
        }else if(arr[mid]>key)
        {
            e=mid-1;
        }else
        {
            s=mid+1;
        }
    }
}
int main()
{
    cout<<"Binary search"<<endl;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i:arr)
    {
        cout<<i<<" ";
    }cout<<endl;
    int key;
    cout<<"Enter the key"<<endl;
    cin>>key;
    cout<<binary(n,arr,key);
    
}