#include<iostream>
using namespace std;
int main()
{
    cout<<"linear Search "<<endl;
    int n;
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
    int key;
    cin>>key;
    for(int i=1;i<=n;i++)
    {
        if(arr[i]==key)
        {
            cout<<"Element found at index "<<i<<endl;
        }
    }
}