//bubble sort 
#include<bits/stdc++.h>
using namespace std;
void bubblesort(int arr[], int n)
{
    for(int i=1;i<n;i++)// when we start i from 1 then we have to put j<(n-i-1) 
    {
        bool swapped=false;//best case when the array is already sorted it got check if values get swap for sorting then swapped will be true and now t.c is O(n)
        for(int j=0;j<(n-i);j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(swapped==false)
        {
            //already sorted 
            break;
        }
    }
}
int main()
{
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
    bubblesort(arr,n);
    for(int i:arr)
    {
        cout<<i<<" ";
    }cout<<endl;
}