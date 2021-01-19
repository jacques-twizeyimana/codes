#include<iostream>
using namespace std;

int countWords(std::string str) {
	int count=1;
	for(int i=0;i<str.length();i++){
		if(isspace(str[i]) || isblank(str[i]))	count++;
	}
	return count;
}

int main(int argc, char const *argv[])
{
    string sentence;
    cout << "Enter a sentence"<<endl;
    getline(cin,sentence);
    cout << countWords(sentence)<<endl;
    return 0;
}
