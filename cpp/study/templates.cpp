#include<iostream>
using namespace std;
template <class additionType>

additionType sum(additionType num1, additionType num2){
    return num1+num2;
}

int main(int argc, char const *argv[])
{
    cout << sum<int>(2,3)<<endl;
    cout << sum<double>(2.333,4.55)<<endl;
    
    return 0;
}
