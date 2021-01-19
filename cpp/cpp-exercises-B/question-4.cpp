#include<iostream>
using namespace std;

float interest_calculator(float deposit,float interest_rate,float period){
    float interest,amount = deposit;

    for(int i = 1;i<=period;i++){       
        cout << "Data for year "<<i<<endl<<endl;
        cout << "Deposit : "<<amount <<endl;

        //calculate interest and amount
        interest  = amount * interest_rate * 1;
        amount += interest;

        //print this year's data
        cout << "Interest : " << interest<<endl;
        cout<< "Amount : " <<amount<<endl;
        cout <<"____________________________________________"<<endl;
    }

    return interest;
}

int main(int argc, char const *argv[])
{
    
    cout << "*****************************************************"<<endl;
    cout << "\t   Compound Interest calculator \t\n"<<endl;
    cout << "*****************************************************"<<endl;
    //I want to make this program dynamic so that changing interest rate , period of years or deposit won't change everything
    float period = 5,interest_rate = 0.1 ,principal = 20000; 

    interest_calculator(principal,interest_rate,period);
        
    return 0;
}