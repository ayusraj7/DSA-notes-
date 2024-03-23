#include<bits/stdc++.h>
using namespace std; 
class Animal{
    protected:
    int age;
    public:
    Animal()
    {
        age=5;
    }
    private:
    int weight;
};
class Dog:public Animal{
    public:
    void print(){
        cout<<this->age;
        //cout<<this->weight; here error will come because weight is private and base class private is not inherited 
    }
};
class Cat:protected Animal{
    public:
    void print()
    {
        cout<<"Hello Billi"<<endl;
    }
};
class Rabbit:private Animal{
    public:
    void print(){
        cout<<this->age<<endl;
        cout<<"Hello Rabbit"<<endl;
    }
};


//Multiple inheritance 
class A{
    public:
    int physics;
    int ped;
};
class B{
    public:
    int chemistry;
    int ped;
};
class C:public A,public B{
    public:
    int maths;
};


int main()
{
    Dog d1;
    d1.print();
    //cout<<d1.age<<endl; protected is not assesible outside the class 

    Cat c;
    c.print();

    Rabbit r;

    r.print();


    cout<<"Multiple inheritance "<<endl;
    C obj;
    cout<<obj.physics<<" "<<obj.chemistry<<" "<<obj.maths<<endl;

    //cout<<obj.ped<<endl; here ambiguity will come also known as diamond problem 
    // so we use scope resolution operator 

    cout<<" "<<obj.A::ped<<" "<<obj.B::ped<<" ";
    return 0;
}














































//chlid class inheritance 


// #include<bits/stdc++.h>
// using namespace std; 
// class Animal{
//     public:
//     int age;
//     int weight;

//     void eat(){
//         cout<<"Eating "<<endl;
//     }
// };

// class Dog:public Animal{

// };

// class Cat:protected Animal{
//    public:
//    void print()
//    {
//        cout<<this->age;
//    }
// };

// class Rabbit:private Animal{
//     public:
//     void print()
//     {
//         cout<<this->age;
//     }
// };

// int main()
// {
//     Dog d1;
//     d1.eat();

//     //now protected child class 
//     Cat c;
//     //c.eat(); //here error will come because after protected inheritance public function and data members become protected and it can't be accessed in main class 
//     c.print();
//     cout<<endl;


//     Rabbit r;
//     r.print();
//     return 0;
// }