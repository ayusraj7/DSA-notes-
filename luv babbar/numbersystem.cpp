#include<bits/stdc++.h>
using namespace std; 
//one way but by cout not return type 
/*int decimalToBinary(int n)
{
    while(n!=0)
    {
        int bit=n%2;
        cout<<!bit<<" ";
        n=n/2;
    }
    return 0;
}
*/
int power(int x, int y)
{
    if(y==0)
    {
        return 1;
    }
    int ans=1;
    for(int i=1;i<=y;i++)
    {
        ans=ans*x;
    }
    return ans;
}
int decimalToBinary(int n)
{
    int binary=0;
    int i=0;
    while(n>0)
    {
        int bit=n % 2;
        binary=power(10,i++)*bit+binary;
        n=n/2;
    }
    return binary;
}
int decimalToBinary2(int n)
{
    int binary=0;
    int i=0;
    while(n!=0)
    {
        int bit=(n&1);
        binary=power(10,i)*bit+binary;
        i++;
        n=n>>1;
    }
    return binary;
}
int binaryToDecimal(int n)
{
    int decimal=0;
    int i=0;
    while(n>0)
    {
        int bit=n%10;
        decimal=power(2,i)*bit+decimal;
        i++;
        n=n/10;
    }
    return decimal;
}
int binaryToDecimal2(int n)
{
    int decimal=0;
    int i=0;
    while(n>0)
    {
        int bit=n&1;
        decimal=power(2,i)*bit+decimal;
        i++;
        n=n>>1;
    }
    return decimal;
}
int main()
{
    int n;
    cout<<"Enter the no "<<endl;
    cin>>n;
    int binary=decimalToBinary(n);
    cout<<binary;
    cout<<endl<<"2nd Method"<<endl;
    cout<<decimalToBinary2(n)<<endl;
    cout<<"Enter the no to convert into decimal "<<endl;
    int x;
    cin>>x;
    //here ans is wrong because of problem in complier 
    cout<<binaryToDecimal(x)<<endl;
    cout<<"2nd Method to convert the binary into decimal "<<endl;
    cout<<binaryToDecimal2(x)<<endl;


}