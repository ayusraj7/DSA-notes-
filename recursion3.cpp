#include<bits/stdc++.h>
using namespace std;
bool isSorted(int arr[],int size)
{
    if(size==0 || size==1)
    {
        return true;
    }
    if(arr[0]>arr[1])
    {
        return false;
    }else 
    {
        bool remainingpart=isSorted(arr+1,size-1);
        return remainingpart;
    }
}
int sum(int arr[],int n)
{
    if(n==0)
    {
        return 0;
    }
    int s=arr[0];
    return s+sum(arr+1,n-1);
}
int main()
{
    int arr[5]={2,4,6,8,9};
    int size=5;
    bool ans=isSorted(arr,size);
    if(ans)
    {
        cout<<"Array sorted"<<endl;
    }else 
    {
        cout<<"Array is not sorted "<<endl;
    }
    cout<<sum(arr,size);
}