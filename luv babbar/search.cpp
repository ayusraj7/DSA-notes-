#include<bits/stdc++.h>
using namespace std; 
int binarySearch(int arr[],int size, int target)
{
    int start=0;
    int end=size-1;
   
    while(start<=end)
    {
         int mid=(start+end)/2;
        int element=arr[mid];
        if(element==target)
        {
            return mid;
        }else if(target<element)
        {
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return -1;
}
int main()
{
    cout<<"Ayush"<<endl;
    int arr[]={2,4,6,8,10,12,16};
    int size=7;
    int target=2;
    cout<<binarySearch(arr,size,target)<<endl;
     //binary search stl 
    vector<int> v{1,2,3,4,5,6};
    if(binary_search(v.begin(),v.end(),3)){
        cout<<"Found"<<endl;
    }else 
    {
        cout<<"Not Found "<<endl;
    }
}