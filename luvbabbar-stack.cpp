// last in first out concept or first in last out
// filling the storage is different in stack,vector,deque and in list 
// in this we can only push element like the plates in party no pushfront or pushback and in this we cannot use front and back also 
// in this we cannot access it by for(datatype i:s) ,we can only access it by top() function 
#include<iostream>
#include<stack> 
#include<string> 
using namespace std;
int main()
{
    stack<string> s;
    s.push("love");
    s.push("babbar");
    s.push("kumar");
    cout<<"Top element:"<<s.top()<<endl;
    s.pop();
    cout<<"Top element: "<<s.top()<<endl;
    cout<<"Size of stack: "<<s.size()<<endl;
    cout<<"Empty or not "<<s.empty()<<endl;
    
    return 0;

}