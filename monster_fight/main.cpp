#include "random.cpp"
#include <array>
#include <iostream>
#include <sstream>
#include <string>
#include <string_view>
using namespace std;
class Potion {
public:
    enum Type {health,strength,poison,max_type};
    enum Size {small,medium,large,max_size};
private:
    Type m_type{};
    Size m_size{};
public:
    Potion(Type type, Size size) : m_type{type},m_size{size} {}
    Type getType() const {return m_type;}
    Size getSize() const {return m_size;}
    static std::string_view getPotionTypeName(Type type) {
        static constexpr std::string_view names[] {"Health","Strength","Poison"};
        return names[type];
    }
    static std::string_view getPotionSizeName(Size size) {
        static constexpr std::string_view names[] {"Small","Medium","Large"};
        return names[size];
    }
    std::string getName() const {
        std::stringstream result{};
        result<<getPotionSizeName(getSize())<<" potion of "<<getPotionTypeName(getType());
        return result.str();
    }
    static Potion getRandomPotion() {
        return Potion{static_cast<Type>(Random::get(0,max_type-1)),static_cast<Size>(Random::get(0,max_size-1))};
    }
};
class Creature {
protected:
    std::string m_name;
    char m_symbol {};
    int m_health {};
    int m_damage {};
    int m_gold {};
public:
    Creature(std::string_view name,char symbol,int health,int damage,int gold)
        : m_name{name},m_symbol{symbol},m_health{health},m_damage{damage},m_gold{gold} {}
    char getSymbol() const {return m_symbol;}
    const std::string& getName() const {return m_name;}
    bool isDead() const {return m_health<=0;}
    int getGold() const {return m_gold;}
    void addGold(int gold) {m_gold+=gold;}
    void reduceHealth(int health) {m_health-=health;}
    int getHealth() const {return m_health;}
    int getDamage() const {return m_damage;}
};
class Player : public Creature {
    int m_level{1};
public:
    Player(const std::string& name) : Creature{name,'@',10,1,0} {}
    void levelUp() {
        ++m_level;
        ++m_damage;
    }
    void drinkPotion(const Potion& potion) {
        switch (potion.getType()) {
            case Potion::health: m_health += ((potion.getSize()==Potion::large) ? 5 : 2); break;
            case Potion::strength: ++m_damage; break;
            case Potion::poison: reduceHealth(1); break;
            case Potion::max_type: break;
        }
    }
    int getLevel() const {return m_level;}
    bool hasWon() const {return m_level>=20;}
};
class Monster : public Creature {
public:
    enum Type {dragon,orc,slime,max_types};
private:
    inline static Creature monsterData[] {
        Creature {"dragon",'D',20,4,100},
        Creature {"orc",'o',4,2,25},
        Creature {"slime",'s',1,1,10}
    };
    static_assert(std::size(monsterData)==max_types);
public:
    Monster(Type type) : Creature{monsterData[type]} {}
    static Monster getRandomMonster() {
        int num{Random::get(0,max_types-1)};
        return Monster{static_cast<Type>(num)};
    }
};
void onMonsterKilled(Player& player,const Monster& monster) {
    cout<<"You killed the "<<monster.getName()<<".\n";
    player.levelUp();
    cout<<"You are now level "<<player.getLevel()<<".\n";
    cout<<"You found "<<monster.getGold()<<" gold.\n";
    player.addGold(monster.getGold());
    constexpr int potionChance{30};
    if (Random::get(1,100)<=potionChance) {
        auto potion{Potion::getRandomPotion()};
        cout<<"You found a mythical potion! Do you want to drink it? [y/n]: ";
        char choice{};
        cin>>choice;
        if (choice=='Y' || choice=='y') {
            player.drinkPotion(potion);
            cout<<"You drank a "<<potion.getName()<<".\n";
        }
    }
}
void attackMonster(Player& player,Monster& monster) {
    if (player.isDead())
        return;
    cout<<"You hit the "<<monster.getName()<<" for "<<player.getDamage()<<" damage.\n";
    monster.reduceHealth(player.getDamage());
    if (monster.isDead()) {
        onMonsterKilled(player,monster);
    }
}
void attackPlayer(const Monster& monster,Player& player) {
    if (monster.isDead())
        return;
    player.reduceHealth(monster.getDamage());
    cout<<"The "<<monster.getName()<<" hit you for "<<monster.getDamage()<<" damage.\n";
}
void fightMonster(Player& player) {
    Monster monster{ Monster::getRandomMonster() };
    cout<<"You have encountered a "<<monster.getName()<<" ("<<monster.getSymbol()<<").\n";
    while (!monster.isDead() && !player.isDead()) {
        cout<<"(R)un or (F)ight: ";
        char input{};
        cin>>input;
        if (input=='R' || input=='r') {
            if (Random::get(1, 2)==1) {
                cout<<"You successfully fled.\n";
                return;
            } else {
                cout<<"You failed to flee.\n";
                attackPlayer(monster,player);
                continue;
            }
        }
        if (input=='F' || input=='f') {
            attackMonster(player, monster);
            attackPlayer(monster, player);
        }
    }
}
int main() {
    cout<<"Enter your name: ";
    string playerName;
    cin>>playerName;
    Player player{playerName};
    cout<<"Welcome, "<<player.getName()<<'\n';
    while (!player.isDead() && !player.hasWon())
        fightMonster(player);
    if (player.isDead()) {
        cout<<"You died at level "<<player.getLevel()<<" and with "<<player.getGold()<<" gold.\n";
        cout<<"Too bad you can't take it with you!\n";
    } else {
        cout<<"You won the game with "<<player.getGold()<<" gold!\n";
    }
    return 0;
}