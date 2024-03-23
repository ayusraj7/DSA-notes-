#include<iostream>
#include<string.h>
using namespace std;
void replaceString(char str[]) 
{
    int i=0;
    int n=strlen(str);
    while(i<n)
    {
        if(str[i]==' ')
        {
            str[i]='@';
        }
        i++;
    }
}
bool checkPalindrome(char word[])
{
    int i=0;
    int n=strlen(word);
    int j=n-1;
    while(i<=j)
    {
        if(word[i]!=word[j])
        {
            return false;
        }
        else 
        {
            i++;
            j--;
        }
    }
    return true;
}
void upperCase(char str[])
{
   int i=0;
   int n=strlen(str);
   for(int i=0;i<n;i++)
   {
       if(str[i]>='a' && str[i]<='z')
       {
       str[i]=str[i]-'a'+'A';
       }
   }
}
int main()
{
//    char name[100];
//    cout<<"Enter the name"<<endl;
//    cin>>name;
//    int length=strlen(name);
//    //2. Reverse a string :here we use two pointer approach 
//    int s=0;
//    int e=length-1;
//    while(s<=e)
//    {
//        swap(name[s],name[e]);
//        s++;
//        e--;
//    }
   //by for loop
//    for(;s<=e;)
//    {
//        swap(name[s],name[e]);
//        s++;
//        e--;
//    }
//    cout<<name<<endl;
//    cout<<strrev(name)<<endl;
   
   //3. Replace all spaces ant put @
   char sentence[100];
   cout<<"Enter the name "<<endl;
   cin.getline(sentence,50);
   replaceString(sentence);
   cout<<"Removed spaces are :"<<sentence<<endl;


   //4.palindrome 
   char word[100];
   cout<<"Enter the word"<<endl;
   cin>>word;
   cout<<"Word is pallindrome or not "<<checkPalindrome(word)<<endl;

   //5.upper case conversion
   char str[100];
   cout<<"Enter the string"<<endl;
   cin>>str;
   upperCase(str);
   cout<<"Uppercased string is "<<str<<endl;
   
}