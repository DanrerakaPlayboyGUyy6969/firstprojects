#include <iostream>
#include <string>
#include <random>
#include <stack>
using namespace std;
class Character
{
    public:
    int health;
    int damage;
    Character(int ahealth,int adamage):health(ahealth),damage(adamage) {}
};
class CurrentCharacter: public Character
{
    public:
    CurrentCharacter(int ahealth,int adamage):Character(ahealth,adamage) {}
    CurrentCharacter createAndModify(Character otherCharacter) 
    {
        CurrentCharacter newCharacter(0, 0);
        newCharacter.health = otherCharacter.health;
        newCharacter.damage = otherCharacter.damage;
        return newCharacter;
    }
};
class Dungeon
{
    public:
    int monstersCount;
    int monstersHealth;
    int monstersDamage;
    int bossHealth;
    int bossDamage;
    int waves;
    Dungeon(int amostersCount,int amonstersHealth,int aamonstersDamage,int abossHealth,int abossDamage,int awaves):
    monstersCount(amostersCount),monstersHealth(amonstersHealth),monstersDamage(aamonstersDamage),bossHealth(abossHealth),bossDamage(abossDamage),waves(awaves) {};
};
class Inventory
{
    public:
    void takeHeal(Dungeon& CDungeon,CurrentCharacter& supCCharacter)
    {
        supCCharacter.health+=3;
        damage(CDungeon,3,3);
    }
    void megaAttack(Dungeon& CDungeon,CurrentCharacter& supCCharacter)
    {
        supCCharacter.health-=1;
        damage(CDungeon,2,2);
    }
    void strike(Dungeon& CDungeon,CurrentCharacter& supCCharacter)
    {
        supCCharacter.health+=0;
        damage(CDungeon,1,1);
    }
    void healer(Dungeon& CDungeon,CurrentCharacter& supCCharacter)
    {
        supCCharacter.health+=1;
        damage(CDungeon,0,0);
    }
    stack<string> playerInv;
    stack<string> playerInvCop;
    private:
    void damage(Dungeon& DCDungeon,int z,int w)
    {
        if(DCDungeon.monstersHealth>0)
        {
            DCDungeon.monstersHealth-=z;
        }
        else
        {
            DCDungeon.bossHealth-=w;
        }
    }
};
int randomNumber(int x,int y)
{
    mt19937 mt(random_device{}());
    uniform_int_distribution nr(x,y);
    return nr(mt);
}
void dungeonAttack(Dungeon& esyDungeon,CurrentCharacter& theCCharacter,Inventory& dinv)
{
    esyDungeon.monstersHealth=esyDungeon.monstersCount*esyDungeon.monstersHealth*esyDungeon.waves;
    dinv.playerInvCop=dinv.playerInv;
    string abilityChoose;
    bool bstrike=false;
    bool bmegaAttack=false;
    bool btakeHeal=false;
        do
        {
            cout<<"Your HP:"<<theCCharacter.health<<endl;
            cout<<"Enemy's HP:"<<esyDungeon.monstersHealth<<endl;
            while(!dinv.playerInv.empty())
            {
                cout<<dinv.playerInv.top()<<endl;
                dinv.playerInv.pop();
            }
            cout<<"Choose your ability:"<<endl;
            getline(cin,abilityChoose);
            if(abilityChoose=="takeHeal")
            {
                dinv.takeHeal(esyDungeon,theCCharacter);
            }
            else if(abilityChoose=="megaAttack")
            {
                dinv.megaAttack(esyDungeon,theCCharacter);
            }
            else if(abilityChoose=="strike")
            {
                dinv.strike(esyDungeon,theCCharacter);
            }
            else if(abilityChoose=="healer")
            {
                dinv.healer(esyDungeon,theCCharacter);
            }
            cout<<"Your HP:"<<theCCharacter.health<<endl;
            cout<<"Enemy's HP:"<<esyDungeon.monstersHealth<<endl;
            dinv.playerInv=dinv.playerInvCop;
            esyDungeon.monstersHealth-=theCCharacter.damage;
            theCCharacter.health-=esyDungeon.monstersDamage;
        }while(esyDungeon.monstersHealth>0 && theCCharacter.health>0);
        if(theCCharacter.health<=0)
        {
            cout<<"You lose!"<<endl;
        }
        else if(esyDungeon.monstersHealth<=0 && theCCharacter.health>0)
        {
            cout<<"You beat the Boss' guards!Boss incoming!"<<endl;
            do
            {
            cout<<"Your HP:"<<theCCharacter.health<<endl;
            cout<<"Enemy's HP:"<<esyDungeon.bossHealth<<endl;
            while(!dinv.playerInv.empty())
            {
                cout<<dinv.playerInv.top()<<endl;
                dinv.playerInv.pop();
            }
            cout<<"Choose your ability:"<<endl;
            getline(cin,abilityChoose);
            if(abilityChoose=="takeHeal")
            {
                dinv.takeHeal(esyDungeon,theCCharacter);
            }
            else if(abilityChoose=="megaAttack")
            {
                dinv.megaAttack(esyDungeon,theCCharacter);
            }
            else if(abilityChoose=="strike")
            {
                dinv.strike(esyDungeon,theCCharacter);
            }
            else if(abilityChoose=="healer")
            {
                dinv.healer(esyDungeon,theCCharacter);
            }
            cout<<"Your HP:"<<theCCharacter.health<<endl;
            cout<<"Enemy's HP:"<<esyDungeon.bossHealth<<endl;
            dinv.playerInv=dinv.playerInvCop;
            theCCharacter.health-=esyDungeon.bossDamage;
            esyDungeon.bossHealth-=theCCharacter.damage;
            } while (esyDungeon.bossHealth>0 && theCCharacter.health>0);
            if(theCCharacter.health<=0)
            {
                cout<<"You lose!"<<endl;
            }
            else
            {
                cout<<"Congratulations!You win!"<<endl;
                int rad=randomNumber(1,3);
                switch(rad)
                {
                    case 1:
                    if(btakeHeal==false)
                    {
                    dinv.playerInv.push("takeHeal");
                    btakeHeal=true;
                    }
                    break;
                    case 2:
                    if(bmegaAttack==false)
                    {
                    dinv.playerInv.push("megaAttack");
                    bmegaAttack=true;
                    }
                    break;
                    case 3:
                    if(bstrike==false)
                    {
                    dinv.playerInv.push("strike");
                    bstrike=true;
                    }
                    break;
                }
            }
        }
}
int main()
{
    Inventory myInventory;
    string characterChoose;
    char playerexit;
    int hcop;
    Dungeon EasyDungeon(3,5,1,10,2,1);
    Dungeon NormalDungeon(5,5,2,10,3,1);
    Dungeon HardDungeon(5,5,3,10,4,2);
    Character Max(10,2);
    Character Bob(5,3);
    Character Doc(15,1);
    CurrentCharacter CCharacter(0,0);
    myInventory.playerInv.push("healer");
    cout<<"CHOOSE YOUR CHARACTER(Max/Bob/Doc)"<<endl;
    getline(cin,characterChoose);
    if(characterChoose=="Max")
    {
        CCharacter=CCharacter.createAndModify(Max);
    }
    else if(characterChoose=="Bob")
    {
        CCharacter=CCharacter.createAndModify(Bob);
    }
    else if(characterChoose=="Doc")
    {
        CCharacter=CCharacter.createAndModify(Doc);
    }
    hcop=CCharacter.health;
    cout<<"Character's damage:"<<CCharacter.damage<<endl<<"Character's HP:"<<CCharacter.health<<endl;
    do
    {
    CCharacter.health=hcop;
    int rN=randomNumber(1,3);
    if(rN==1)
    {
        dungeonAttack(EasyDungeon,CCharacter,myInventory);
    }
    else if(rN==2)
    {
        dungeonAttack(NormalDungeon,CCharacter,myInventory);
    }
    else if(rN==3)
    {
        dungeonAttack(HardDungeon,CCharacter,myInventory);
    }
    cout<<"Do you still want to play?(Y/N)"<<endl;
    cin>>playerexit;
    cin.ignore();
    }while(playerexit=='Y');
    return 0;
}