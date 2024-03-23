#include<iostream>
using namespace std;
void print(int arr[],int n)
{
    cout<<"Size of array is "<<n<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
}
bool linearsearch(int *arr, int n,int key)
{
   if(n==0)
   {
       return false;
   }
   if(arr[n]==key)
   {
       return true;
   }
   int ans=linearsearch(arr+1,n-1,key);
   
}
void print1(int arr[],int s,int e)
{
    for(int i=s;i<=e;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
}

bool binarysearch(int *arr,int s, int e,int k)
{
    print1(arr,s,e);
    if(s>e)
    {
        return false;
    }
    int mid= s +(e-s)/2;
    if(arr[mid]==k)
    {
        return true;
    }
    if(arr[mid]<k)
    {
        return binarysearch(arr,mid+1,e,k);
    }else 
    {
        return binarysearch(arr,s,mid-1,k);
    }
}
int main()
{
    int arr[5]={3,5,1,2,6};
    int size=5;
    int key=6;
    int ans=linearsearch(arr,size,key);
    if(ans)
    {
        cout<<"Element is found "<<endl;
    }else 
    {
        cout<<"Element is not found "<<endl;
    }
    int arr1[5]={12,23,35,56,67};
    bool ans1 =binarysearch(arr1,0,4,56);
    cout<<ans1<<endl;
}