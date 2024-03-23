#include<bits/stdc++.h>
using namespace std;
class Animal{
    public:
    int age;
    int weight;

    public:
    void bark()
    {
        cout<<"Barking"<<endl;
    }

};
class Human{
    public: 
    string color;
    public:
    void speak()
    {
       cout<<"Speaking "<<endl;
    }
};
class Dog:public Animal{

};
//multilevel inheritance 
class GermanShepherd: public Dog{

}; 
//multiple inheritance 
class Hybrid:public Animal, public Human{

};

// Hierarichial inheritance 
class A{
    public:
    void func1(){
        cout<<"Inside Function1"<<endl;
    }
};
class B:public A{
    public:
    void func2(){
        cout<<"Inside function2 "<<endl;
    }
};
class C:public A{
    public:
    void func3()
    {
        cout<<"inside function3"<<endl;
    }
};

// inheritance ambiguity 
class AA{
    public:

    void func(){
        cout<<"I am A"<<endl;
    }
};
class BB{
    public:

    void func(){
        cout<<"I am B"<<endl;
    }
};
class CC:public AA, public BB{
    public:

    
};
int main()
{
  Dog d;
  d.bark();
  // multiple inheritance 
  Hybrid h;
  h.bark();
  h.speak();

  // hierarichial inheritance 
  A object1;
  object1.func1();
  cout<<endl;
  B object2;
  object2.func1();
  object2.func2();
  cout<<endl;
  C object3;
  object3.func1();
  //object3.func2();// it can't access function as A is inherited and it doesn't have any relation with c 
  object3.func3();

  //inheritance ambiguity 
  CC obj;
  obj.AA::func();

}