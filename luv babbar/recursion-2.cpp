#include<bits/stdc++.h>
using namespace std; 
int climbStairs(int n)
{
    //base case 
    if(n==0 || n==1)
    {
        return 1;
    }
    //recrusive relation 
    return climbStairs(n-1)+climbStairs(n-2);
}


void print(int arr[],int n,int i)
{
    //base case 
   if(i==n)
   {
       return;
   }


   cout<<arr[i]<<" ";

   print(arr,n,i+1);

}
void print1(int arr[],int n)
{
    if(n==0)
    {
        return;
    }
    cout<<arr[0]<<" ";
    print1(arr+1,n-1);
}


//reverse 
void reversePrint(int arr[],int n,int i)
{
     //base case 
   if(i==n)
   {
       return;
   }

    reversePrint(arr,n,i+1);
    
    cout<<arr[i]<<" ";
}



void maximum(int arr[],int n, int i,int &maxi)
{
    //base case 
    if(i==n)
    {
        return;
    }

    maxi=max(maxi,arr[i]);
    maximum(arr,n,i+1,maxi);
}


bool checkKey(string str,int n,int i,char key)
{
    //base case 
    if(i==n)
    {
        return false;
    }
     
    //processing 
    if(str[i]==key)
    {
        return true;
    }
    

    bool ans=checkKey(str,n,i+1,key);
    return ans;
}


void printDigit(int n)
{
    //base case 
    if(n==0)
    {
        return;
    }

    printDigit(n/10);

    int digit=n%10;
    cout<<digit<<" ";
}


void printNo(int n,string no[])
{
    if(n==0)
    {
        return;
    }

    int digit=n%10;
    printNo(n/10,no);

    cout<<no[digit]<<" ";
}
int main()
{
    int n;
    cout<<"Enter the no of step of stair"<<endl;
    cin>>n;
    cout<<climbStairs(n)<<endl;

    int arr[]={5,2,6,1,2,6,9};
    int x=7;


    print(arr,x,0);
    cout<<endl;
    print1(arr,x);


    cout<<endl<<"Reverse Print"<<endl;
    reversePrint(arr,x,0);
    int maxi=INT_MIN;
    maximum(arr,x,0,maxi);


    cout<<endl;
    cout<<endl;
    cout<<"Maximum no "<<maxi<<endl;

    //finding key in string
    cout<<"Finding Key "<<endl; 
    string str="ayush";
    char key='A';
    if(checkKey(str,str.size(),0,key))
    {
        cout<<"Key found "<<endl;
    }else 
    {
        cout<<"Key not found"<<endl;
    }

    cout<<"Print digit "<<endl;
    printDigit(345);

    string no[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    cout<<"Print the no "<<endl;
    printNo(345,no);

}