#include<bits/stdc++.h>
using namespace std; 
class abc{
    public:
    int x;
    int *y;
    abc(int _x,int _y): x(_x) , y(new int(_y)){}
    //default dumb copy constructor: it does SHALLOW COPY : virutal constructor 
    // abc(const abc &obj)
    // {
    //     x=obj.x;
    //     y=obj.y;
    // }

    // OUR SMART DEEP COPY 
    abc(const abc &obj)
    {
        x=obj.x;
        y=new int(*obj.y);
    }

    void print() const{
       cout<<"X-->"<<x<<" PTR Y Content of Y "<<" "<<y<<" "<<*y<<endl;
    }

    ~abc(){
        delete y;
    }
};
int main(){
    abc a(1,2);
    a.print();

    abc b=a;
    b.print();
    *b.y=20;
    b.print();

    a.print();

    return 0;
}