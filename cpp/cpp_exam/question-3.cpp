#include<iostream>
#include<cstring>
#include<string>

using namespace std;

int countVowels(string text){
    int vowels = 0;

    for (int i = 0; i < text.length(); i++)
    {
        if(text[i] == 'e' || text[i] == 'a' || text[i] == 'o' || text[i] == 'u' || text[i] == 'i' ) vowels++;
    }
    return vowels;
}

int main(int argc, char const *argv[])
{
    string word;
    cout << "Enter a word or phrase to count vowels: \t";
    getline(cin,word);
    cout <<"There are "<<countVowels(word)<<" vowels in "<<word<<endl;
    return 0;
}
