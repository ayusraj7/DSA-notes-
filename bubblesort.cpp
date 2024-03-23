#include<bits/stdc++.h>// we take counter because first iteration runs n-1 times and then the inner loop runs n-1 and then decreased one by one 
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter the size of array "<<endl;
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
    int counter=1;
    while(counter<n)
    {
        for(int i=0;i<n-counter;i++)
        {
            if(arr[i]>arr[i+1])
            {
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        counter++;
    }
    cout<<"After sorting "<<endl;
    for(int i:arr)
    {
        cout<<i<<" ";
    }
}