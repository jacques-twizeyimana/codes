#include<iostream>
#include<string>
using namespace std;


int main(int argc, char const *argv[])
{
    char phrase[100];
    
    cout << "Enter a string to change to uppercase "<<endl;
    
    cin.getline(phrase,100);

	for(int i = 0; phrase[i] != '\0'; i++){
        //check if letter was not already capital or number before changing
        if(phrase[i] >= 'a' && phrase[i] <= 'z') phrase[i] =(phrase[i] - 32);
	}

    cout << "Upper case string: "<<phrase<<endl;
    
    return 0;
}
