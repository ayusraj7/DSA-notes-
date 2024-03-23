#include<bits/stdc++.h>
#include<string.h>
using namespace std; 
int main()
{
    // char name[100];
    // cout<<"Enter your Name"<<endl;
    // cin>>name;

    // cout<<"Apka naam: "<<name<<" hai "<<endl;
    // char ch[100];
    // ch[0]='a';
    // ch[1]='b';
    // ch[2]='c';
    // cout<<ch;
    //for null character 
    // char name[100];
    // cin>>name;
    // for(int i=0;i<6;i++)
    // {
    //           cout<<"index: "<<i<<" value: "<<name[i]<<endl;
    // }
    // //converting null character 
    // int value=(int)name[5];
    // cout<<"Value is:"<<value<<endl;

    // char ch[100];
    // cin>>ch;
    // cout<<ch;

    // char arr[100];
    // cin.getline(arr,50);//by default enter pe band karega value lena maximum length of one word is 50
    // cout<<arr<<endl;
    //homework what is delimeter 

    //char question 
    //1.length of string 
    char name[100];
    cin>>name;
    int count=0;
    // int i=0;
    // while(name[i]!='\0')
    // {
    //     count++;
    //     i++;
    // }
    for(int i=0;i<100;i++)
    {
        if(name[i]=='\0')
        break;
        else 
        count++;
    }
    //predefined function 
    cout<<"Length is "<<strlen(name)<<endl;
    cout<<"Enter the length of the string "<<count<<endl;
    return 0;
}