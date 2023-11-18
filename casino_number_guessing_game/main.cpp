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
    cout<<"Introdu suma"<<endl;
    cin>>s;
    do
    {
    cout<<"Buna ziua!Cum va numiti?"<<endl;
    cin.ignore();
    getline(cin,nume);
    cout<<nume<<" cat vrei sa pariezi?"<<endl;
    cin>>p;
    cout<<"Cat de mare vrei sa fie nr maxim generat?"<<endl;
    cin>>g;
    gs=g;
    x=gs/100;
    cout<<"Vrei ca nr tau sa fie aproape de nr generat?"<<endl;
    cin.ignore();
    getline(cin,rasp2);
    if(rasp2=="Nu")
    {
      srand(time(0));
      n=rand()%g+1;
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
    else if(rasp2=="Da")
    {
        float nr,pp;
        cout<<"Cat de aproape vrei ca nr tau sa fie de nr generat?"<<endl;
        cin>>nr;
        pp=100/nr;
        srand(time(0));
        n=rand()%g+1;
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
    cout<<"Mai joci?";
    cin.ignore();
    getline(cin,rasp3);
    }
    while(rasp3=="Da");
    return 0;
}
