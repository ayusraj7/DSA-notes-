#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;// we declare global array because while giving argument in some complier it give error so we declare array globally 
// we declare global things by const keyword and after that we don't need to assign array in argument do it simply and it will pass value of array by reference only 
int a[N];
void func()
{
    a[0]=5;
}
int main()
{
    a[0]=7;
    cout<<a[0]<<endl;
    func();
    cout<<a[0]<<endl;
}
// error: when we intiliaze an array as local variable of size 1e7 then it will give error but globally it don't then happens because local variable get stored in
//stack whether global variable it stored in data segment whose has no memory limit but for stack has upto 8mb that's why stack get overflow 