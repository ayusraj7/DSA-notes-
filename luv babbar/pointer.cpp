#include<bits/stdc++.h>
using namespace std; 
int main()
{
    int a=5;
    int* ptr=&a;
    cout<<a<<endl;
    cout<<&a<<endl;
    char b='b';
    char* ctr=&b;
    cout<<b<<endl;
    cout<<&b<<endl;
    double d=1.03;
    double *dtr=&d;


    cout<<"size of int pointer"<<sizeof(ptr)<<endl;
    cout<<"size of char pointer "<<sizeof(ctr)<<endl;
    cout<<"size of double pointer "<<sizeof(dtr)<<endl;

    //changing the pointer value with the help of pointer
    cout<<endl<<"Changing the value by pointer "<<endl; 
    *ptr=*ptr+2;//here will not be changed only the value of pointer is changed 
    cout<<*ptr<<endl<<endl;

    // ptr=ptr+1;
    // cout<<*ptr<<endl;//ptr got increased by 4 and when we do *ptr then garbage value comes because at that storagae no value is stored 


    // //BAD PRATICE garbage value 
    // int *p;
    // cout<<*p<<endl;

    //// NULL pointer 
    // int* p=0;
    // // int* p=nullptr;
    // cout<<*p<<endl;

    int p=5;
    int *pptr=&p;
    
    //copy pointer 
    int* copyptr=pptr;
    cout<<*pptr<<endl;
    cout<<*copyptr<<endl;

    *pptr=6;
    cout<<*pptr<<endl;
    cout<<*copyptr<<endl;
    return 0;
}