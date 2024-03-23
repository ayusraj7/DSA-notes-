#include<iostream>
using namespace std;
int main()
{
    pair<int,string> p;
    //p={2,"abc"}; we can simply input the value in pair like this 
    p=make_pair(2,"abc");//make_pair() function is used to put the value in pair 
    pair<int,string> &p1=p;//if we simply pass value in p1 by p then it will just copy the value of p and the value of p is not changed but when we reference in it then 
    //it will change the value of p to 3.
    p1.first=3;
    cout<<p.first<<" "<<p.second<<endl;
    int a[]={1,2,3};
    int b[]={2,3,4};
    pair<int,int> p_array[3];//we can assign array like pair this way 
    p_array[0]={3,1};
    p_array[1]={2,3};
    p_array[2]={3,4};
    swap(p_array[0],p_array[3]);//we can assign array like pair this way 
    for(int i=0;i<3;i++)
    {
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }
    //we can simply take input in pairs like this using cin . Pair are used when we have to take two things together and also if change one, other will also do that.
    pair<int,string> c;
    cin>>c.first;
    cout<<c.first<<endl;
    return 0;
}