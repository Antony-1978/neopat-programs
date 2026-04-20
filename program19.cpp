#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char x[100];
    int i,j;
    cin>>x;
    int len=0;
    while(x[len] !='\0')
    {
        len++;
    }
    for(i=0,j=len-1;i<j;i++,j--)
    {
        x[i]^=x[j];
        x[j]^=x[i];
        x[i]^=x[j];
        
    }
    cout<<x;
    return 0;
}
