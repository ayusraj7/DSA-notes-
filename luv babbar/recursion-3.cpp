#include<bits/stdc++.h>
using namespace std; 
bool checkSorted(vector<int> &arr,int& n, int i)
{
   //base case 
   if(i==n-1)
   {
       return true;
   }

   //1 case solve krna hai 
   if(arr[i+1]<arr[i])
   {
       return false;
   }
   //baaki recursion sambhal lega 
   return checkSorted(arr,n,i+1);
}
int binarySearch(vector<int> &arr, int s, int e, int key)
{
    //base case 
    if(s>e)
    {
        return -1;
    }
    int mid=s+(e-s)/2;
    //case 2:- key found 
    if(arr[mid]==key)
    {
        return mid;
    }
    //case 3: 
    if(arr[mid]<key)
    {
       return  binarySearch(arr,mid+1,e,key);
    }else 
    {
        return binarySearch(arr,s,mid-1,key);
    }
}
int main()
{
    vector<int> v{10,20,70,50,60};
    int n=v.size();
    int i=0;
    bool isSorted=checkSorted(v,n,i);

    if(isSorted)
    {
        cout<<"Array is sorted "<<endl;
    }else 
    {
        cout<<"Array is not sorted "<<endl;
    }

    vector<int> arr{10,20,30,40,60,70,90,99};
    int target=99;
    int m=arr.size();
    int s=0;
    int e=m-1;
    int ans=binarySearch(arr,s,e,target);
    cout<<"Answer is :"<<ans<<endl;
}