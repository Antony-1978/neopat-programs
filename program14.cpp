#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int arr[x];
    for (int i=0;i<x;i++)
    {
        cin>>arr[i];
    }
    int sum=0;
    for(int j=0;j<x;j++)
    {
        if(arr[j]%2==0)
        {
            sum=sum+arr[j];
        }
    }
    cout<<sum;
}
