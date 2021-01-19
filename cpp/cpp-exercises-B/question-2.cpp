#include<iostream>
using namespace std;

int fibonnacci_finder(int num){
    
    int fib;
    //fibonacci of 0 and 1 are themselves
    if(num == 0 || num ==1) fib = num;
    else{
        fib = fibonnacci_finder(num - 1) + fibonnacci_finder(num - 2);
    }
    return fib;
}
int main(int argc, char const *argv[])
{
    cout << "Fibonnaci series of First 50 natural numbers\n";
    
    for(int i=0;i<50;i++){
        cout << fibonnacci_finder(i)<<endl;
    }
    return 0;
}