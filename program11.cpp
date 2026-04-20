#include<iostream>
using namespace std;
int main()
{
    int x,k;
    int c=0;
    cin>>x;
    while(x>0)
    {
        k=x%10;
        c=c+1;
        x=x/10;
        
    }
    cout<<c;
    
}
