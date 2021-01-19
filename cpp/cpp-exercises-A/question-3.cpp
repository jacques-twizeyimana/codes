#include<iostream>
using namespace std;
double add(double num1,double num2){
    return num1 + num2;    
}

int main(int argc, char const *argv[])
{
    double num1,num2;
    cout << "Enter first number:\t";
    cin>>num1;
    cout<<"Enter second number:\t";
    cin >> num2;

    cout <<"The sum of "<<num1<<" and "<<num2<<" is "<<add(num1,num2)<<endl;

    return 0;
}