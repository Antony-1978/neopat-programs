#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    if(x>0 && x<100)
    {
        int arr[x];
        for(int i=0;i<x;i++)
        {
            cin>>arr[i];
        }
        int s=0;
        for(int j=0;j<x;j++)
        {
            s=s+arr[j];
        }
        cout<<"Sum:"<<s<<endl;
        int m=1;
        for(int k=0;k<x;k++)
        {
            m=m*arr[k];
        }
        cout<<"Product:"<<m<<endl;
    }
    else
    {
        cout<<"Invalid";
    }
    
}
