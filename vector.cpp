#include<bits/stdc++.h>//vector is of dyanmic type and it's size is same at array 10^5 and for some website 10^7. This limit is not of an array or vector this limit is
// for contigous memory allocation 
using namespace std;
void printvec(vector<int> v)
{
    cout<<"Size of vector "<<v.size()<<endl;
    for(int i=0;i <v.size(); i++)
    {
        //v.size() complexity O(1)
        cout<<v[i]<<" ";
    }cout<<endl;
}
int main()
{
 // vector is a array whose size can be change 
 vector<int> v;
 int n;
 cin>>n;
 for(int i=0;i<n;++i)
 {
     int x;
     cin>>x;
     printvec(v);
     v.push_back(x);// it adds the value of x in end of vector array and complexityO(1)
 }
 //printvec(v);
 // you can also declare the size of vector 
 vector<int> a(5);
 vector<int> b(5,3);// if we want a vector same no like 3 
 a.push_back(7);
 printvec(a);
 printvec(b);
 v.pop_back();// it deletes the last value which gone first or we have push first its time complexity is O(1)
 printvec(v);
 return 0;
}