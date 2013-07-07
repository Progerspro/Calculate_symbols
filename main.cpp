#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;
const int mass = 1000;
void run(char*,int&,int&,int&,int&);
int main()
{
    int spa,sym,all,words;
    char word[mass];
    cout << "Enter your word: "; cin.getline(word,mass);
    run(word,spa,sym,all,words);
    cout << "The word is: " << word << setw(10) <<
    " Number of spaces: " << spa << setw(10) <<
    " Number of symbols: " << sym << setw(10) <<
    " Number of words: "  << words << setw(10) <<
    " All = " << all;
    return 0;
}
void run(char* f_word,int& spaces,int& symbols,int& all,int& words)
{
    spaces = 0;
    symbols = 0;
    all = 0;
    words = 0;
    int sl = strlen(f_word),a = 0;
    while(a <= sl)
    {
        if(f_word[a] != ' ')
        {
            symbols++;
        }
        else
        {
            spaces++;
        }
        if(f_word[a] == ' ' && f_word[a + 1] != ' ')
        {
            words++;
        }


        a++;
    }
    if (f_word[0] != ' ')
        {
            words++;
        }
    symbols = symbols - 1;
    all = symbols + spaces;
}
