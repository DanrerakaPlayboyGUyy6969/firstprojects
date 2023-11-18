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
    cout << "Enter the secret word: ";
    getline(cin, word);
    system("cls");
    l = word.length();
    meto = string(l, '_');
    cout<<l<<endl;
    cout<<meto<<endl;
    do {
        n++;
        cout << "What's the word?";
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
    } while (answer != word);
    if(n==5)
    {
        cout<<"You lost,the secret word was:"<<word;
    }
    else
    {
    cout << "Congratulations!You won!The secret word is:" << word << endl;
    }
    return 0;
}

