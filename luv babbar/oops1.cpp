#include<iostream>
using namespace std; 
class Animal{
   public:
    //state or properties 
    int age;
    string name;
    int weight;

    //behaviour
    void eat(){
      cout<<"Eating"<<endl;
    }

    void sleep(){
       cout<<"Sleeping"<<endl;
    }


    //setter 

    void setWeight(int weight)
    {
        this->weight=weight;
    }

    //getter 
    int rameshweight(){
        return weight;
    }


};
int main(){
     //Object creation 

     //Static 
    //  Animal ramesh;
    //  ramesh.age=12;
    //  ramesh.name="Lion";
    //  cout<<"Age of ramesh is "<<ramesh.age<<endl;
    //  cout<<"Name of ramesh is "<<ramesh.name<<endl;

    //  ramesh.eat();

    //  ramesh.sleep();

    //  ramesh.setWeight(100);
     
    //  cout<<"Weight of ramesh is "<<ramesh.rameshweight();


     //Dynamic Memory 

     Animal* suresh=new Animal;
     (*suresh).age=15;
     (*suresh).name="billi";

     //alternate - dynamic 
     suresh->age=17;
     suresh->name="kutta";

     suresh->eat();
     suresh->sleep();
    return 0;
}





















// #include<bits/stdc++.h>
// using namespace std; 
// class Animal{
//   int age;
//   int weight;
//   char ch;
// };
// int main()
// {
//     cout<<"Size of empty class is "<<sizeof(Animal)<<endl;
// }