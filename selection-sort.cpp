#include<iostream>
using namespace std;
int main()
{
    cout<<"Selection sort "<<endl;
    int n;
    cin>>n;
    int arr[n];
    // for(int i=0;i<n;i++)
    // {
    //     cin>>arr[i];
    // }
    // for(int i=0;i<n-1;i++)
    // {
    //    for(int j=i+1;j<n;j++)
    //    {
    //        if(arr[j]<arr[i])
    //        {
    //            swap(arr[j],arr[i]);
    //        }
    //    }
    // }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i;j<n;j++)
        {
            cout<<"j"<<j<<"j+1"<<j+1<<endl;
            if(arr[j]<arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    cout<<"Sorted array "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
}