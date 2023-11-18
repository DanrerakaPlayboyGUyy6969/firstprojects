#include <iostream>

using namespace std;

int main()
{
    int nr1;
    int nr2;
    int nr3;
    cout<<"nr1= ";
    cin>>nr1;
    cout<<"nr2= ";
    cin>>nr2;
    cout<<"nr3= ";
    cin>>nr3;
    if(nr1>nr2 && nr3>nr2 && nr1>nr3)
    {
        cout<<nr1<<endl;
        cout<<nr3<<endl;
        cout<<nr2<<endl;
    }
    else if(nr1>nr2 && nr3>nr2 && nr3>nr1)
    {
        cout<<nr3<<endl;
        cout<<nr1<<endl;
        cout<<nr2<<endl;
    }
    if(nr1>nr3 && nr2>nr3 && nr2>nr1)
    {
        cout<<nr2<<endl;
        cout<<nr1<<endl;
        cout<<nr3<<endl;
    }
    else if(nr1>nr2 && nr2>nr3 && nr1>nr3)
    {
        cout<<nr1<<endl;
        cout<<nr2<<endl;
        cout<<nr3<<endl;
    }
    if(nr2>nr3 && nr3>nr1 && nr2>nr1)
    {
        cout<<nr2<<endl;
        cout<<nr3<<endl;
        cout<<nr1<<endl;
    }
    else if(nr3>nr2 && nr2>nr1 && nr3>nr1)
    {
        cout<<nr3<<endl;
        cout<<nr2<<endl;
        cout<<nr1<<endl;
    }
    return 0;
}


