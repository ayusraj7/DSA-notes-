#include<bits/stdc++.h> 
using namespace std; 
class Hero{
   private: 
   int health;
   public:
   char *name; 
   char level;
   static int timeToComplete;
   Hero()
   {
      cout<<"Default constructor called "<<endl;
      name=new char[100];
   }
   Hero(int health)
   {
      cout<<"this->"<<this<<endl;
      this-> health = health;
   }
   // one more parameterized constructor 
   Hero(int health, char level)
   {
      this->health=health;
      this->level=level;
   }
   // copy constructor : copy of object 
   //default copy constructor do shallow copy : in that we access the same memory 
   // in deep copy one more copy is created so that same memory can't be accessed 
   
   void print()
   {
      cout<<"name:"<<this->name<<endl;
      cout<<level<<endl;
      cout<<health<<endl;
   }
   int getHealth(){
      return health;
   }
   char getLevel()
   {
      return level;
   }
   void setHealth(int h)
   {
      health=h;
   }
   void setLevel(char ch)
   {
      level=ch;
   }
   void setName(char name[])
   {
      strcpy(this->name,name);
   }
   ~Hero(){
     cout<<"Destructor Bhai called "<<endl;
  }
   static int random()
   {
       return timeToComplete;
   } // static function can only access the static data members only 
};
int Hero::timeToComplete=5;// int classname ::fieldname =value intilization 
 
int main()
{
   
  Hero h1;
  h1.setHealth(12);
  h1.setLevel('D');
  char name[7]="Babbar";
  h1.setName(name);
  h1.print();
  
  // use default copy constructor 

  Hero hero2(h1);
  hero2.print();
  // Hero hero2 =hero1;
  h1.name[0]='G';
  h1.print();

  hero2.print();//shallow copy 

  // copy assignment operator 
  /*
  Hero a(10,'c');
  Hero b(20,'B');
  a=b; // this is copy assignment operator 
  */

  // destructor 
  /* it deallocate the memory and used to dellocate of memory 
  it get auotmatically created or we can make it through ourself also 
  it has ~ sign in front

   * in static object allocation - destructor get automatically called 
   but in dynamic object allocation -destructor don't get called automatically we have to do it manually 
   */

   Hero *b =new Hero;
   delete b;

   // it create that type of number that belongs to class means to access that you don't need to create object for that 
   cout<<Hero::timeToComplete <<endl;
  
   // static function 
   // here also you don't need a object to call it you can directly call it and it also works properly if we intialize it with the object it don't have any this keyword 
   cout<<Hero::random()<<endl;
}