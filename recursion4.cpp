#include<bits/stdc++.h>
using namespace std;
void reverse(string &str, int i, int j)
{
    //base case 
    if(i>=j)
    {
        return ;
    }
    swap(str[i],str[j]);
    i++;
    j--;

    //recursive call 
    reverse(str,i,j);
}
bool pallindrome(string s,int i,int j)
{
    if(i>j)
    {
        return true;
    }
    if(s[i]!=s[j])
    {
       return false;
    }
    else 
    {
        pallindrome(s,i+1,j-1);
    }
}
// a =3 b=2 give output 3ki power 2 =9 // here we use more optimized approach 
int power(int a, int b)
{
    if(b==0)
    {
        return 1;
    }
    if(b==1)
    {
        return a;
    }
     int ans=power(a,b/2);
     if(b%2==0)
     {
         return ans*ans;
     }else 
     {
         return a*ans*ans;
     }
}
void sortArray(int arr[],int n)
{
    //base case 
    if(n==0 || n==1)
    {
        return ;
    }
    //first case solve karlia largest no ko end me rakh dega 
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            swap(arr[i],arr[i+1]);
        }
    }
    sortArray(arr,n-1);
}
int main()
{
 string name="babbar";
 reverse(name,0,name.length()-1);
 cout<<name<<endl;
 //pallindrome
 bool ispalindrome=pallindrome(name,0,name.length()-1);
 if(ispalindrome)
 {
    cout<<"it is an pallindrome";
 }else 
 {
     cout<<"it is not an pallindrome";
 }
 //power 
 int a,b;
 cout<<"Enter two numbers "<<endl;
 cin>>a>>b;
 int ans=power(a,b);
 cout<<"ans is "<<ans;
 //selection sort 
 int arr[6]={1,2,5,2,3};
 sortArray(arr,6);
 for(int i:arr)
 {
     cout<<i<<" ";
 }
}