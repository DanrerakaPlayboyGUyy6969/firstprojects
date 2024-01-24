#include <iostream>
#include <string>
#include <cctype>
#include <random>
using namespace std;
string password_generator(int length)
{
    string characters="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()-_=+[]{}|;:'\",.<>/?";
    string password;
    random_device rd;
    uniform_int_distribution<int> rd1(0,characters.length()-1);
    for(int i=1;i<=length;i++)
    {
        password +=characters[rd1(rd)];
    }
    return password;
}
string password_checker()
{
    string answer;
    string clientpassword;
    bool isnumber=false;
    bool iscl=false;
    bool issign=false;
    cout<<"Enter your password";
    getline(cin,clientpassword);
    for(int i=0;i<=clientpassword.length();i++)
    {
        if(isdigit(clientpassword[i]))
        {
            isnumber=true;
        }
        else if(isupper(clientpassword[i]))
        {
            iscl=true;
        }
        else if(ispunct(clientpassword[i]))
        {
            issign=true;
        }
    }
    if(clientpassword.length()<10)
    {
        answer="Weak password";
    }
    else if(clientpassword.length()>10 && (isnumber==false || iscl==false ||  issign==false))
    {
        answer="Medium password";
    }
    else if(clientpassword.length()>15 && isnumber==true && iscl==true &&  issign==true)
    {
        answer="Strong password";
    }
    return answer;
}
int main()
{
    string choose;
    cout<<"What do you choose(password_generator/password_checker)";
    getline(cin,choose);
    if(choose=="password_generator")
    {
        int length;
        cout<<"Enter the length of the password";
        cin>>length;
        cout<<password_generator(length);
    }
    else if(choose=="password_checker")
    {
        cout<<password_checker();
    }
    return 0;
}