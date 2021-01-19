#include<iostream>
#include<cmath>
using namespace std;
int year=1;

void calculateInterest(int time,double principal,float rate){
        if(time == 0){
            exit(0);
        }
        double interest = principal * rate * 1;
        double amount = principal + interest;
        
        cout<<endl<<"Data at "<< year <<" year"<<endl<<"________________________________"<<endl;

        cout<<"Principal:\t"<<principal<<endl;
        cout<<"Interest:\t"<<interest<<endl;
        cout<<"Total amount:\t"<<amount<<endl;

        year++;
        //re-call this function using new amount
        calculateInterest(time - 1,amount,rate);
}

int main(int argc, char const *argv[])
{
    calculateInterest(5,20000,0.1);
    return 0;
}
