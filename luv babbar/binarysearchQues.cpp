#include<bits/stdc++.h>
using namespace std; 
int firstoccurence(vector<int> v, int target)
{
    int s=0;
    int e=v.size()-1;
    int ans=-1;
    while(s<=e)
    {
        int mid=s+(e-s)/2;
        if(v[mid]==target)
        {
            ans=mid;
            e=mid-1;
        }else if(target<v[mid]){
            e=mid-1;
        }else 
        {
            s=mid+1;
        }
    }
    return ans;
}
int lastoccurence(vector<int> v,int target)
{
    int s=0;
    int e=v.size()-1;
    int ans=-1;
    while(s<=e)
    {
        int mid=s+(e-s)/2;
        if(v[mid]==target)
        {
            ans=mid;
            s=mid+1;
        }else if(target<v[mid]){
            e=mid-1;
        }else 
        {
            s=mid+1;
        }
    }
    return ans;
}
int findPivot(vector<int> arr)
{
    int s=0;
    int e=arr.size()-1;
    while(s<=e)
    {
        int mid=s+(e-s)/2;
        if( mid+1<arr.size() &&arr[mid]>arr[mid+1])
        {
            return mid+1;
        }
        if(arr[mid-1]>arr[mid] && mid-1>=0)
        {
            return mid;
        }
        if(arr[s]>=arr[mid])
        {
            e=mid-1;
        }else 
        {
            s=mid+1;
        }
    }
}
int missingelement(vector<int> v)
{
    if(v[0]!=1)
    {
        return 1;
    }
    int ans=-1;
    int s=0;
    int e=v.size()-1;
    while(s<=e)
    {
        int mid=s+(e-s)/2;
        if(v[mid]==mid+1)
        {
            ans=v[mid]+1;
            s=mid+1;
        }else 
        {
            e=mid-1;
        }
    }
    return ans;
}
int main()
{
  vector<int> v{1,2,3,3,3,4,6,9};
  int target=3;
  cout<<"First occurence of target "<<firstoccurence(v,target)<<endl;
  cout<<"Last occurence of target "<<lastoccurence(v,target)<<endl;
  cout<<"All occurence in array :"<<lastoccurence(v,target)-firstoccurence(v,target)+1<<endl;
  // pivot element 
  vector<int> arr{3,4,5,6,7,1,2};
  int ans=findPivot(arr);
  cout<<"pivot element is "<<ans<<endl;
  cout<<"Find the missing element in array "<<endl;
  vector<int> v1{1,2,3,4,6,7,8};
  cout<<"missing element in array is: "<<missingelement(v1);

  return 0;

}