#include<bits/stdc++.h>
using namespace std; 
int reverse(int n)
{
   int ans=0;
   while(n!=0)
   {
       int digit=n%10;
       ans=ans*10+digit;
       n=n/10;
   }
   return ans;
}
int main()
{
    int n;
    cout<<"Enter the no "<<endl;
    cin>>n;
    cout<<endl<<"Fancy Pattern #1"<<endl<<endl;
    for(int row=0;row<n;row++)
    {
        //first part 
        for(int col=0;col<n-row+3;col++)
        {
            cout<<"*";
        }
        //middle part 
        for(int col=0;col<row+1;col++)
        {
            cout<<row+1;
            if(col!=row)
            {
                cout<<"*";
            }
        }
        //last part 
        for(int col=0;col<n-row+3;col++)
        {
            cout<<"*";
        }cout<<endl;
    }
    cout<<endl<<"Fancy Pattern #2"<<endl<<endl;
    int ans=1;
    //upper part
    for(int row=0;row<n;row++)
    {
        for(int col=0;col<row+1;col++)
        {
            cout<<ans++;
            if(col!=row)
            {
                cout<<"*";
            }
        }cout<<endl;
    }
    //lower part 
    ans=ans-n;
    for(int row=0;row<n;row++)
    {
        int k=ans;
        for(int col=0;col<n-row;col++)
        {
          cout<<k++;
          if(col!=n-row-1)
          {
              cout<<"*";
          }
        }cout<<endl;
        ans=ans-(n-row-1);
    }
    cout<<endl<<"Floyd's Triangle Pattern "<<endl;
    int floydans=1;
    for(int row=0;row<n;row++)
    {
        for(int col=0;col<row+1;col++)
        {
            cout<<floydans++<<" ";
        }cout<<endl;
    }
    cout<<endl<<"Pascal Triangle Pattern "<<endl<<endl;
    for(int i=1;i<=n;i++)
    {
        int C=1;
        for(int j=1;j<=i;j++)
        {
            cout<<C<<" ";
            C=C * (i-j)/j;
        }
        cout<<endl;
    }
    cout<<endl<<"Butterfly Pattern "<<endl<<endl;
    //upper part 
    for(int row=0;row<n;row++)
    {
        //first part 
        for(int col=0;col<row+1;col++)
        {
            cout<<"*";
        }
        //middle part 
        for(int col=0;col<2*n-2*row-1;col++)
        {
            cout<<" ";
        }
        //last part 
        for(int col=0;col<row+1;col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    //lowerpart 
    for(int row=0;row<n;row++)
    {
        for(int col=0;col<n-row;col++)
        {
            cout<<"*";
        }
        //middle part 
        for(int col=0;col<2*row+1;col++)
        {
            cout<<" ";
        }
        //last part 
        for(int col=0;col<n-row;col++)
        {
            cout<<"*";
        }cout<<endl;
    }
    cout<<"Reverse of number "<<endl;
    int a;
    cout<<"Enter the no "<<endl;
    cin>>a;
    cout<<reverse(a)<<endl;
}