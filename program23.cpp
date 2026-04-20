#include<iostream>
using namespace std;
void call(int *a,int *b,int c)
{
    int q,r;
    q=*a/c;
    r=*b%c;
    cout<<q<<" "<<r<<endl;
}
int main()
{
    int x,y,z;
    cin>>x>>y;
    z=x;
    call(&x,&z,y);
    
}
