#include<iostream>
#include<queue>
using namespace std; 

int main()
{
    //creation 
    queue<int> q;

    //insertion 
    q.push(5);
    q.push(15);
    q.push(25);
    q.push(55);

    //size 
    cout<<"size of Queue is "<<q.size()<<endl;
    q.pop();
    cout<<"size of Queue is "<<q.size()<<endl;

    if(q.empty())
    {
        cout<<"Q is empty "<<endl;
    }else
    {
        cout<<"Q is not empty "<<endl;
    }

    cout<<"Front element is "<<q.front()<<endl;

}