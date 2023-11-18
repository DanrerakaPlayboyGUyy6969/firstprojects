#include <iostream>
using namespace std;
class NormalRoom
{
public:
    float aspace;
    int abeds;
    int anr;
    int amoney;
    NormalRoom():aspace(),abeds(),anr(),amoney()
    {
        aspace=30.85;
        abeds=2;
        anr=305;
        amoney=300;
    }
};
class PremiumRoom:public NormalRoom
{
public:
    int alux;
    int apmoney;
    int apnr;
    PremiumRoom():NormalRoom()
    {
        alux=20;
        apmoney=500;
        apnr=301;
    }
};
   int main()
   {
       string name;
       string room;
       NormalRoom NormalRoom1;
       PremiumRoom PremiumRoom1;
       cout<<"Hello sir,what is your name?"<<endl;
       getline(cin,name);
       cout<<"Nice to meet you "<<name<<", what room would you like to rent?"<<endl;
       getline(cin,room);
       if(room=="Normalroom")
       {
           int c;
           cout<<"You choose NormalRoom.This room has "<<NormalRoom1.aspace<<" mp,"<<NormalRoom1.abeds<<" beds and the room's number is "<<NormalRoom1.anr<<".For one night you need to pay "<<NormalRoom1.amoney<<" dollars.How many days would you like to stay here?"<<endl;
           cin>>c;
           cout<<"You need to pay "<<350*c<<" dollars";
       }
       else if(room=="Premiumroom")
       {
           int d;
           cout<<"You choose PremiumRoom.This room has "<<PremiumRoom1.aspace<<" mp,"<<PremiumRoom1.abeds<<" beds and the room's number is "<<PremiumRoom1.apnr<<".The special thing about this room is that it has "<<PremiumRoom1.alux<<" luxury items and for one night you need to pay "<<PremiumRoom1.apmoney<<" dollars.How many days would you like to stay here?"<<endl;
           cin>>d;
           cout<<"You need to pay "<<500*d<<" dollars";
       }
       else
       {
           cout<<"There are no rooms named like that"<<endl;
       }
       return 0;
   }
