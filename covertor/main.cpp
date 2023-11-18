#include <iostream>

using namespace std;

int main()
{
    string answer;
    cout<<"Ce vrei sa converstesti?";
    getline(cin,answer);
    if(answer=="lungime")
    {
        string answer2;
        string aanswer2;
        float a;
        cout<<"Ce lungime?";
        getline(cin,answer2);
        cout<<"Cati?";
        cin>>a;
        cout<<"In ce?";
        cin.ignore();
        getline(cin,aanswer2);
        if(answer2=="mm" && aanswer2=="cm")
        {
            cout<<a/10;
        }
        else if(answer2=="mm" && aanswer2=="dm")
        {
            cout<<a/100;
        }
        else if(answer2=="mm" && aanswer2=="m")
        {
            cout<<a/1000;
        }
        else if(answer2=="mm" && aanswer2=="dam")
        {
            cout<<a/10000;
        }
        else if(answer2=="mm" && aanswer2=="hm")
        {
            cout<<a/100000;
        }
        else if(answer2=="mm" && aanswer2=="km")
        {
            cout<<a/1000000;
        }
        else if(answer2=="cm" && aanswer2=="mm")
        {
            cout<<a*10;
        }
        else if(answer2=="cm" && aanswer2=="dm")
        {
            cout<<a/10;
        }
        else if(answer2=="cm" && aanswer2=="m")
        {
            cout<<a/100;
        }
        else if(answer2=="cm" && aanswer2=="dam")
        {
            cout<<a/1000;
        }
        else if(answer2=="cm" && aanswer2=="hm")
        {
            cout<<a/10000;
        }
        else if(answer2=="cm" && aanswer2=="km")
        {
            cout<<a/100000;
        }
        else if(answer2=="dm" && aanswer2=="mm")
        {
            cout<<a*100;
        }
        else if(answer2=="dm" && aanswer2=="cm")
        {
            cout<<a*10;
        }
        else if(answer2=="dm" && aanswer2=="m")
        {
            cout<<a/10;
        }
        else if(answer2=="dm" && aanswer2=="dam")
        {
            cout<<a/100;
        }
        else if(answer2=="dm" && aanswer2=="hm")
        {
            cout<<a/1000;
        }
        else if(answer2=="dm" && aanswer2=="km")
        {
            cout<<a/10000;
        }
        else if(answer2=="m" && aanswer2=="mm")
        {
            cout<<a*1000;
        }
        else if(answer2=="m" && aanswer2=="cm")
        {
            cout<<a*100;
        }
        else if(answer2=="m" && aanswer2=="dm")
        {
            cout<<a*10;
        }
        else if(answer2=="m" && aanswer2=="dam")
        {
            cout<<a/10;
        }
        else if(answer2=="m" && aanswer2=="hm")
        {
            cout<<a/100;
        }
        else if(answer2=="m" && aanswer2=="km")
        {
            cout<<a/1000;
        }
        else if(answer2=="dam" && aanswer2=="mm")
        {
            cout<<a*10000;
        }
        else if(answer2=="dam" && aanswer2=="cm")
        {
            cout<<a*1000;
        }
        else if(answer2=="dam" && aanswer2=="dm")
        {
            cout<<a*100;
        }
        else if(answer2=="dam" && aanswer2=="m")
        {
            cout<<a*10;
        }
        else if(answer2=="dam" && aanswer2=="hm")
        {
            cout<<a/10;
        }
        else if(answer2=="dam" && aanswer2=="km")
        {
            cout<<a/100;
        }
        else if(answer2=="hm" && aanswer2=="mm")
        {
            cout<<a*100000;
        }
        else if(answer2=="hm" && aanswer2=="cm")
        {
            cout<<a*10000;
        }
        else if(answer2=="hm" && aanswer2=="dm")
        {
            cout<<a*1000;
        }
        else if(answer2=="hm" && aanswer2=="m")
        {
            cout<<a*100;
        }
        else if(answer2=="hm" && aanswer2=="dam")
        {
            cout<<a*10;
        }
        else if(answer2=="hm" && aanswer2=="km")
        {
            cout<<a/10;
        }
        else if(answer2=="km" && aanswer2=="mm")
        {
            cout<<a*1000000;
        }
        else if(answer2=="km" && aanswer2=="cm")
        {
            cout<<a*100000;
        }
        else if(answer2=="km" && aanswer2=="dm")
        {
            cout<<a*10000;
        }
        else if(answer2=="km" && aanswer2=="m")
        {
            cout<<a*1000;
        }
        else if(answer2=="km" && aanswer2=="dam")
        {
            cout<<a*100;
        }
        else if(answer2=="km" && aanswer2=="hm")
        {
            cout<<a*10;
        }
    }
    else if(answer=="greutate")
    {
        string answer3;
        string aanswer3;
        float c;
        cout<<"Ce greutate?";
        getline(cin,answer3);
        cout<<"Cati?";
        cin>>c;
        cout<<"In ce?";
        cin.ignore();
        getline(cin,aanswer3);
        if(answer3=="mg" && aanswer3=="cg")
        {
            cout<<c/10;
        }
        else if(answer3=="mg" && aanswer3=="dg")
        {
            cout<<c/100;
        }
        else if(answer3=="mg" && aanswer3=="g")
        {
            cout<<c/1000;
        }
        else if(answer3=="mg" && aanswer3=="dag")
        {
            cout<<c/10000;
        }
        else if(answer3=="mg" && aanswer3=="hg")
        {
            cout<<c/100000;
        }
        else if(answer3=="mg" && aanswer3=="kg")
        {
            cout<<c/1000000;
        }
        else if(answer3=="cg" && aanswer3=="mg")
        {
            cout<<c*10;
        }
        else if(answer3=="cg" && aanswer3=="dg")
        {
            cout<<c/10;
        }
        else if(answer3=="cg" && aanswer3=="g")
        {
            cout<<c/100;
        }
        else if(answer3=="cg" && aanswer3=="dag")
        {
            cout<<c/1000;
        }
        else if(answer3=="cg" && aanswer3=="hg")
        {
            cout<<c/10000;
        }
        else if(answer3=="cg" && aanswer3=="kg")
        {
            cout<<c/100000;
        }
        else if(answer3=="dg" && aanswer3=="mg")
        {
            cout<<c*100;
        }
        else if(answer3=="dg" && aanswer3=="cg")
        {
            cout<<c*10;
        }
        else if(answer3=="dg" && aanswer3=="g")
        {
            cout<<c/10;
        }
        else if(answer3=="dg" && aanswer3=="dag")
        {
            cout<<c/100;
        }
        else if(answer3=="dg" && aanswer3=="hg")
        {
            cout<<c/1000;
        }
        else if(answer3=="dg" && aanswer3=="kg")
        {
            cout<<c/10000;
        }
        else if(answer3=="g" && aanswer3=="mg")
        {
            cout<<c*1000;
        }
        else if(answer3=="g" && aanswer3=="cg")
        {
            cout<<c*100;
        }
        else if(answer3=="g" && aanswer3=="dg")
        {
            cout<<c*10;
        }
        else if(answer3=="g" && aanswer3=="dag")
        {
            cout<<c/10;
        }
        else if(answer3=="g" && aanswer3=="hg")
        {
            cout<<c/100;
        }
        else if(answer3=="g" && aanswer3=="kg")
        {
            cout<<c/1000;
        }
        else if(answer3=="dag" && aanswer3=="mg")
        {
            cout<<c*10000;
        }
        else if(answer3=="dag" && aanswer3=="cg")
        {
            cout<<c*1000;
        }
        else if(answer3=="dag" && aanswer3=="dg")
        {
            cout<<c*100;
        }
        else if(answer3=="dag" && aanswer3=="g")
        {
            cout<<c*10;
        }
        else if(answer3=="dag" && aanswer3=="hg")
        {
            cout<<c/10;
        }
        else if(answer3=="dag" && aanswer3=="kg")
        {
            cout<<c/100;
        }
        else if(answer3=="hg" && aanswer3=="mg")
        {
            cout<<c*100000;
        }
        else if(answer3=="hg" && aanswer3=="cg")
        {
            cout<<c*10000;
        }
        else if(answer3=="hg" && aanswer3=="dg")
        {
            cout<<c*1000;
        }
        else if(answer3=="hg" && aanswer3=="g")
        {
            cout<<c*100;
        }
        else if(answer3=="hg" && aanswer3=="dag")
        {
            cout<<c*10;
        }
        else if(answer3=="hg" && aanswer3=="kg")
        {
            cout<<c/10;
        }
        else if(answer3=="kg" && aanswer3=="mg")
        {
            cout<<c*1000000;
        }
        else if(answer3=="kg" && aanswer3=="cg")
        {
            cout<<c*100000;
        }
        else if(answer3=="kg" && aanswer3=="dg")
        {
            cout<<c*10000;
        }
        else if(answer3=="kg" && aanswer3=="g")
        {
            cout<<c*1000;
        }
        else if(answer3=="kg" && aanswer3=="dag")
        {
            cout<<c*100;
        }
        else if(answer3=="kg" && aanswer3=="hg")
        {
            cout<<c*10;
        }
    }
    else if(answer=="lichide")
    {
        string answer4;
        string aanswer4;
        float e;
        cout<<"Ce lichide?";
        getline(cin,answer4);
        cout<<"Cati?";
        cin>>e;
        cout<<"In ce?";
        cin.ignore();
        getline(cin,aanswer4);
        if(answer4=="ml" && aanswer4=="cl")
        {
            cout<<e/10;
        }
        else if(answer4=="ml" && aanswer4=="dl")
        {
            cout<<e/100;
        }
        else if(answer4=="ml" && aanswer4=="l")
        {
            cout<<e/1000;
        }
        else if(answer4=="ml" && aanswer4=="dal")
        {
            cout<<e/10000;
        }
        else if(answer4=="ml" && aanswer4=="hl")
        {
            cout<<e/100000;
        }
        else if(answer4=="ml" && aanswer4=="kl")
        {
            cout<<e/1000000;
        }
        else if(answer4=="cl" && aanswer4=="ml")
        {
            cout<<e*10;
        }
        else if(answer4=="cl" && aanswer4=="dl")
        {
            cout<<e/10;
        }
        else if(answer4=="cl" && aanswer4=="l")
        {
            cout<<e/100;
        }
        else if(answer4=="cl" && aanswer4=="dal")
        {
            cout<<e/1000;
        }
        else if(answer4=="cl" && aanswer4=="hl")
        {
            cout<<e/10000;
        }
        else if(answer4=="cl" && aanswer4=="kl")
        {
            cout<<e/100000;
        }
        else if(answer4=="dl" && aanswer4=="ml")
        {
            cout<<e*100;
        }
        else if(answer4=="dl" && aanswer4=="cl")
        {
            cout<<e*10;
        }
        else if(answer4=="dl" && aanswer4=="l")
        {
            cout<<e/10;
        }
        else if(answer4=="dl" && aanswer4=="dal")
        {
            cout<<e/100;
        }
        else if(answer4=="dl" && aanswer4=="hl")
        {
            cout<<e/1000;
        }
        else if(answer4=="dl" && aanswer4=="kl")
        {
            cout<<e/10000;
        }
        else if(answer4=="l" && aanswer4=="ml")
        {
            cout<<e*1000;
        }
        else if(answer4=="l" && aanswer4=="cl")
        {
            cout<<e*100;
        }
        else if(answer4=="l" && aanswer4=="dl")
        {
            cout<<e*10;
        }
        else if(answer4=="l" && aanswer4=="dal")
        {
            cout<<e/10;
        }
        else if(answer4=="l" && aanswer4=="hl")
        {
            cout<<e/100;
        }
        else if(answer4=="l" && aanswer4=="kl")
        {
            cout<<e/1000;
        }
        else if(answer4=="dal" && aanswer4=="ml")
        {
            cout<<e*10000;
        }
        else if(answer4=="dal" && aanswer4=="cl")
        {
            cout<<e*1000;
        }
        else if(answer4=="dal" && aanswer4=="dl")
        {
            cout<<e*100;
        }
        else if(answer4=="dal" && aanswer4=="l")
        {
            cout<<e*10;
        }
        else if(answer4=="dal" && aanswer4=="hl")
        {
            cout<<e/10;
        }
        else if(answer4=="dal" && aanswer4=="kl")
        {
            cout<<e/100;
        }
        else if(answer4=="hl" && aanswer4=="ml")
        {
            cout<<e*100000;
        }
        else if(answer4=="hl" && aanswer4=="cl")
        {
            cout<<e*10000;
        }
        else if(answer4=="hl" && aanswer4=="dl")
        {
            cout<<e*1000;
        }
        else if(answer4=="hl" && aanswer4=="l")
        {
            cout<<e*100;
        }
        else if(answer4=="hl" && aanswer4=="dal")
        {
            cout<<e*10;
        }
        else if(answer4=="hl" && aanswer4=="kl")
        {
            cout<<e/10;
        }
        else if(answer4=="kl" && aanswer4=="ml")
        {
            cout<<e*1000000;
        }
        else if(answer4=="kl" && aanswer4=="cl")
        {
            cout<<e*100000;
        }
        else if(answer4=="kl" && aanswer4=="dl")
        {
            cout<<e*10000;
        }
        else if(answer4=="kl" && aanswer4=="l")
        {
            cout<<e*1000;
        }
        else if(answer4=="kl" && aanswer4=="dal")
        {
            cout<<e*100;
        }
        else if(answer4=="kl" && aanswer4=="hl")
        {
            cout<<e*10;
        }
    }
    return 0;
}
