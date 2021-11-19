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
    break;
    case '-': total=a-b;
    break;
    case '*': total=a*b;
    break;
    case '/': total=a/b;
    break;
    if(operator_!='+' && '-' && '*' && '/')
    {
    cout<<"the operator entered was not recognized, try again.";
    }
    }
cout<<"the result is "<<total<<endl;;
return 0;
}
