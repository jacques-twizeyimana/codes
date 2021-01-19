#include<iostream>
using namespace std;

int quotient(int num1,int num2){
    return num1 / num2;    
}
int reminder(int num1,int num2){
    return (num1 % num2);    
}

int main(int argc, char const *argv[]){
    int num1,num2;
    cout << "Enter divisor:\t";
    cin>>num1;
    cout<<"Enter divident:\t";
    cin >> num2;
    cout <<"The division of "<<num1<<" by "<<num2<<" gives a quotient of "<<quotient(num1,num2)<<" and reminder of "<<reminder(num1,num2)<<endl;
    return 0;
}