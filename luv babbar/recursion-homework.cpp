#include<bits/stdc++.h>
using namespace std; 
// void lastOccurence(string str,int i,char key ,int &ans)
// {
    
//     if(i==str.size())
//     {
//         return;
//     }
    
//     if(str[i]==key)
//     {
//        ans=i;
//     }

//      lastOccurence(str,i+1,key,ans);
// }
//for right to left implementation here i=str.size()-1
void lastOccurence(string str,int i,char key ,int &ans)
{
    
    if(i<0)
    {
        return;
    }
    
    if(str[i]==key)
    {
       ans=i;
    }

     lastOccurence(str,i-1,key,ans);
}


//reverse a string 
void reverseString(string &str,int i,int j)
{
    if(i>j)
    {
        return;
    }
    swap(str[i],str[j]);
    reverseString(str,i+1,j-1);
}



//palindrome check 
bool isPalindrome(string str,int i,int j)
{
    if(i>=j)
    {
        return true;
    }
    if(str[i]!=str[j])
    {
        return false;
    }
    return isPalindrome(str,i+1,j-1);
}



int main()
{
    string str="afifa";
    char key='k';
    int ans=-1;
    lastOccurence(str,str.size()-1,key,ans);
    cout<<"Last occurence of key is "<<ans<<endl;
    cout<<endl<<"REVERSE A STRING "<<endl;
    reverseString(str,0,str.size()-1);
    cout<<"Now the string is --> "<<str<<endl;
    int i=0;
    int j=str.size()-1;
    if(isPalindrome(str,i,j))
    {
        cout<<"String is pallindrome"<<endl;
    }else 
    {
        cout<<"String is not pallindrome"<<endl;
    }

    //s.find() function for further use 
    // int x=str.find("fa");
    // if(str.find('fig')==string::npos)
    // {
    //     cout<<"how are you "<<endl;
    // }
    // cout<<x<<endl;

    //subarray print 
    vector<int> arr{1,2,3,4,5};
    vector<int> p;
  

}