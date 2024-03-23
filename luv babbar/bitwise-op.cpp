#include<iostream>
using namespace std; 
int main()
{
    
    // bool a=true;
    // bool b=false;
    // bool c=a&b;
    // cout<<c<<endl;
    // cout<<(a|b)<<endl;
    // bool x=false;
    // bool y=false;
    // cout<<(x|y)<<endl;
    // cout<<~a<<endl;
    // cout<<(a^b)<<endl;
    // cout<<(x^y)<<endl;
    // int z=5&10;
    // cout<<z<<endl;
    // int aur=3|4;
    // cout<<aur<<endl;
    
    cout<<"left shift operator "<<endl;
    int a=12;
    a=a<<4 ;
    cout<<a<<endl;
    cout<<"right shift operator "<<endl;
    int b=27;
    b=b>>1;
    cout<<b<<endl;
    cout<<"Pre increment operator "<<endl;
    int d=6;
    //int c=++d +1;
    int c= d++ + 1;
    cout<<c<<endl;
    int e=5;
    // why this exception 
    cout<<(++e)*(++e)<<endl;
    cout<<"Break and Continue "<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<"Love"<<endl;
        break;
        
    }
    cout<<"Babbar"<<endl;
    cout<<"Switch case "<<endl;
    bool flag=true;
    switch(flag){
       case 1:
       cout<<"T"<<endl;
       break;
       case 0:
       cout<<"R"<<endl;
       break;
       default:
       cout<<"C"<<endl;
       break;
    }
}