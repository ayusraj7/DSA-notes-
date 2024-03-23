// A queue whose first element is always greatest 
// cannot use front(),back() 
 
#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int> maxi;
    //max heap: means whenever you fetch an element from this then that will be the greatest 
    // min-heap: vice-versa 
    priority_queue<int,vector<int> , greater<int>> mini;
    maxi.push(1);
    maxi.push(2);
    maxi.push(3);
    maxi.push(0);
    cout<<"Size-->"<<maxi.size()<<endl;
    int n=maxi.size();// we declare it to other variable because size() value is keep on changing when we run the loop because of pop function 
    for(int i=0;i<n;i++)
    {
        cout<<maxi.top()<<" ";
        maxi.pop();
    }cout<<endl;
    mini.push(5);
    mini.push(4);
    mini.push(0);
    mini.push(3);
    mini.push(1);
    int m=mini.size();
    for(int i=0;i<m;i++)
    {
        cout<<mini.top()<<" ";
        mini.pop();
    }cout<<endl;
    cout<<"Khali hai kya??-->"<<mini.empty()<<endl;
    return 0;
}