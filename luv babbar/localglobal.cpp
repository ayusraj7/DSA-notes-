#include<bits/stdc++.h>
using namespace std; 

int x=2; //GLOBAL VARIABLE 

int main()
{
    x=4;
    int x=20;
    cout<<x<<endl;
    cout<<::x<<endl; // accessing Global with :: 
    return 0;
}