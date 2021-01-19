#include<iostream>
using namespace std;

double addition(double num1,double num2){
    return num1 + num2;
}
double subtraction(double num1,double num2){
    return num1 - num2;
}
double divide(double num1,double num2){
    return (num1 / num2);
}

double multiply(double num1,double num2){
    return num1 * num2;
}

int modulusFinder(int num1,int num2){
    return num1 % num2;
}


int main(int argc, char const *argv[])
{
    double num1,num2,result;
    int operat;
    string option = "yes";
    do{   
        start:
        cout <<" MENU"<<endl;
        cout << "\t1. Add"<<endl;
        cout << "\t2. Subtract"<<endl;
        cout << "\t3. Multiply"<<endl;
        cout << "\t4. Divide"<<endl;
        cout << "\t5. Modulus"<<endl;

        cin >> operat;
        cout << "Enter first number:\t";
        cin>>num1;
        cout<<"Enter second number:\t";
        cin >> num2;

        switch (operat){
            case 1:
                result = addition(num1,num2);
            break;
            case 2:
                result = subtraction(num1,num2);
            break;
            case 3:
                result = multiply(num1,num2);
            break;
            case 4:
                result = divide(num1,num2);
            break;
            case 5:
                result = modulusFinder(num1,num2);
            break;

            default:
                system("clear");
                cout << "Invalid operator was choosen.Please choose correct operator"<<endl;
                goto start;
            break;
        }

        cout << "Result:\t"<<result<<endl;
        cout << "do you want to continue? y/Y:\t";
        cin>>option;
    } while (option == "Y" || option == "y" || option == "yes" || option == "YES");
    
    return 0;
}
