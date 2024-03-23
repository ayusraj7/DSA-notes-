#include<bits/stdc++.h>
using namespace std; 
int main()
{
    //for two sorted arrays 
    vector<int> arr1{1,2,3,4,5};
    vector<int> arr2{2,3,5};
    vector<int> ans;
    int n=arr1.size();
    int m=arr2.size();
    int i=0,j=0;
    while(i<n && j<m)
    {
        if(arr1[i]< arr2[j])
        {
            ans.push_back(arr1[i]);
            //cout<<arr1.size();
            i++;
        }else if(arr2[j]<arr1[i])
        {
            ans.push_back(arr2[j]);
            j++;
        }else 
        {
            ans.push_back(arr2[j]);
            j++;
            i++;
        }
    }
    while(i<n)
    {
        ans.push_back(arr1[i++]);
    }
    while(j<m)
    {
        ans.push_back(arr2[j++]);
    }
   
   //now printing the array 
   for(auto i:ans)
   {
       cout<<i<<" ";
   }cout<<endl;


   //two vectors 
   vector<int> a{3,1,5,6};
   vector<int> b{9,2,8,0};
   vector<int> answer;
   for(int i=0;i<a.size();i++)
   {
       answer.push_back(a[i]);
   }
   for(int i=0;i<b.size();i++)
   {
       bool flag=false;
       for(int j=0;j<answer.size();j++)
       {
           if(b[i]==answer[j])
           {
               flag=true;
           }
       }
       if(flag==false)
       {
           answer.push_back(b[i]);
       }
   }

   for(auto i:answer)
   {
       cout<<i<<" ";
   }cout<<endl;

}