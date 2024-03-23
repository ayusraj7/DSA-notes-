 //Dynamic memory allocation  
#include<bits/stdc++.h>
using namespace std;
int& func(int a)//here it is bad practice because the new reference is local so it return type must be an reference return type like int& func(int a)
{
    int num=a;
    int& ans=num;
    return ans;
}
void update(int& n)// in call by reference our syntax for argument will be int &n and for reference variable it will be int& n it is different from call by reference 
{
    n++;
}
int main()
{
    int n=5;
    cout<<"Before update:"<<n<<endl;
    update(n);
    cout<<"After update:"<<n<<endl;
    //
    int a=5;
    cout<<a<<endl;
    int& b=a;
    a++;
    cout<<a<<endl;
    b++;
    cout<<a<<endl;
    cout<<b<<endl;
     cout<<func(n);
}