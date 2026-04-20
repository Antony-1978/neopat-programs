#include<iostream>
using namespace std;
int main()
{
    int x,y;
    char c;
    cin>>x>>y;
    cin>>c;
    switch(c)
    {
        case '+':
        {
            cout<<"The addition of the given numbers is "<<x+y<<"."<<endl;
            break;
            
        }
        case '-':
        {
            cout<<"The subtraction of the given numbers is "<<x-y<<"."<<endl;
            break;
        }
        case '*':
        {
            cout<<"The multiplication of the given numbers is "<<x*y<<"."<<endl;
            break;
        }
        case '/':
        {
            cout<<"the division of the given numbers is "<<x/y<<"."<<endl;
            break;
        }
        default:
        {
            cout<<"Invalid Operation";
        }
        
    }
}
