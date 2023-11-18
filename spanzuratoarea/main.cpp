#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
int main() {
    string answer;
    string word;
    string meto;
    int l;
    int n;
    n=0;
    cout << "Introdu cuvântul secret: ";
    getline(cin, word);
    system("cls");
    l = word.length();
    meto = string(l, '_');
    cout<<l<<endl;
    cout<<meto<<endl;
    do {
        n++;
        cout << "Care e cuvantul?";
        getline(cin, answer);
        for (int i = 0; i < word.length(); i++) {
            for (int j = 0; j < answer.length(); j++) {
                if (word[i] == answer[j]) {
                    meto[i] = answer[j];
                    break;
                }
            }
        }
        cout << meto << endl;
        if(n==5)
        {
            break;
        }
    } while (meto != word);
    if(n==5)
    {
        cout<<"Ai pierdut,cuvantul secret era "<<word;
    }
    else
    {
    cout << "Felicitări! Ai ghicit cuvântul: " << word << endl;
    }
    return 0;
}

