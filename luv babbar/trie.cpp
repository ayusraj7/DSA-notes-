#include<bits/stdc++.h>
using namespace std; 
class TrieNode{
    public:
    char data;
    TrieNode* children[26];
    bool isTerminal;

    TrieNode(char d)
    {
        this->data=d;
        this->isTerminal=false;
        for(int i=0;i<26;i++)
        {
            children[i]=NULL;
        }
    } 
};

void insertWord(TrieNode* root,string word)
{
    if(word.length()==0)
    {
        root->isTerminal=true;
        return;
    }
    cout<<"inserting "<<word<<endl;
    char ch=word[0];
    int index=ch-'a';
    TrieNode* child;
    //present
    if(root->children[index]!=NULL)
    {
        child=root->children[index];
    }else 
    {
        //not present 
        child=new TrieNode(ch);
        root->children[index]=child;

    }

    //recusrive call 
    insertWord(child,word.substr(1));
}

bool searchWord(TrieNode* root, string word)
{
    //base case 
    if(word.length()==0)
    {
        return root->isTerminal;
    }

    //fetch index 
    char ch=word[0];
    int index=ch-'a';
    TrieNode* child;
    if(root->children[index] != NULL)
    {
        child=root->children[index];
    }else 
    {
        return false;
    }

    return searchWord(child,word.substr(1));
}

void deleteNode(TrieNode* root,string word)
{
    if(word.length()==0)
    {
        root->isTerminal=false;
    }

    char ch=word[0];
    int index=ch-'a';
    TrieNode* child;
    if(root->children[index]==NULL)
    {
        return;
    }else 
    {
        child=root->children[index];
    }
    //recursion will do the work 
    deleteNode(child,word.substr(1));
    }
int main()
{
    TrieNode* root=new TrieNode('-');
    insertWord(root,"coding");
    insertWord(root,"code");
    insertWord(root,"coder");
    insertWord(root,"baba");
    insertWord(root,"codehelp");
    insertWord(root,"babu");
    insertWord(root,"baby");
    insertWord(root,"shona");
    cout<<"searching "<<endl;
    string s="codehelp";
    if(searchWord(root,s))
    {
        cout<<s<<" is present "<<endl;
    }else 
    {
        cout<<s<<"is absent "<<endl;
    }

    //deleting the node 
    cout<<"Deleting the node "<<endl;
    deleteNode(root,"codehelp");
    

    cout<<"Searching the Codehelp after deleting "<<endl;
    if(searchWord(root,s))
    {
        cout<<s<<" is present "<<endl;
    }else 
    {
        cout<<s<<"is absent "<<endl;
    }

}