#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    if(!getline(cin,str))
    {
        return 0;
    }
     char *p=&str[0];
    while(*p!='\0')
    {
        if(*p=='a')
        {
            *p='*';
        }
        p++;
    }
    cout<<str<<endl;
    
}
