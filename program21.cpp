#include<iostream>
using namespace std;
void oddoreven(int *a)
{
    if(*a%2==0)
    {
        cout<<*a<<" is even"<<endl;
    }
    else if(*a%2==1)
    {
        cout<<*a<<" is odd"<<endl;
    }
}
int main()
{
    int k;
    cin>>k;
    oddoreven(&k);
}
