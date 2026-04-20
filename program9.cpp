#include<iostream>
using namespace std;
int main()
{
    int x;
    char c;
    int flag=0;
    cin>>x;
    cin>>c;
    if((x<1)||(x>9))
    {
        cout<<"Invalid Input";
        flag=1;
    }
    if(c=='y')
    {
        cout<<x+5;
    }
    if((c=='n')&&(flag==0))
    {
        cout<<x;
    }
}
