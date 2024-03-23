#include<bits/stdc++.h>
using namespace std; 
int main()
{
    vector<int> arr={2,3,1,6,9,10};
    //selection sort;
    cout<<"Selection Sort"<<endl;
    int n=arr.size();
    for(int i=0;i<n-1;i++)
    {
        int minIndex=i;
        for(int j=i+1;j<n;j++)
        {
           if(arr[j]<arr[minIndex])
           {
              minIndex=j;
           }
        }
        swap(arr[minIndex],arr[i]);
    }
    for(int i:arr)
    {
        cout<<i<<" ";
    }cout<<endl;
    cout<<"Bubble Sort"<<endl;
    vector<int>v={2,3,5,1,6,7,8,9};
    for(int i=0;i<n-1;i++)
    {
        bool flag=false;
        for(int j=0;j<n-i-1;j++)
        {
            if(v[j]>v[j+1])
            {
                flag=true;
                swap(v[j],v[j+1]);
            }
        }
        if(!flag)
        {
            break;
        }
    }
    for(int i:v)
    {
        cout<<i<<" ";
    }cout<<endl;
    cout<<"Insertion sort "<<endl;
    vector<int> arr1{2,3,5,1,8,4,9};
    for(int i=1;i<n;i++)
    {
        int val=arr1[i];
        int j=i-1;
        for( ;j>=0;j--)
        {
             if(arr1[j]>val)
             {
                  arr1[j+1]=arr1[j];
             }else 
             {
                 break;
             }
        }
        arr1[j+1]=val;
    }
    for(int i:arr1)
    {
        cout<<i<<" ";
    }cout<<endl;
}