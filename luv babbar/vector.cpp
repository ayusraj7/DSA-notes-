#include<iostream>
#include<vector>
using namespace std; 
int main()
{
    vector<int> arr;
    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;
    cout<<sizeof(arr)/sizeof(int)<<endl;

    //2nd way
    vector<int> brr(10,5);
    cout<<"size of b "<<brr.size()<<endl;
    cout<<"Capacity of b "<<brr.capacity()<<endl;
    for(int i=0;i<brr.size();i++)
    {
        cout<<brr[i]<<" ";
    }cout<<endl;

    //3rd way 
    vector<int> crr{10,20,30,40};
    cout<<"size of c "<<crr.size()<<endl;
    cout<<"Capacity of c "<<crr.capacity()<<endl;
    for(int i=0;i<crr.size();i++)
    {
        cout<<crr[i]<<" ";
    }cout<<endl;

     cout<<"Vector crr is empty or not "<<crr.empty()<<endl;
     vector<int> drr;
     cout<<"Vector drr is empty or not "<<drr.empty()<<endl; 
     vector<int> v;
     v.push_back(5);
     v.push_back(7);
     v.push_back(9);
     v.push_back(10);
     v.push_back(12); 
     cout<<"Capacity"<<v.capacity()<<endl;
    return 0;
}