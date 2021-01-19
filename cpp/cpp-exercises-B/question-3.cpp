#include<iostream>
using namespace std;

int gcd(int num1,int num2){
    int gcd=1;
    int small_num;

    if(num1 > num2) small_num = num2;
    else small_num = num1;

    for (int i = 1; i <= small_num; i++)
    {
        if(num1 % i == 0 && num2 % i ==0) gcd = i;
    }   

    return gcd;
}

int main(int argc, char const *argv[])
{
    int number1,number2;
    cout << "*****************************************************"<<endl;
    cout << "\t\t\t   GCD Finder \t\t\t\n"<<endl;
    cout << "*****************************************************"<<endl;
    
    cout << "Enter the first number"<<endl;
    cin >> number1;
    cout << "Enter the second number"<<endl;
    cin >> number2;
    cout << "The GCD of " << number1 << " and "<<number2 << " is:  "<<gcd(number1,number2)<<endl;
    return 0;
}