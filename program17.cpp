#include<iostream>
using namespace std;
int reverse(int n)
{
    int c=0,k,t;
    int temp=n;
    while(temp>0)
    {
        k=temp/10;
        temp=temp%10;
        c++;
    }
    int a[c];
    for(int i=0;i<c;i++)
    {
        a[i]=n%10;
        n=n/10;
    }
    for(int p=0;p<c;p++)
    {
        cout<<a[p];
    }
    return 0;
   
 
}
int main()
{
    int b;
    cin>>b;
    reverse(b);
    
    return 0;
}
