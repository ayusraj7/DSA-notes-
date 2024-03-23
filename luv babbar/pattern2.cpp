#include<bits/stdc++.h>
using namespace std; 
int main()
{
    int n;
    cin>>n;
    cout<<"Alphabet Palindrome Pyramid "<<endl;
    for(int row=0;row<n;row++)
    {
        int col;
        for(col=0;col<row+1;col++)
        {
            char ch='A'+col;
            cout<<ch;
        }
        //reverse counting 
        col=col-1;
        for(;col>=1;col--)
        {
            char ch='A'+col-1;
            cout<<ch;
        }
        
        cout<<endl;
    }
    cout<<endl<<"Numeric Full Pyramid "<<endl;
    for(int row=0;row<n;row++)
    {
       //spaces 
       for(int space=0;space<n-row-1;space++)
       {
           cout<<" ";
       }
       int sum=row+1;
       for(int col=0;col<row+1;col++)
       {
           cout<<sum++;
       }
       // 2nd triangle 
       int ans=2*row;
       for(int col=0;col<row;col++)
       {
           cout<<ans;
           ans--;
       }
       cout<<endl;
    }
    cout<<endl<<"Hollow Pyramid "<<endl;
    for(int row=0;row<n;row++)
    {
       for(int space=0;space<n-row-1;space++)
       {
           cout<<" ";
       }
       // numbers with spaces in between 
       int start=1;
       for(int col=0;col<2*row+1;col++)
       {
           //for first and last row
           if(row==0 || row==n-1)
           {
               if(col%2==0)
               {
                   cout<<start;
                   start=start+1;
               }
               else 
               {
                   cout<<" ";
               }
           }
           else 
           {
               if(col==0)
               {
                   cout<<1;
               }else if(col==2*row){
                cout<<row+1;
               }else 
               {
                   cout<<" ";
               }
           }
        }cout<<endl;
     }
}