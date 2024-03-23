//macro program 
#include<bits/stdc++.h>
using namespace std;
#define AREA(l,b) (l*b)
#define DATE 31
#define max(a,b) ((a<b)?(a):(b))  //  function like macros
int main()
{
    int l=10,b=12,area;
    area=AREA(l,b);
    cout<<"Area of rectangle is "<<area<<endl;
    // another program 
    cout<<"Lockdown will be extended upto "<<DATE<<endl;
    int x=5,y=8;
    cout<<"Maximum number is "<<max(x,y);
    return 0;
}
// There are four types of macros 
//1. object like macros : like #define DATE 31 which act like a object 
//2. chain macros :in this value of one macro is declared on other and other value is declared below it 
//3. multi-line macros  :
//4. function like macros : 