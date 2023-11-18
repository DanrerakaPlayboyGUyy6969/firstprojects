#include <iostream>
using namespace std;
int main()
{
    char op;
    float num1,num2,sol;
    cout<<"Choose an operator ";
    cin>>op;
    cout<<"Choose num 1 ";
    cin>>num1;
    cout<<"Choose num 2 ";
    cin>>num2;
    if(op== '+')
    {
        sol=num1+num2;
        cout<<sol;
    }
    if(op== '-')
    {
        sol=num1-num2;
        cout<<sol;
    }
    if(op== '/')
    {
        sol=num1/num2;
        cout<<sol;
    }
    if(op== '*')
    {
        sol=num1*num2;
        cout<<sol;
    }
return 0;
}
