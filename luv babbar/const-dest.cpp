#include<bits/stdc++.h>
using namespace std; 

class Animal{
    //state or Properties 
    private:
    int weight;
    public:
    int age;
    string name;
    
    //default constructor
    Animal(){
        this->weight=0;
        this->age=0;
        this->name="Ayush";
        cout<<"Constructor Called "<<endl;
    }
    void eat()
    {
        cout<<"Eating "<<endl;
    }
    void sleep()
    {
        cout<<"Sleeping"<<endl;
    }

    //Parameterised Constructor 
    Animal(int age)
    {
        this->age=age;
        cout<<"Parameterised Constructor called"<<endl;
    }
    //parameterised Constructor 2
    Animal(int age, int weight )
    {
        this->age=age;
        this->weight=weight;
        cout<<"Parameterised Constructor 2 called "<<endl;
    }

    //parameterised Constructor 3 
    Animal(int age, int weight, string name)
    {
        this->age=age;
        this->weight=weight;
        this->name=name;
        cout<<"Parameterised Constructor 3 called "<<endl;
    }

    //copy constructor 
    Animal(Animal &obj)
    {
        this->age=obj.age;
        this->weight=obj.weight;
        this->name=obj.name;
        cout<<"I am inside copy constructor "<<endl;
    }

    //destructor 
    ~Animal()
    {
        cout<<"Destructor called "<<endl;
    }
    
};
int main()
{
    Animal a(10,50);
    Animal* b=new Animal(100);
    Animal* c=new Animal(21,120,"Darshan");

    Animal d=a;

    //delete destructor for dynamic content 
    delete b;
    delete c;



}