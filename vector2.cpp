#include<bits/stdc++.h>
using namespace std;
void printvec(vector<int> v)// copy is a expensive operation beacuse it O(n) so you should pass reference in function as preference in argument because like v is also 
// a copy of vector
{
    cout<<"Size:"<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }cout<<endl;
    v.push_back(v);// it will not affect the vector because v is a copy it doesn't change the value of vector 
}
int main()
{
    vector<int> v;
    v.push_back(7);
    v.push_back(6);
    vector<int> v2=v;// the complexity of copying an element is O(n)// v2 is exact copy of v but v does not change for 
    //changing the value of v use &v2 operator it will change the value of v also because of the address  
    v2.push_back(5);
    printvec(v);
    printvec(v2);

}
