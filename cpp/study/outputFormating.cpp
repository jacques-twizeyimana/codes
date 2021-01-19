#include<iostream>
#include<iomanip>

using namespace std;

int main(int argc, char const *argv[])
{

    //set width formatter

    string ab="abracadabra";
    cout<<ab<<" without setw()\n";
    cout<<setw(1)<<ab<<" with a setw(5)\n";

    //set precission (rounding)

    const double PI=3.14159265;
    cout<<setprecision(2)<<fixed<<PI<<endl;
    cout<<setprecision(2)<<scientific<<PI<<endl;

    double x=123456;//.72;
    cout<<setprecision(2)<<scientific<<x<<endl;

    cout<<setprecision(1)<<fixed<<123.45<<endl;

    //decimal,hexadecimal and binary conversion

    cout<<"____________________________________________________________________\n\n";
    cout<<"decimal: "<<dec<<127651<<"\tOct\t"<<oct<<127651<<"\thexadecimal\t"<<hex<<127651<<endl;

    // cout<<"1\t2\t3\n4\t5\t6\n7\t8\t9\r";

    cout<<"Enter your name\r";

    return 0;
}