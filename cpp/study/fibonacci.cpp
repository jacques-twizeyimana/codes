#include<iostream>
using namespace std;

int fibonacci(int num){
    if(num == 0 || num == 1) return num;
    else return fibonacci(num - 1) + fibonacci(num -2);
}

int main(int argc, char const *argv[])
{
    int counter;
    cout << "Enter fibonacci number"<<endl;
    cin >> counter;

    cout <<"Fibonacci series"<<endl;

    for (int i = 0; i <= counter; i++)
    {
       cout<<fibonacci(i) <<" , ";
    }
    
    cout <<endl;
    return 0;
}
