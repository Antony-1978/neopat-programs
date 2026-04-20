#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    cin>>x;
    cin>>y;
    cin>>z;
    if((x+y+z)<180 || (x+y+z)>180)
    {
        cout<<"No Prize";
    }
    else
    {
        if(x==60 && y==60 && z==60)
        {
            cout<<"Prize 3";
        }
        if(x==90 || y==90 || z==90)
        {
            cout<<"Prize 2";
        }
        else if( x!=60 && x!=90 && y!=60 && y!=90 && z!=60 && z!=90)
        {
            cout<<"Prize 1";
        }
    }
}
