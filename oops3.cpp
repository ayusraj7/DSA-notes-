#include<bits/stdc++.h>
using namespace std;
class human{
   

    public:
    int height;
    int weight;
    private:
    int age;
    protected:
    int health;
    public:
    int getAge()
    {
        return this->age;
    }
    void setweight(int w)
    {
         this->weight=w;
    }
};
class male:protected human{
public:
string color;
void sleep()
{
    cout<<"Male Sleeping"<<endl;
}
int getheight()
{
    return this->height;
}
};
// for private 
class male1:private human{
    public:
string color;
void sleep()
{
    cout<<"Male Sleeping"<<endl;
}
};
//for protected 
class male2:public human{
    public:
    string color;
    void sleep()
    {
        cout<<"Male Sleeping"<<endl;
    }
    int getheight()
    {
        return this->height;
    }
};
int main()
{
    /*
    male object1;
    cout<<object1.age<<endl;// can't access because it is private in human class 
    cout<<object1.weight<<endl;
    cout<<object1.height<<endl;

    cout<<object1.color<<endl;  
    object1.sleep();
    object1.setweight(84);
    cout<<object1.weight<<endl; 
    */
    // modes of inheritance 
    male m1;
    cout<<m1.getheight()<<endl;// we can access the protected members inside the class and inhertied class only not in main function we can access it by using getter,setter 
    male1 m2;
  //  cout<<m2.height<<endl;// not accessible because inhertitance is priavte and now height also become private so we can't access it.
    male2 m3;
    //cout<<m3.health<<endl;// health is protected member  it can't be accessed 
}