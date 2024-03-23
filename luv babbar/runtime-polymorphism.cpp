#include<bits/stdc++.h>
using namespace std; 
class Animal{
    public:
    Animal(){
        cout<<"Animal constructor is called "<<endl;
    }
    virtual void speak()
    {
        cout<<"Speaking"<<endl;
    }

};
class Dog:public Animal{
    public:
    Dog(){
        cout<<"Dog constructor is called "<<endl;
    }
    void speak(){
        cout<<"Barking"<<endl;
    }
};
int main()
{
//    Dog d1;
//    d1.speak();

    //   //Dynamic object creation 

    //   Animal *a1=new Animal;
    //   a1->speak();

    //   Dog *d1=new Dog;
    //   d1->speak();

    //   //upcasting 
    //   Animal *c=new Dog;
    //   c->speak();

    //   //downcasting 
    //   Dog *d=(Dog*)new Animal;
    //   d->speak();

    //constructor game
    //Animal *a=new Animal();
    //Dog *b=new Dog();
    //Animal *c=new Dog();
    Dog* d=(Dog*)new Animal;


      

}