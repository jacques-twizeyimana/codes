#include<iostream>
#include<string>

using namespace std;

int prod_of_numbers(int a,int b,int limit){
    int prod=1;
    for (int i = 1; i < limit; i++)
    {
       if(i % a == 0 || i % b == 0) prod*=i;
    }

    return prod;
    
}

int sum_of_numbers(int a,int b,int limit){
    int sum=0;
    for (int i = 1; i < limit; i++)
    {
       if(i % a == 0 || i % b == 0) sum+=i;
    }

    return sum;
    
}

int main(int argc, char const *argv[])
{
    int max,a,b;
    cout << "Enter Maximum number m: "<<endl;
    cin>>max;
    cout << "Enter number a: \t";
    cin>>a;
    cout <<"Enter number b: \t";
    cin >>b;

    int sum = sum_of_numbers(a,b,max);
    int product = prod_of_numbers(a,b,max);

    cout << "The sum of natural numbers below 20 and multiples of "<<a<<" and "<<b<<" is "<<sum<<endl;
    cout << "The product of natural numbers below 20 and multiples of "<<a<<" and "<<b<<" is "<<product<<endl;

    return 0;
}
