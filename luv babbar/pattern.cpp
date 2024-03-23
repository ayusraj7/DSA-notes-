#include<iostream>
using namespace std; 
int main()
{
   int n;
   cout<<"Enter the no "<<endl;
   cin>>n;
    //pyramid 
    for(int row=0;row<n;row++)
    {
        for(int space=0;space<n-row-1;space++)
        {
            cout<<" ";
        }
        for(int col=0;col<row+1;col++)
        {
            cout<<"* ";
        }cout<<endl;
    }
    //Inverted Pyramid full 
    for(int row=0;row<n;row++)
    {
        for(int space=0;space<row;space++)
        {
            cout<<" ";
        }
        for(int col=0;col<n-row;col++)
        {
            cout<<"* ";
        }cout<<endl;
    }
//    //diamond pattern
//    cout<<"Diamond Pattern"<<endl;
//    for(int row=0;row<n;row=row+1)
//    {
//        for(int space=0;space<n-row-1;space++)
//        {
//            cout<<" ";
//        }
//        for(int star=0;star<row+1;star++)
//        {
//            cout<<"* ";
//        }cout<<endl;
//    }
//    for(int row=0;row<n;row++)
//    {
//        for(int space=0;space<row;space++)
//        {
//            cout<<" ";
//        }
//        for(int col=0;col<n-row;col++)
//        {
//            cout<<"* ";
//        }cout<<endl;
//    }
   // hollow diamond 
   cout<<"Hollow Diamond"<<endl;
   for(int row=0;row<n;row++)
   {
       for(int space=0;space<n-row-1;space++)
       {
           cout<<" ";
       }
       for(int col=0;col<2*row+1;col++)
       {
           if(col==0 || col==2*row)
           {
               cout<<"*";
           }
           else {
               cout<<" ";
           }
       }cout<<endl;
   }
   for(int row=0;row<n;row++)
   {
       for(int space=0;space<row;space++)
       {
           cout<<" ";
       }
       for(int col=0;col<2*n-2*row-1;col++)
       {
           if(col==0 || col==2*n-2*row-2)
           {
               cout<<"*";
           }else 
           {
               cout<<" ";
           }
       }cout<<endl;
   }
   cout<<"Flipped Solid Diamond "<<endl;
   //upper part 
   for(int row=0;row<n;row++)
   {
        // first part inverted triangle 
        for(int col=0;col<n-row;col++)
        {
            cout<<"*";
        }
        // middle part 
        for(int col=0;col<2*row+1;col++)
        {
            cout<<" ";
        }
        // last part inverted triangle 
        for(int col=0;col<n-row;col++)
        {
            cout<<"*";
        }cout<<endl;
   }
   // lower part 
   for(int row=0;row<n;row++)
   {
       //first triangle
       for(int col=0;col<row+1;col++)
       {
           cout<<"*";
       }
       //middle part 
       for(int col=0;col<2*n-2*row-1;col++)
       {
           cout<<" ";
       }
       //last triangle 
       for(int col=0;col<row+1;col++)
       {
           cout<<"*";
       }cout<<endl;
   }
   cout<<"Fancy pattern"<<endl;
   //upper part 
   for(int row=0;row<n;row++)
   {
       for(int col=0;col<row+1;col++)
       {
           cout<<row+1;
           if(col!=row)
           {
               cout<<"*";
           }
       }cout<<endl;
   }
   for(int row=0;row<n;row++)
   {
       for(int col=0;col<n-row;col++)
       {
           cout<<n-row;
           if(col!=n-row-1)
           {
               cout<<"*";
           }
       }cout<<endl;
   }
}