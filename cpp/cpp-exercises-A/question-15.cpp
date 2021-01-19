#include<iostream>
#include<cmath>

using namespace std;

bool check_palindrome(string text){
    for (int i = 0; i < text.length(); i++){
        if(text[i] != text[text.length()- 1 - i ]) return false;
    }
    return true;    
}

int main(int argc, char const *argv[])
{
    string phrase;
    cout << "Enter a text to check if it is palindrome"<<endl;
    getline(cin,phrase);
    
    if(check_palindrome(phrase)) cout <<phrase<< "This text is palindrome text"<<endl;
    else cout << phrase<<"This text is not palindrome"<<endl;
    return 0;
}