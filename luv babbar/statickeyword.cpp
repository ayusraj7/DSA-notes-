#include<bits/stdc++.h>
using namespace std; 
class abc{
    public:
    static int x,y;

    void print() const{
        cout<<x<<" "<<y<<endl;
    }
};
int abc::x;
int abc::y;
int main()
{
    abc obj1;
    abc obj2;
    obj1.x=3;
    obj1.y=4;
    obj1.print();
    obj2.x=30;
    obj2.y=40;
    obj1.print();
    obj2.print();
}