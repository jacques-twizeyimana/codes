#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
   string fname,lname;
    cout << "Enter First Name::\t";
    cin>>fname;
    cout<<"Enter Last Name::\t";
    cin >> lname;

    cout <<"Name in reverse is: "<<lname<<" "<<fname<<endl;
    return 0;
}