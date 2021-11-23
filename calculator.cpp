#include <iostream>
using namespace std;
int main()
{
    double a,b,total;  
    char operator_;  
    cout<<"enter the number ";
    cin>>a;
    cout<<"enter the second number ";
    cin>>b;
    cout<<"select the operator +,-,*,/ ";
    cin>>operator_;
    switch (operator_)
    {
    case '+': total=a+b;
    cout<<"the result is "<<total<<endl;
    break;
    case '-': total=a-b;
    cout<<"the result is "<<total<<endl;
    break;
    case '*': total=a*b;
    cout<<"the result is "<<total<<endl;
    break;
    case '/': total=a/b;
    if(b==0)
    {
        cout<<" Divisor canot be zero";
    }
    else cout<<"the result is "<<total<<endl;
    break;
    default:cout<<"the operator entered was not recognized, try again.";
    }
return 0;
    }
