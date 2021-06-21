#include<iostream>
using namespace std;

string reverser(string txt){
    string reversed ="";
    int last_space = txt.length();

    for (int i = txt.length(); i >= 0; i--){
        reversed +=txt.substr(i,last_space-i);
        last_space = i;
    }

    reversed +=txt.substr(0,last_space);

    return reversed;
    
}

int main(int argc, char const *argv[])
{
    string phrase = "Hello world here";
    string rs= reverser(phrase);
    std::cout << rs << std::endl;
    return 0;
}
