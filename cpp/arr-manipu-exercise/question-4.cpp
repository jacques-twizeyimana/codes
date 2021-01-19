#include<iostream>
#include<cstring>

using namespace std;

void format_string(string txt,char c){
   string tmp="";
   //replace one character
    for (int i = 0; i < txt.length(); i++){
        tmp = txt;
        tmp[i] = c;
        cout << tmp<<"\t";
    }
    //replace two characters
    
    for (int i = 0; i < txt.length(); i++){
        tmp = txt;
        tmp[i] = c;
        tmp[i+1] = c;
        cout << tmp<<"\t";
    }
    
    
    cout <<endl;
}

int main(int argc, char const *argv[])
{
    format_string("hat",'1')   ;
    return 0;
}