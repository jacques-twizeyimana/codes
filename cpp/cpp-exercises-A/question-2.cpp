#include<iostream>
using namespace std;

void add(){
    double num1,num2;
    cout << "Enter first number:\t";
    cin>>num1;
    cout<<"Enter second number:\t";
    cin >> num2;

    cout <<"The sum of "<<num1<<" and "<<num2<<" is "<<(num1+num2)<<endl;
}

int main(int argc, char const *argv[])
{
   add();
    return 0;
}
