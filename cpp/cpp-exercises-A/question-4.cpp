#include<iostream>
using namespace std;
double num1,num2;

void swapNumbers(){
    double temp = num1;
    num1 = num2;
    num2 = temp;
}
int main(int argc, char const *argv[])
{
    cout << "Enter first number:\t";
    cin>>num1;
    cout<<"Enter second number:\t";
    cin >> num2;
    swapNumbers();
    cout << "After Swapping the 1st number is : " << num1 << endl;
    cout << "After Swapping the 2nd number is : " << num2 << endl;
    return 0;
}