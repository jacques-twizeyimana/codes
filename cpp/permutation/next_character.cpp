#include <iostream>
using namespace std;

string next_character(string txt){
    string result = "";
    for ( int i = 0; i <txt.length(); i++)
    {
        int c =int(txt[i]);
        char nextChar;

        if(c == 122 || c == 90)nextChar = char(c - 25);
        else nextChar= char(c+1);
       
        result = result + nextChar;
    }

    return result;
    
}

int main(){
    string phrase;
    cout << "Enter a text: \t";
    cin >> phrase;

    cout << next_character(phrase);
    return 0;
}