#include<bits/stdc++.h>
using namespace std; 
void printSubsequence(string str, string output ,int i)
{
    //base case 
    if(i==str.length())
    {
        cout<<output<<endl;
        return;
    }
     
     //include ki call :-isme hatana bhi padega isliye nhi chalaya 
     output.push_back(str[i]);
     printSubsequence(str,output,i+1);
     output.pop_back();

    //exclude ki call 
    printSubsequence(str,output,i+1);
    // //include ki call 
    // output.push_back(str[i]);
    // printSubsequence(str,output,i+1);
}
void printSubsequence1(string str,string output,int i)
{
    if(i==str.size())
    {
        cout<<output<<endl;
        return;
    }

    //include
    printSubsequence1(str,output+str[i],i+1);

    //exclude 
    printSubsequence1(str,output,i+1);
}
int main()
{
    string str="abc";
    string output="";
    int i=0;
    printSubsequence(str,output,i);
    cout<<endl<<endl;
    printSubsequence1(str,output,i);
    return 0;
}