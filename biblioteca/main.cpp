#include <iostream>
#include <string>
#include <sstream>
using namespace std;
class Carte1
{
public:
    string name;
    int pages;
    int release;
    string author;
    Carte1(string aname):name(aname),pages(600),release(2005),author("Tolkien"){}
    string afiseazacarte1()
{
    stringstream result;
    result << "The name is " << name << "\n" << "It has " << pages << " pages \n" << "It got released in the year " << release << "\n" << "It was wrote by "<< author;
    return result.str();
}
};
class Carte2:public Carte1
{
public:
    string name2;
    Carte2(string aname2):Carte1(""),name2(aname2){}
    string afiseazacarte2()
{
    stringstream result;
    result << "The name is " << name2 << "\n" << "It has " << pages << "  pages \n" << "It got released in the year " << release << "\n" << "It was wrote by "<< author;
    return result.str();
}
};
class Carte3
{
public:
    string name3;
    int pages3;
    int release3;
    string author3;
    Carte3(string aname3):name3(aname3),pages3(500),release3(1999),author3("Rowling"){}
    string afiseazacarte3()
{
    stringstream result;
    result << "The name is " << name3 << "\n" << "It has " << pages3 << " pages \n" << "It got released in the year " << release3 << "\n" << "It was wrote by "<< author3;
    return result.str();
}
};
class Carte4:public Carte3
{
public:
    string name4;
    Carte4(string aname4):Carte3(""),name4(aname4){}
    string afiseazacarte4()
{
    stringstream result;
    result << "The name is " << name4 << "\n" << "It has " << pages3 << " pages \n" << "It got released in the year " << release3 << "\n" << "It was wrote by "<< author3;
    return result.str();
}
};
int main()
{
    int r,c;
    Carte1 Cartee("Lord of the rings");
    Carte2 Cartee2("The Hobbit");
    Carte3 Cartee3("Harry Potter");
    Carte4 Cartee4("Fantastic Animals");
    cout<<"What row do you want to choose?"<<endl;
    cin>>r;
    cout<<"What book?"<<endl;
    cin>>c;
    string cartii[2][2]=
    {
        {Cartee.afiseazacarte1(),Cartee2.afiseazacarte2()},
        {Cartee3.afiseazacarte3(),Cartee4.afiseazacarte4()}
    };
    cout<<cartii[r][c];
    return 0;
}
