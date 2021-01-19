#include<iostream>
using namespace std;

std::string doubleChar(std::string str) {
	std::string result="";
	for(int i=0;i<str.length();i++){
		result = result + str[i];
		result = result + str[i];
	}
	return result;
}

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
