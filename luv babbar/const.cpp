#include<bits/stdc++.h>
using namespace std; 
class abc{
    int x;
    int *y;
    public:

    abc(){
        x=0;
        y=new int(0);
    }
    int getX() const
    {
        return x;
    }
    void setX(int _val) 
    {
        x=_val;
    }
    int getY() const
    {
        int f=20; 
       // y=&f;
        return *y;
    }
    void setY(int _val)
    {
        *y=_val;
    }
};
int main()
{
    abc a;
    cout<<a.getX()<<endl;
    cout<<a.getY()<<endl;
    

    //2. constant with pointers 
    // int *a =new int;
    // *a =2;
    // cout<<*a<<endl;
    // //here memory leak will happen as it is in the heap memory 
    // delete a;
    // int b=5;
    // a=&b;
    // cout<<*a<<endl;

    //const int *a=new int(2);//const data, non-const pointer
    // int const *a=new int(2);//same as upper  
    //*a=2; not running becuase const int pointer it means your value of 
    // address of *a is const but pointer is not const 
    // cout<<*a<<endl;

    //ex:-
    // int b=20;
    // a=&b; //pointer itself can be reassigned  
    // cout<<*a<<endl;


    //3. CONST pointer , but non-const data 
    // int *const a= new int(2);
    // cout<<*a<<endl;
    // *a=20;
    // cout<<*a<<endl;
     
    //  If i write const before '*' then content will be const else 

    //4. CONST pointer,CONST data 
    // const int *const a = new int(10);
    // cout<<*a<<endl;
    

    return 0;




}