#include<bits/stdc++.h>
using namespace std; 
void solve(int arr[])
{
    cout<<"Size of arr inside the function "<<sizeof(arr)<<endl;
}
int main()
{
    int arr[]={2,19,5,6};
    cout<<arr[0]<<endl;
    cout<<arr<<endl;
    cout<<&arr[0]<<endl;
    cout<<&arr<<endl;
    

    int *p=arr;
    cout<<p<<endl;
    cout<<&p<<endl;

    cout<<*arr<<endl;
    cout<<*arr+1<<endl;
    cout<<*(arr)+1<<endl;
    cout<<*(arr+1)<<endl;
    cout<<arr[1]<<endl;
    cout<<*(arr+2)<<endl;
    cout<<arr[2]<<endl;


    cout<<"Other way of declaring array elements "<<endl;
    cout<<0[arr]<<endl;
    cout<<1[arr]<<endl;
    cout<<2[arr]<<endl;

    // arr=arr+2;//error will come

    //in case of array pointer and pointer we can change the value of pointer but not the address that is mapped with variable in symbol table. 
    //  int a=5;
    //  int *p=&a;
    //  int b[]={2,3,5,1,6,7};
    //  int *ptr=b;
    //  cout<<ptr<<endl;
    //  ptr=ptr+2;
    //  cout<<ptr<<endl;
    //  b=b+2;

    //symbol table ke andar jo entry padi h usey hum change nhi kar sakte 
    p=p+2;
    cout<<p<<endl;



    //pointer and array 
    int arr1[10];
    cout<<sizeof(arr1)<<endl;

    int *ptr=arr1;
    cout<<sizeof(ptr)<<endl;
    

    //character array
    cout<<endl<<"character array "<<endl;
    char ch[10]="ayush";
    char *c=ch;

    cout<<ch<<endl;
    cout<<&ch<<endl;
    cout<<ch[0]<<endl;

    cout<<&c<<endl;
    cout<<*c<<endl;
    cout<<c<<endl;//string print hogi 

    //char 
    char name[10]="sherBano";
    char *cptr=&name[0];
    cout<<name<<endl;
    cout<<&name<<endl;
    cout<<*(name+3)<<endl;
    cout<<cptr<<endl;
    cout<<&cptr<<endl;
    cout<<*(cptr+3)<<endl;
    cout<<cptr+2<<endl;
    cout<<*cptr<<endl;
    cout<<cptr+8<<endl;//null value at the end of termination 


    //fasane wala case 
    cout<<endl<<"speical case "<<endl;
    char character='k';
    cout<<&character<<endl;//null character mila hi nhi usey 

    char* charptr="babbar";//bad practice 
    cout<<charptr<<endl;


    //Pointer with Functions
      //size of arr in function 
       solve(arr1);
    return 0;
}