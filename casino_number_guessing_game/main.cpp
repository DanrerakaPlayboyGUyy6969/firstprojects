#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
    int n,i,p,g;
    float x,s,gs;
    string nume;
    string rasp;
    string rasp2;
    string rasp3;
    cout<<"Enter the amount of money that you want to start with:"<<endl;
    cin>>s;
    do
    {
    cout<<"Hello!What's your name?"<<endl;
    cin.ignore();
    getline(cin,nume);
    cout<<nume<<" how much do you want to bet?"<<endl;
    cin>>p;
    cout<<"What do you want to be the maximum number that can be generated?"<<endl;
    cin>>g;
    gs=g;
    x=gs/100;
    cout<<"Do you want to guess a number in range of the generated number?(Yes/No)"<<endl;
    cin.ignore();
    getline(cin,rasp2);
    if(rasp2=="No")
    {
      srand(time(0));
      n=rand()%g+1;
      cout<<"Enter the number:";
      cin>>i;
      if(i==n)
      {
          s=s+p*g*x;
      }
      else if(i!=n)
      {
          s=s-p;
      }
    }
    else if(rasp2=="Yes")
    {
        float nr,pp;
        cout<<"How close?"<<endl;
        cin>>nr;
        pp=100/nr;
        srand(time(0));
        n=rand()%g+1;
        cout<<"Enter the number:";
        cin>>i;
        if(i>=n-5 && i<=n+5)
        {
            s=s+p*g*pp*x;
        }
        else if(i<n-5 || i>n+5)
        {
            s=s-p;
        }
    }
    cout<<s<<endl;
    cout<<"Do you want to exti?(Yes/No)";
    cin.ignore();
    getline(cin,rasp3);
    }
    while(rasp3=="No");
    return 0;
}
