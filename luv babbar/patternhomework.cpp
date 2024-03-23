#include<bits/stdc++.h>
using namespace std; 
int main()
{
    int n;
    cout<<"Enter the no "<<endl;
    cin>>n;
    cout<<"Square"<<endl<<endl;
    for(int row=0;row<n;row++)
    {
        for(int col=0;col<n;col++)
        {
            cout<<"* ";
        }cout<<endl;
    }
    cout<<endl<<"Hollow Square "<<endl<<endl;
    for(int row=0;row<n;row++)
    {
        for(int col=0;col<n;col++)
        {
            if(row==0 || row==n-1 || col==0 || col==n-1)
            {
                cout<<"*";
            }
            else 
            {
                cout<<" ";
            }
        }cout<<endl;
    }
    cout<<endl<<"Hollow Inverted Half Pyramid "<<endl<<endl;
    for(int row=0;row<n;row++)
    {
        for(int col=0;col<n-row;col++)
        {
            if(row==0 || row==n-1 || col==0 || col==n-row-1)
            {
                cout<<"*";
            }else 
            {
                cout<<" ";
            }
        }cout<<endl;
    }
    cout<<endl<<"Hollow half pyramid "<<endl;
    for(int row=0;row<n;row++)
    {
        for(int space=0;space<n-row-1;space++)
        {
            cout<<" ";
        }
        for(int col=0;col<2*row+1;col++)
        {
           if(row==0 || row==n-1 || col==0 || col==2*row) 
           {
               cout<<"*";
           }else 
           {
               cout<<" ";
           }
        }cout<<endl;
    }
    cout<<endl<<"Numeric Hollow Half Pyramid "<<endl<<endl;
    for(int row=0;row<n;row++)
    {
        for(int col=0;col<row+1;col++)
        {
            if(row==0 || row==n-1 || col==0 || col==row)
            {
               cout<<col+1<<" ";
            }
            else 
            {
                cout<<"  ";
            }
        }cout<<endl;
    }
    cout<<endl<<"Numeric Hollow Half Pyramid"<<endl;
    for(int row=0;row<n;row++)
    {
        int ans=row+1;
        for(int col=0;col<n-row;col++)
        {
           if(row==0)
           {
           cout<<ans++<<" ";
           }else if(col==0|| col==n-row-1)
           {
               cout<<ans++<<" ";
           }else 
           {
               cout<<"  ";
               ans++;
           }
        }cout<<endl;
    }
    cout<<endl<<"Solid Half Diamond "<<endl<<endl;
    for(int row=0;row<n;row++)
    {
        for(int col=0;col<row+1;col++)
        {
            cout<<"* ";
        }cout<<endl;
    }
    //lower part 
    for(int row=0;row<n-1;row++)
    {
        for(int col=0;col<n-1-row;col++)
        {
            cout<<"* ";
        }cout<<endl;
    }
    cout<<"Numeric Palindrome Equilateral  Pyramid "<<endl;
    for(int row=0;row<n;row++)
    {
        //spaces 
        for(int spaces=0;spaces<n-row-1;spaces++)
        {
            cout<<"  ";
        }
        //half pyramid 
        int col;
        for(col=0;col<row+1;col++)
        {
            cout<<col+1<<" ";
        }
        //side part 
        col=col-1;
        for(;col>=1;col--)
        {
            cout<<col<<" ";
        }cout<<endl;
    }
    
}