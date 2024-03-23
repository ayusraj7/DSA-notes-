#include<iostream> 
using namespace std; 
class Hero{
   
   /*with no properties or variables 1 byte is given to object size just to justify the size
   for the identification of object  */
   //properties 
   // by default access specifier is private 
   private: 
   int x=3;
   public:
   int health=5;
   char level;
   void print()
   {
      cout<<x<<endl;
   }
    // getter and setter function are there which is used to access private members from the class 
    int gethealth()
    {
       return x;
    }
    void sethealth(int h)
    {
       health=h;
    }
    void setlevel(char ch)
    {
       level=ch;
    }
};
int main()
{
   //creation of object 
   //static allocation 
   Hero h1;

   //dynmaically 
   Hero *b=new Hero;
   cout<<"level is"<<(*b).level<<endl;
   cout<<"health is "<<(*b).health<<endl;
   cout<<"hero's health "<<(*b).gethealth()<<endl;
   h1.setlevel('B');

   cout<<h1.health;//by using . operator we can get access to members which is public 
   cout<<h1.level<<endl;
   h1.print();
   
   //cout<<"size: "<<sizeof(h1)<<endl;
   return 0;
}