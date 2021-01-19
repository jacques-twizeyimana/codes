#include<iostream>
using namespace std;

float factorial(float n){
    if( n == 1) return 1;

    return n* factorial(n - 1);
}

int gcd(int num1,int num2){
    if (num1 == 0 || num1 == 1 || num1 == num2)
       return num1;
    else if (num2 == 0 || num2 == 1)
       return num2;
    else{
        if (num1 > num2)
            return gcd(num1 - num2, num2);
        return gcd(num1, num2 - num1);
    }
}

int main(int argc, char const *argv[])
{
   cout << factorial(3)<<endl;
   cout << "The GCD of 2 and 6 is: "<<gcd(0,6)<<endl;
    return 0;
}
