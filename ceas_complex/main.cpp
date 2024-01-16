#include <iostream>
#include <string>
#include <chrono>
using namespace std;
using namespace chrono;
int main()
{
    cout<<"Choose the type of clock  you want to see(Current_time/Universal_time)";
    string clockChoose;
    getline(cin,clockChoose);
    if(clockChoose=="Current_time")
    {
        cout<<system_clock::now();
    }
    else if(clockChoose=="Universal_time")
    {
        cout<<utc_clock::now();
    }
    return 0;
}