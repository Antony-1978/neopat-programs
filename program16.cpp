#include<iostream>
using namespace std;
int fact(int n)
{
    //int k=1;
    if(n<1)
    {  
        return 1;
    }
    else
    {
        return n*fact(n-1);
      
    }
}
int main()
{
    int x,z;
    cin>>x;
    
    
        
        if(x<=0 ||  x>10)
        {
            cout<<"Invalid";
        }
        else
        {
            cout<<"Factorial:"<<fact(x);
        }
        
   
}
