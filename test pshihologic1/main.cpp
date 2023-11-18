#include <iostream>

using namespace std;

int main()
{
     string animal;
     cout<<"The end of the world is coming,if u can save only one kind of animal,which one will u pick?(rabbit,sheep,deer or horse) "<<endl;
     cin>>animal;
     string animalsec;
     cout<<"If u had to be an animal which one would u be?(dog,cat,horse,snake) "<<endl;
     cin>>animalsec;
     string animaltrd;
     cout<<"If u have the power to make one species disappear forever, which one will that be?(lion,snake,crocodile,shark) "<<endl;
     cin>>animaltrd;
     string animalfth;
     cout<<"If one of the following animals could speak which would u prefer it to be?(sheep,horse,rabbit,bird) "<<endl;
     cin>>animalfth;
     string animalfih;
     cout<<"On an isolated island u can only have one of the following as your companion, which one would u choose?(human,pig,cow,bird) "<<endl;
     cin>>animalfih;
     string animalsth;
     cout<<"If u had the ability to tame all animals, which would u prefer as a pet?(dinosaur,white_tiger,polar_bear,leopard) "<<endl;
     cin>>animalsth;
     string animalseh;
     cout<<"If u could be an animal for five minutes which of the following would u prefer to be?(lion,cat,horse,pigeon) "<<endl;
     cin>>animalseh;
     if(animal=="sheep")
     {
         cout<<"The personality of the person u would be attracted to in a real life situation is obedient and warm"<<endl;
     }
     else if(animal=="rabbit")
     {
         cout<<"The personality of the person u would be attracted to in a real life situation is cold as ice on the outside,but warm inside"<<endl;
     }
     else if(animal=="deer")
     {
         cout<<"The personality of the person u would be attracted to in a real life situation is elegant and well-mannered"<<endl;
     }
     else if(animal=="horse")
     {
         cout<<"The personality of the person u would be attracted to in a real life situation is unbridlef,free spirited and free"<<endl;
     }
     if(animalsec=="dog")
     {
         cout<<"The impression that u would like to give to your partner is loyal and faithful"<<endl;
     }
     else if(animalsec=="cat")
     {
         cout<<"The impression that u would like to give to your partner is stylish"<<endl;
     }
     else if(animalsec=="horse")
     {
         cout<<"The impression that u would like to give to your partner is optimistic"<<endl;
     }
     else if(animalsec=="snake")
     {
         cout<<"The impression that u would like to give to your partner is flexible"<<endl;
     }
    if(animaltrd=="lion")
     {
         cout<<"Your behavior that would cause u to break up with your partner is that your partner is arrogant and authoritative"<<endl;
     }
     else if(animaltrd=="snake")
     {
         cout<<"Your behavior that would cause u to break up with your partner is that your partner is too emotional and moody and u dont know how to please him/her"<<endl;
     }
     else if(animaltrd=="crocodile")
     {
         cout<<"Your behavior that would cause u to break up with your partner is that your partner is ruthless"<<endl;
     }
     else if(animaltrd=="shark")
     {
         cout<<"Your behavior that would cause u to break up with your partner is that your partner is insecure"<<endl;
     }
    if(animalfth=="sheep")
     {
         cout<<"You would like to have a relationship like when u both know what the other person is thinking without saying a word"<<endl;
     }
     else if(animalfth=="horse")
     {
         cout<<"You would like to have a relationship like when both of u should be able to talk about everything and anything with no secrets kept"<<endl;
     }
     else if(animalfth=="rabbit")
     {
         cout<<"You would like to have a relationship like when u feel warm and loved"<<endl;
     }
     else if(animalfth=="bird")
     {
         cout<<"You would like to have a relationship like when its a long relationship"<<endl;
     }
    if(animalfih=="human")
     {
         cout<<"You will not cheat"<<endl;
     }
     else if(animalfih=="pig")
     {
         cout<<"You can't resist desire and lust so u are likely to cheat"<<endl;
     }
     else if(animalfih=="cow")
     {
         cout<<"You are tolerant and u will try very hard not to do it"<<endl;
     }
     else if(animalfih=="bird")
     {
         cout<<"You don't like to make commitments and are likely to cheat"<<endl;
     }
    if(animalsth=="dinosaur")
     {
         cout<<"You are quite pessimistic and u don't think happy marriages exist anymore nowadays"<<endl;
     }
     else if(animalsth=="white_tiger")
     {
         cout<<"You think marriage is something precious,once u get married. you'll treasure it and your partner very much"<<endl;
     }
     else if(animalsth=="polar_bear")
     {
         cout<<"You are afraid of marriage, u think it would take away your freedom"<<endl;
     }
     else if(animalsth=="leopard")
     {
         cout<<"You always wanted to get married"<<endl;
     }
    if(animalseh=="lion")
     {
         cout<<"You always thirst for lobe, u can do anything for it, but u won't fall for it easily"<<endl;
     }
     else if(animalseh=="cat")
     {
         cout<<"You are quite self-centered"<<endl;
     }
     else if(animalseh=="horse")
     {
         cout<<"You don't want to be tied by a steady relationship"<<endl;
     }
     else if(animalseh=="pigeon")
     {
         cout<<"You think of love as a commitment for both"<<endl;
     }

    return 0;
}

