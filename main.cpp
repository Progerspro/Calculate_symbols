#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;
const int mass = 1000;
void run(char*,int&,int&,int&);
int main()
{
    int spa,sym,all;
    char word[mass];
    cout << "Enter your word: "; cin.getline(word,mass);
    run(word,spa,sym,all);
    cout << "The word is: " << word << setw(10) <<
    " Number of spaces: " << spa << setw(10) <<
    " Number of symbols: " << sym << setw(10) <<
    " All = " << all;
    return 0;
}
void run(char* f_word,int& spaces,int& symbols,int& all)
{
    spaces = 0;
    symbols = 0;
    all = 0;
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
        a++;
    }
    symbols = symbols - 1;
    all = symbols + spaces;
}
