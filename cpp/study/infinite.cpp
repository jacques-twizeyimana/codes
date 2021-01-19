#include<iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    
    string name;
    int condition = true;

    // do{
    //     cout << "Enter your name"<<endl;
    //     getline(cin,name);
    //     cout << "your name is "<<name<<endl;

    //     if ( (int)name[0] == 2) condition = false;

    // }while(condition);
    int missed;
    for (int count = 1; count <= 10; ++count) {
        if (count == 5) {
            missed = count;
            continue; // skip count if it is 5
        } //end if
        cout << count << " , "; //display the list
    } //end for
    cout << "The loop skips: " << missed << endl;
    return 0;
}
