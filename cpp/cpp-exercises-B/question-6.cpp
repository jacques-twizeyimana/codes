#include<iostream>
using namespace std;

template <class additionType>
additionType add(additionType num1, additionType num2){
    return num1 + num2;
}

template <class subtractType>
subtractType subtract(subtractType num1, subtractType num2 ){
    return num1 - num2;
}

template <class multiplyType>
multiplyType multiply(multiplyType num1, multiplyType num2){
    return num1* num2;
}

template <class divisionType>
divisionType divide(divisionType num1 , divisionType num2){
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
            result =  add<int>(num1,num2);break;

            case 2:
                result = subtract<float>(num1,num2);break;

            case 3:
                result = multiply<double>(num1,num2);break;

            case 4:
                result = divide<float>(num1,num2);break;   
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