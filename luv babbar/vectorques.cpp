#include<bits/stdc++.h>
using namespace std; 
int findUnique(vector<int> arr){
    int ans=0;
    for(int i=0;i<arr.size();i++)
    {
        ans=ans^arr[i];
    }
    return ans;
}
int main()
{
    /*
    int n;
    cout<<"Enter the size of array "<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements "<<endl;
    for(int i=0;i<arr.size();i++)
    {
        cin>>arr[i];
    }
    int uniqueElement=findUnique(arr);
    cout<<"Unique Element is "<< uniqueElement<<endl;
    */

    /*
    // union of arrays 
    int arr[]={1,3,5,7,9};
    int size1=5;
    int brr[]={2,4,6,9};
    int size2=4;
    vector<int> ans;
    for(int i=0;i<size1;i++)
    {
        ans.push_back(arr[i]);
    }
    for(int i=0;i<size2;i++)
    {
        ans.push_back(brr[i]);
    }

    // printing answer array 
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }

    */
    
    //intersection of 2 arrays
    /*
    vector<int> arr{1,2,3,3,4,6,8};
    vector<int> brr{3,3,4,9,10};
    vector<int> ans;
    //outer loop on arr vector 
    for(int i=0;i<arr.size();i++)
    {
        int element=arr[i];
        for(int j=0;j<brr.size();j++)
        {
            if(element==brr[j])
            {
                //mark 
                brr[j]=-1;
                ans.push_back(element);
                //break;
            }
        }
    }
    for(auto value:ans)
    {
        cout<<value<<" ";
    }
    */

    //pair sum 
    vector<int> arr{10,20,30,40,60,70};
    for(int i=0;i<arr.size();i++)
    {
        int element=arr[i];
        for(int j=i+1;j<arr.size();j++)
        {
            if(element+arr[j]==100)
            {
            cout<<"("<<element<<","<<arr[j]<<")"<<endl;
            }
        }
    }

    //triplet sum
     vector<int> v={10,20,60,40,30,90,70,90,100};
    for(int i=0;i<arr.size();i++)
    {
        int element=arr[i];
        for(int j=i+1;j<arr.size();j++)
        {
            int element2=arr[j];
            for(int k=j+1;k<arr.size();k++)
            {
                int element3=arr[k];
                if(element+element2+element3==150)
                {
                    cout<<"("<<element<<","<<element2<<","<<element3<<")"<<endl;
                }
            }
        }
    }
    //sort 0s and 1s 
    vector<int> arr1={0,1,0,1,1,0,0,0};
    int s=0;
    int e=arr1.size()-1;
    while(s<=e)
    {
        if(arr1[s]==0){
            s++;
        }
        if(arr1[e]==1)
        {
            e--;
        }
        if(arr1[s]==1 && arr1[e]==0)
        {
            swap(arr1[s],arr1[e]);
            s++;
            e--;
        }
    }
    for(int i=0;i<arr1.size();i++)
    {
        cout<<arr1[i]<<" ";
    }
    


}