#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char x[100];
    cin>>x;
    int a=0;
    int b=0;
    int i=0;
    while(x[i]!='\0')
    {
        if(x[i]=='1')
        {
            a++;
        }
        else if(x[i]=='0')
        {
            b++;
        }
        i++;
    }
    if(a==1 || b==1)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    return 0;
    
}
