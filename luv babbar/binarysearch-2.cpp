#include<bits/stdc++.h>
using namespace std; 
int pivotElement(vector<int> arr)
{
    int s=0;
    int e=arr.size()-1;
    while(s<=e)
    {
        int mid=s+(e-s)/2;
        if(arr[mid]>arr[mid+1])
        {
            return mid;
        }
        if(arr[mid-1]>arr[mid])
        {
            return mid-1;
        }
        if(arr[mid]<arr[mid+1])
        {
            s=mid+1;
        }else
        {
            e=mid-1;
        }
    }
    return s;
}
int squareroot(int n)
{
    int ans=-1;
    int s=0;
    int e=n;
    while(s<=e)
    {
        int mid=s+(e-s)/2;
        if(mid*mid==n)
        {
            return mid;
        }
        if(mid*mid<n)
        {
            ans=mid;
            s=mid+1;
        }else 
        {
            e=mid-1;
        }
    }
    return ans;
}
bool binarySearch2d(int arr[][5],int r,int c, int t)
{
  int s=0;
  int e=r*c-1;
  while(s<=e)
  {
      int mid=s+(e-s)/2;
      int rowIndex=mid/c;
      int colIndex=mid%c;
      
      if(arr[rowIndex][colIndex]==t)
      {
          return true;
      }
      if(arr[rowIndex][colIndex]<t)
      {
          s=mid+1;
      }else 
      {
          e=mid-1;
      }
  }
  return false;
}
int main()
{
    vector<int> v{1,2,3,4,5,6,7,8};
    cout<<"Enter the pivot element "<<pivotElement(v)<<endl;
    int n=19;
    int ans=squareroot(n);
    cout<<ans<<endl;
    int precision=3;
    double step=0.1;
    double finalans=ans;
    for(int i=0;i<precision;i++)
    {
        for(double j=finalans;j*j<=n;j=j+step){
            finalans=j;
        }
        step=step/10;
    }
    cout<<"Accurate Square root is "<<finalans<<endl;

    cout<<"Searching in 2D matrix "<<endl;
  
    int arr[5][5]={{1,2,3,4,5},
                       {6,7,8,9,10},
                       {11,12,13,14,15},
                       {16,17,18,19,20},
                       {21,22,23,24,25}
                       };
    int target=29;
    cout<<"Element found or not "<<binarySearch2d(arr,5,5,target)<<endl;
}