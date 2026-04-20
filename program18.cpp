#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string x,y;
    int a=0,b=0;
    cin>>x;
    cin>>y;
    int p=x.length();
    int t=y.length();
    for(int i=0;i<p;i++)
    {
        if(x[i]=='?')
        {
            a+=1;
        }
    }
    for(int j=0;j<t;j++)
    {
        if(y[j]=='?')
        {
            b+=1;
        }
    }
    if(a==b)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
}
