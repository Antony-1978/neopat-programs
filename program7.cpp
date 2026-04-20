#include<iostream>
using namespace std;
int main()
{
    int a,g;
    cin>>a>>g;
    if(g==1)
    {
        if(a<25)
        {
            cout<<"The person belongs to Group 1.";
        }
        else if((a>=25)&&(a<=45))
        {
            cout<<"The person belongs to Group 3.";
        }
    }
    if(g==2)
    {
        if(a<25)
        {
             cout<<"The person belongs to Group 2.";
        }  
        else if((a>=25)&&(a<=45))
        {
            cout<<"The person belongs to Group 4.";
        }
    }
    if(g>2)
    {
        cout<<"Invalid";
    }
}
