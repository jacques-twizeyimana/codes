#include<iostream>
using namespace std;

int add(int num1, int num2){
    return num1 + num2;
}

float add(float num1, float num2){
    return num1 + num2;
}

double add(double num1, double num2){
    return num1 + num2;
}

long add(long num1, long num2){
    return num1 + num2;
}

// subtraction ....

int subtract(int num1, int num2 ){
    return num1 - num2;
}
float subtract(float num1, float num2 ){
    return num1 - num2;
}
double subtract(double num1, double num2 ){
    return num1 - num2;
}
long subtract(long num1, long num2 ){
    return num1 - num2;
}
// multiplication

int multiply(int num1, int num2){
    return num1* num2;
}
float multiply(float num1, float num2){
    return num1* num2;
}
double multiply(double num1, double num2){
    return num1* num2;
}
long multiply(long num1, long num2){
    return num1* num2;
}

// division

int divide(int num1 , int num2){
    return num1 / num2;
}
float divide(float num1 , float num2){
    return num1 / num2;
}
double divide(double num1 , double num2){
    return num1 / num2;
}
long divide(long num1 , long num2){
    return num1 / num2;
}

int main(int argc, char const *argv[])
{
    string option;int operator_;
    double result, num1,num2;

    start:
    cout << "*****************************************************"<<endl;
    cout << "\t\t\t   CALCULATOR \t\t\n"<<endl;
    cout << "*****************************************************"<<endl;
    cout << "\t 1. Addition \n";
    cout << "\t 2. Subtract \n";
    cout << "\t 3. Multiply \n";
    cout << "\t 4. Divide \n";

    do{
        check:
        cout << " Enter your operator:\t";
        cin >> operator_;   
        
        cout << "Enter two numbers: \t";
        cin >> num1>> num2;

        switch (operator_){
            case 1:
            result =  add(num1,num2);break;

            case 2:
                result = subtract(num1,num2);break;

            case 3:
                result = multiply(num1,num2);break;

            case 4:
                result = divide(num1,num2);break;   
            default:
                cout << "Invalid option.Please chooce a correct one!:\t";
                goto check;
            break;
        }
        cout <<"Result: "<< result <<endl<< "do you want to continue? Y/N: \t";
        cin >> option;
    } while (option == "Y" || option == "YES" || option == "y"|| option == "yes");
    
    return 0;
}
