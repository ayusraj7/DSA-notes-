#include<iostream>
using namespace std;
void update(int **p2)
{
    //p2=p2+1;
    //kuch change hoga ya nhi -no 
     
     //*p2=*p2+1;
     //kuch change hoga ya nhi-yes 

     **p2=**p2+1;
     //kuch change hoga ya nhi-yes 
}
int main()
{
    int i=5;
    int* p=&i;
    int** p2=&p;
    cout<<endl<<"Sab sahi chal rha h"<<endl;  
    /*
    cout<<"printing p"<<p<<endl;
    //cout<<"address of p"<<&p<<endl;
    cout<<*p2<<endl;
    cout<<i<<endl;
    cout<<*p<<endl;
    cout<<**p2<<endl;

    cout<<&i<<endl;
    cout<<p<<endl;
    cout<<*p2<<endl;

    cout<<&p<<endl;
    cout<<p2<<endl;
    */
   cout<<"before:"<<i<<endl;
   cout<<"before:"<<p<<endl;
   cout<<"before:"<<p2<<endl;
   update(p2);
   cout<<"After:"<<i<<endl;
   cout<<"After:"<<p<<endl;
   cout<<"After:"<<p2<<endl;

}