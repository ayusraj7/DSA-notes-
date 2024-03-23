#include<bits/stdc++.h>
using namespace std;
int score=15;
void a(int &i)
{
    cout<<i<<endl;
    cout<<score<<"in a "<<endl;
}
void b()
{
    cout<<score<<"in b"<<endl;
}
int main()
{
    cout<<score<<"in main()"<<endl;
 int i=5;
 a(i);
 {
     int i=2;
     cout<<i<<endl;//local variable whose value is valid inside the brackets only 
 }
 cout<<i<<endl;
}