#include<bits/stdc++.h>
using namespace std; 

class Animal{
    protected:
    string height="28cm";
    public:
    void eat(){
        cout<<"Animal is eating"<<endl;
    }
    string name="Lakshya";
};
class Dog:private Animal{
    public:
    int weight=45;
    void hei(){
        cout<<height<<endl;
    }
    //operator overloading 
    int a=15;
    int b=3;
    void operator +(){
        int value2=this->a - this->b;
        cout<<value2<<endl;
    }

};
int main(){
    Dog d;
    cout<<d.weight<<endl;
    // d.eat();
    // cout<<d.name<<endl;
    d.hei();

    
}


// class Animal{
   
//     public:
//      Animal()
//     {
//         cout<<"Constructor called "<<endl;
//     }
//     Animal(int w)
//     {
//         this->a=w;
//         cout<<"parameterized constructor called"<<endl;
//     }
//     Animal(Animal &obj){
//         this->a=obj.a;
//         cout<<"Copy constructor "<<endl;
//     }
//     double a;
//     int b;
//     char ch;
//     void eat(){
//         cout<<"Lakshya is eating something "<<endl;
//     }
//     void aset(int x)
//     {
//         this->a=x;
//     }
//     void aget()
//     {
//         cout<<this->a<<endl;
//     }
//     ~Animal(){
//         cout<<"Destructor called "<<endl;
//     }
// };


// void printSolution(vector<vector<char>> board,int col ,int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             cout<<board[i][j]<<" ";
//         }cout<<endl;
//     }
// }
// bool issafe(vector<vector<char>> &board,int row,int col,int n)
// {
//     int i=row;
//     int j=col;
//     while(j>=0){
//         if(board[i][j]=='Q')
//         {
//             return false;
//         }
//         j--;
//     }
//     j=col;
//     while(i>=0 && j>=0)
//     {
//         if(board[i][j]=='Q')
//         {
//             return false;
//         }
//         i--;
//         j--;
//     }
//     i=row;
//     j=col;
//     while(i<n && j>=0)
//     {
//         if(board[i][j]=='Q')
//         {
//             return false;
//         }
//         i++;
//         j--;
//     }
//     return true;
// }
// void solve(vector<vector<char>> &board,int col,int n)
// {
//     if(col==n)
//     {
//         printSolution(board,col,n);
//         cout<<endl;
//         return;
//     }

//     for(int row=0;row<n;row++)
//     {
//         if(issafe(board,row,col,n))
//         {
//         board[row][col]='Q';
//         solve(board,col+1,n);
//         board[row][col]='-';
//         }

//     }
// }
//void permutation(string s,int i,string output)
// {
//     if(i==s.size())
//     {
//         cout<<s<<endl;
//         return;
//     }
//     for(int j=i;j<s.size();j++)
//     {
//         swap(s[i],s[j]);
//         permutation(s,i+1,output);
//         swap(s[i],s[j]);
//     }
// }

// int partition(vector<int> &v,int s, int e)
// {
//     int pivotIndex=s;
//     int pivotElement=v[s];
//     int count=0;

//     for(int i=s+1;i<=e;i++)
//     {
//         if(v[i]<=pivotElement)
//         {
//             count++;
//         }
//     }
//     int i=s,j=e;
//     swap(v[pivotIndex],v[count+s]);
//     pivotIndex=count+s;
//     while(i<pivotIndex && j>pivotIndex)
//     {
//         while(v[i]<=pivotElement)
//         {
//             i++;
//         }
//         while(v[j]>pivotElement)
//         {
//             j--;
//         }
//         if(i<pivotIndex && j>pivotIndex)
//         {
//             swap(v[i],v[j]);
//         }
//     }
//     return pivotIndex;
// }

// void quicksort(vector<int> &v,int s, int e)
// {
//     if(s>=e)
//     {
//         return;
//     }
//     int pivot=partition(v,s,e);
//     cout<<"pivot"<<pivot<<endl;
//     quicksort(v,s,pivot-1);
//     quicksort(v,pivot+1,e);
// }



// void mergearray(vector<int> &arr,int s,int e)
// {
//     int mid=(s+e)/2;
//     int len1=mid-s+1;
//     int len2=e-mid;
//     int *left=new int[len1];
//     int *right=new int[len2];
//     int k=s;
//     for(int i=0;i<len1;i++)
//     {
//         left[i]=arr[k++];
//     }
//     for(int i=0;i<len2;i++)
//     {
//         right[i]=arr[k++];
//     }
//     int mainindexarray=s;
//     int rightIndex=0;
//     int leftIndex=0;
//     while(leftIndex<len1 && rightIndex<len2)
//     {
//         if(left[leftIndex] < right[rightIndex])
//         {
//             arr[mainindexarray++]=left[leftIndex++];
//         }else {
//             arr[mainindexarray++]=right[rightIndex++];
//         }
//     }
//     while(leftIndex<len1)
//     {
//         arr[mainindexarray++]=left[leftIndex++];
//     }
//     while(rightIndex<len2)
//     {
//         arr[mainindexarray++]=right[rightIndex++];
//     }

// }
// void merge(vector<int> &arr,int s, int e)
// {
//     if(s>=e)
//     {
       
//         return;
//     }
//     int mid=(s+e)/2;
   
    
//     merge(arr,s,mid);
//     merge(arr,mid+1,e);
//     mergearray(arr,s,e);
// }
// void subsequence(string s,int i,string output)
// {
//     if(i==s.size())
//     {
//         cout<<output<<" ";
//         return;
//     }
//     subsequence(s,i+1,output+s[i]);
//     subsequence(s,i+1,output);
// }

// bool issorted(int arr[],int i,int n)
// {
//     if(i==n)
//     {
//         return true;
//     }
//     if(arr[i+1]<arr[i])
//     {
//         return false;
//     }
//     return issorted(arr,i+1,n);
// }
// bool binarySearch(int arr[],int i,int j,int key)
// {
//     if(i>j)
//     {
//         return false;
//     }
//     int mid=(i+j)/2;
//     if(arr[mid]==key)
//     {
//         return true;
//     }else if(arr[mid]>key)
//     {
//         return binarySearch(arr,i,mid-1,key);
//     }else
//     {
//         return binarySearch(arr,mid+1,j,key);
//     }
// }
// bool findkey(string str,int i,char key)
// {
//     if(i==str.size())
//     {
//         return false;
//     }
//     if(str[i]==key)
//     {
//         return true;
//     }
//     return findkey(str,i+1,key);
// }
// void print(int arr[],int n)
// {
//     if(n<0)
//     {
//         return;
//     }
//     print(arr,n-1);
//     cout<<arr[n]<<" ";
// }
// void print2(int arr[],int i,int n)
// {
//     if(i==n)
//     {
//         return;
//     }
//     print2(arr,i+1,n);
// }
// int factorial(int n)
// {
//     if(n==1){
//         return 1;
//     }
//     int a=factorial(n-1);
//     return a*n;
// }
// int fibonacci(int n)
// {
//     if(n==1 || n==0)
//     {
//         return n;
//     }
//     int a=fibonacci(n-1);
//     int b=fibonacci(n-2);
//     return a+b;
// }
// bool isprime(int num)
// {
//     if(num==0 || num==1)
//     {
//         return false;
//     }
//     for(int i=2;i<=sqrt(num);i++)
//     {
//         if(num%i==0)
//         {
//             return false;
//         }
//     }
//     return true;
// }
// int primeNumbers(int first,int second)
// {
//     int count=0;
//     for(int i=first;i<=second;i++)
//     {
//         if(isprime(i))
//         {
//             count++;
//             cout<<i<<endl;
//         }
//     }
//     return count;
// }
// int seive(int num)
// {
   
//     if(num==0 || num==1)
//     {
//         return 0;
//     }
//     vector<bool> v(num,true);
//     int count=0;
//     v[0]=v[1]=false;
//     for(int i=2;i<num;i++)
//     {
//         if(v[i])
//         {
//             count++;
//             int j=2*i;
//             while(j<num)
//             {
//                 v[j]=false;
//                 j=j+i;
//             }
//         }
//     }
//     return count;

// }

// void substring(string s,int i,string output)
// {
//    if(i==s.size())   
//    {
//        cout<<output<<endl;
//        return;
//    }
   
//    substring(s,i+1,output+s[i]);
//    substring(s,i+1,output);
// }
// void subsequence(string s,int i)
// {
//     if(i==s.size())
//     {
//         return;
//     }
//     string str="";
    
//     for(int j=i;j<s.size();j++){
//         str=str+s[j];
//         cout<<str<<endl;
//     }
//     subsequence(s,i+1);
// }
// int squareroot(int n)
// {
//     int s=0,e=n;
//     int ans=0;
//     while(s<=e)
//     {
//         int mid=(s+e)/2;
//         if(mid*mid == n)
//         {
//             return mid;
//         }else if(mid*mid > n)
//         {
//             e=mid-1;    
//         }else 
//         {
//             s=mid+1;
//             ans=mid;
//         }
//     }
//     return ans;
// }

// int binarysearch(vector<int> v,int s, int e,int target)
// {
    
//     while(s<=e)
//     {
//         int mid=s+(e-s)/2;
//         if(v[mid]==target)
//         {
//             return mid;
//         }else if(v[mid]<target)
//         {
//             s=mid+1;
//         }else 
//         {
//             e=mid-1;
//         }
//     }
// }
// int searchInSorted(vector<int> v,int s, int e,int target)
// {
//     int pivot=pivotElement(v,s,e);
//     if(v[pivot]>target && target>v[0])
//     {
//         e=pivot+1;
//     }else 
//     {
//         s=pivot;
//     }
//     cout<<"e"<<e<<endl;
//     return binarysearch(v,s,e,target);

// }

//int pivotElement(vector<int> arr,int s, int e)
// {
//     while(s<e)
//     {
//         int mid=(s+e)/2;
//         if(arr[mid-1]<arr[mid] && arr[mid+1]<arr[mid])
//         {
//             return mid;
//         }else if(arr[s]>arr[mid])
//         {
//             e=mid;
//         }else
//         {
//             s=mid+1;
//         }
//     }
//     return s;
// }



    // int main()
    // {
    //   vector<int> v{4,5,6,7,9,0,1,2,3};
    //   int s=0;
    //   int e=v.size()-1;
    //   cout<<"pivot element is :"<<pivotElement(v,s,e)<<endl;
    //   cout<<"search in rotated and sorted array is "<<searchInSorted(v,s,e,2);
    // int n=168;
    // cout<<"Square root of "<<squareroot(n)<<endl;
    // int squreans=squareroot(n);
    // int precision=3;
    // double step=0.1;
    // double finalans=squreans;
    // for(int i=0;i<precision;i++)
    // {
    //     for(double j=finalans;j*j<=n;j=j+step){
    //         finalans=j;
    //     }
    //     step=step/10;
    // }
    // cout<<"Accurate Square root is "<<finalans<<endl;
    //     char ch[10];
    //    cin>>ch;
    //    cout<<ch[2]<<endl;

    //    char name[100];
    //    cin.getline(name,100);
    //    cout<<"name-->"<<name<<endl;
    //    cout<<strlen(name)<<endl;
    //    char name2[100];
    //    cin>>name2;
    //    cout<<strcmp(name,name2);
    // char ch='z';
    // char ch1=ch-'a'+'A';
    // cout<<ch1<<endl;
    // cout<<'z'-'Z'<<endl;

    // string name;
    // getline(cin,name);
    // cout<<"name"<<name<<endl;
    // string str="Ayush kumar rajput ";
    // str.push_back('y');
    // cout<<str<<endl;
    // cout<<str.substr(0,3)<<endl;
    // cout<<str.find("yu")<<endl;
    // cout<<str.replace(2,4,"s")<<endl;
    // cout<<str.erase(0,3)<<endl;

    // string name="azxxzy";
    // set<char> st;
    // for(int i=0;i<name.size();i++)
    // {
    //     st.insert(name[i]);
    // }
    // for(auto ch:st)
    // {
    //     cout<<ch;
    // }
    //       vector<int> v{1,3};
    //   int s=0;
    //   int e=v.size()-1;
    //   cout<<"pivot element is :"<<pivotElement(v,s,e)<<endl;
    // string s="ayush";
    // string output="";
    // int i=0;
    // substring(s,i,output);
    // subsequence(s,i);
    // int num;
    // cout<<"Enter the no "<<endl;
    // cin>>num;
    // if(isprime(num))   
    // {
    //     cout<<num<<"is a prime number "<<endl;
    // }else{
    //     cout<<num<<"is a not a prime number "<<endl;
    // }


    // int first,second;
    // cout<<"Enter the first Number and second Number"<<endl;
    // cin>>first>>second;

    // cout<<"no of primes between "<<first <<"and"<<second<<"is"<<primeNumbers(first,second)<<endl;
    // int a,b;
    // cout<<"Enter two numbers whose lcm you want to find "<<endl;
    // cin>>a>>b;
    // int pro=a*b;
    // while(a!=0 && b!=0)
    // {
    //     if(a>b)
    //     {
    //         a=a-b;
    //     }else 
    //     {
    //         b=b-a;
    //     }
    // }
    // if(a!=0)
    // {
    //     cout<<a<<"is the HCF and LCM is "<<pro*a<<endl;
    // }else 
    // {
    //     cout<<b<<"is the HCF and LCM is "<<pro*b<<endl;
    // }
    //  int n=5;
    // cout<<"factorial of n is "<<factorial(n)<<endl;
    // int x;
    // cout<<"Enter the no upto which you want fibonacci series "<<endl;
    // cin>>x;
    // cout<<fibonacci(x);
    // int arr[]={1,3,5,6,1,2,9};
    // int n=7;
    // print2(arr,0,n);
    // cout<<endl;
    // string str="My name is yush kumar rajput ";
    // int i=0;
    // char key='z';
    // cout<<findkey(str,i,key);
    // int arr[]={3,10,13,32,53};
    // int n=5;
    // cout<<"answer is sorted or not "<<issorted(arr,0,n-1);
    // int key=13;
    // cout<<endl;
    // cout<<binarySearch(arr,0,n-1,key);
    //      string output="";
    //    string s="abcd";
    // vector<int> arr{2,5,1,8,3,9,4,};
    // int s=0;
    // int e=arr.size()-1;
    // merge(arr,s,e);
    // for(auto i:arr)
    // {
    //     cout<<i<<" ";
    // }
    //  vector<int> arr{2,5,1,8,3,9,4,};
    // int s=0;
    // int e=arr.size()-1;
    // quicksort(arr,s,e);
    
    // for(auto i:arr)
    // {
    //     cout<<i<<" ";
    // }

    // string output="";
    // string s="abc";
    // permutation(s,0,output);
    //       vector<int> arr{3,5,6,3,13,2,9};
    //    cout<<"insertion sort "<<endl;
    //    int j=1;
    //    for(int i=1;i<arr.size();i++)
    //    {
    //        int j=i-1;
    //        int val=arr[i];
    //        while(arr[j]>val && j>=0)
    //        {
    //            arr[j+1]=arr[j];
    //            j--;
    //        }
    //        arr[j+1]=val;
    //    }
    //    for(auto i:arr)
    //    {
    //        cout<<i<<" ";
    //    }
    // int n;
    // cout<<"Enter the no of queens "<<endl;
    // cin>>n;
    // vector<vector<char>> board(n,vector<char>(n,'-'));
    // int col=0;
    // solve(board,col,n);
    // vector<int> v{3,5,1,8,9,2,4,11};
    
    // // Animal a;
    // // a.eat();
    // // a.aget();
    // // a.aset(4);
    // // a.aget();
    // Animal *b=new Animal(5);
    // // (*b).eat();
    // // b->eat();
    // b->aget();
    
    // //cout<<sizeof(a)<<endl;
    // Animal *c=new Animal(*b);
    // c->aget();
    // delete b;
  
// }