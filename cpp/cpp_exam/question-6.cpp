#include<iostream>
using namespace std;

bool is_prime(int num){
    if(num == 1 || num == 0) return false;

    for (int i = 2; i < num; i++)
    {
        if(num % i == 0) return false;
    }
    
    return true;
}

int prod_of_prime_numbers(int limit){
    int prod=1;
    for (int i = 1; i < limit; i++)
    {
       if(is_prime(i)) prod*=i;
    }

    return prod;
    
}

int sum_of_prime_numbers(int limit){
    int sum=0;
    for (int i = 0; i < limit; i++)
    {
       if(is_prime(i)) sum+=i;
    }

    return sum;
    
}

int main(int argc, char const *argv[])
{
    int max;
    cout<<"Enter limit or max number \t";
    cin >> max;
    
    cout << "The sum of all prime numbers below "<<max<<" is: "<<sum_of_prime_numbers(max)<<endl;
    cout << "The product of all prime numbers below "<<max<<" is: "<<prod_of_prime_numbers(max)<<endl;
    return 0;
}
