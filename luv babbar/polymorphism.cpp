#include<bits/stdc++.h>
using namespace std; 

class Maths{
    public:
    int sum(int a,int b){
        cout<<"I am in First Signature "<<endl;
        return a+b;
    }

    int sum(int a,int b,int c)
    {
        cout<<"I am in Second Signature "<<endl;
        return a+b+c;
    }

    float sum(int a,float b)
    {
        cout<<"I am in Third Signature "<<endl;
        return a+b+100;
    }

};

//Operator Overloading 
class Param{
    public:
    int val;

    void operator+(Param &obj2)
    {
        int value1=this->val;
        int value2=obj2.val;
        cout<<(value2-value1)<<endl;
    }

};

int main(){
    Maths obj;
    cout<<obj.sum(2,5.12f)<<endl;

    Param obj1,obj2;
    obj1.val=7;
    obj2.val=2;

    //this should print the difference between them 
    obj1+obj2;
    return 0;
}