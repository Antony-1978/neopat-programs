#include<iostream>
using namespace std;
int main()
{
    int x,y,z,big;
    cin>>x>>y>>z;
    big=x;
    if(y>big)
    {
        big=y;
    }
    if(big<z)
    {
        big=z;
    }
    cout<<big;
}
