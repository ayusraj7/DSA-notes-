#include<bits/stdc++.h> 
using namespace std; 
void insertion(int arr[],int n)
{
    int j;
    for(int i=1;i<n;i++)
    {
        int temp=arr[i];
        for(j=i-1;j>=0;j--)
        {
            if(arr[j]>temp)
            {
             arr[j+1]=arr[j];
            }
            else 
            {
                break;
            }
        }
        arr[j+1]=temp;
    }
}
int main()
{
    cout<<"Insertion sort "<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of an array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Elements of an array"<<endl;
    for(int i:arr)
    {
        cout<<i<<" ";
    }cout<<endl;
    insertion(arr,n);
    for(int i:arr)
    {
        cout<<i<<" ";
    }cout<<endl;

}