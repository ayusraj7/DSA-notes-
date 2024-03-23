#include<bits/stdc++.h>
using namespace std;
class B{
    public:
    int a;
    int b;
    int add()
    {
        return a+b;
    }
    void operator+(B &obj)
    {
        /*int value1=this->a;
        int value2=obj.a;
        cout<<"output"<<value2-value1<<endl;*/
        cout<<"love babbar"<<endl;
    }
    void operator() (){
        cout<<"Main Bracket Hu "<<this->a <<endl;
    }
};
// runtime polymorphism 
class animal{
    public:
    void speak()
    {
        cout<<"Speak "<<endl;
    }
};
class dog:public animal{
    public:
    void speak()
    {
        cout<<"Bark"<<endl; 
    }
};
int main()
{
  B obj1, obj2;
  obj1.a=4;
  obj2.a=7;
  obj1 + obj2;// we change the work of + operator
  obj1(); 
  animal a;
  a.speak();
  dog d;
  d.speak();
}